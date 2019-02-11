#include "rezina.h"

void Rezina :: organization(QDateTime RestartDateTime, QTableWidget *Table, QTime AlertTime){

    //Резина считается напрямую от времени рестарта, поэтому ей не нужно знать какой стоит UTC в программе.
    //При смещении UTC смещается время рестарта резины, и реформируется таблица по измененному рестарту резины

    /*флаг для проверки, нужно ли менять цвет первого элемента таблицы
    (если резина уже идет)*/
    bool FirstRedOrNot = false;

    Table->setColumnCount(7);
    Table->setRowCount(4);
    Table->clear();

    QStringList CurrentWeek;    //Массив строк хранит в себе дни недели таблицы
    QDateTime BufDateTimeForColumn = RestartDateTime, //Нужна для формирования столбцов (недель) таблицы.

            BufDateTimeForAll = RestartDateTime;    //Нужна для корректировки таблицы, учитывая ситуации, когда :
    //1)Рестарт произожел в ближайшее время (не выводить первый стоблец,
    //т.к. после рестарта нет резины)
    //2)Резина идет сейчас (в течении часа или меньше до текущего времени).
    //Хранит время предыдущего рестарта от текущего, НУЖНА ДЛЯ ИСКЛЮЧЕНИЯ п.1

    //Отнять 23:54 минут от первого респа, т.к. первый респ после рестарта не смещается
    RestartDateTime=RestartDateTime.addSecs( -1434 )/* 23:54 */;

    while (RestartDateTime < QDateTime :: currentDateTime()){


        //Если Разница между текущим временем и ближайшим респом резины меньше/равна часу, то ближайшее время респа резины выводить в таблицу
        //Не выводить в случае, если рестарт был совсем недавно (то есть в промежутке < 6:20 до времени компьютера)
        if( (RestartDateTime.secsTo( QDateTime :: currentDateTime() ) <= 5400 /* 1 час 30 минут */ )
                && BufDateTimeForAll.secsTo( QDateTime :: currentDateTime() ) >= 23024 /* тайминг резины (6:23:54) */ ) {

            FirstRedOrNot=true;

            break;
        }

        BufDateTimeForAll = RestartDateTime;
        RestartDateTime=RestartDateTime.addSecs(RezinaTime.second()+(RezinaTime.minute()+RezinaTime.hour()*60)*60);

        BufDateTimeForColumn=RestartDateTime;

    }
    int i=0, j=0;

    //Проход по неделям
    while(j<7){
        int CheckDate = RestartDateTime.date().day()+1;
        int CheckMonth = RestartDateTime.date().month()+1;

        CurrentWeek << BufDateTimeForColumn.date().toString("ddd dd MMM");

        i=0;

        //Итерация подсчета таймингов, пока не будет след. день
        while( (RestartDateTime.date().day() != CheckDate) && (RestartDateTime.date().month() !=CheckMonth) )    {


            if ( (RestartDateTime.date().day() != CheckDate) && (RestartDateTime.date().month() !=CheckMonth) ){

                QString timestr = RestartDateTime.time().toString("HH:mm:ss");

                QTableWidgetItem *itm = new QTableWidgetItem;

                itm->setText(timestr);

                Table->setItem(i,j,itm);

                i++;
                //qDebug() << "Рассчитанный тайм резины :" << timestr << endl;

                RestartDateTime=RestartDateTime.addSecs(RezinaTime.second()+(RezinaTime.minute()+RezinaTime.hour()*60)*60);

                timestr.clear();
            }
        }
        j++;
        BufDateTimeForColumn = BufDateTimeForColumn.addDays(1);
    };

    //Формирование дней недели таблицы (заголовки столбцов)
    Table->setHorizontalHeaderLabels(CurrentWeek);

    //Нужно ли менять цвет первого элемента таблицы (если резина уже идет)
    if (FirstRedOrNot) Table->item(0,0)->setTextColor(Qt :: darkRed);

    //Проверить, есть ли час или меньше до ближайшего респа (если есть, отметить указанное поле таблицы зеленым)
    else {

        //Формирование Даты/Времени респа ближайшего артефакта (1 строка 1 столбец)

        //Время респа ближайшего артефакта - берется из таблицы
        QTime TestTimeForFirstTableItem = TestTimeForFirstTableItem.fromString( Table->item(0,0)->text() );

        //Дата респа ближайшего артефакта - берется из таблицы
        //(необходима, т.к. столбцы таблицы не хранят время года. Год берется из BufDateTimeForColumn -7 дней)
        QDate TestDateForFirstTableItem =
                TestDateForFirstTableItem.fromString( BufDateTimeForColumn.addDays
                                                      (-7 /*-7 потому что нужен первый день в таблице*/ ).toString("yyyy ")
                                                      + Table->horizontalHeaderItem(0)->text(), "yyyy ddd dd MMM");

        //Общая Дата/Время, которые и будут сравниваться со временем компьютера
        QDateTime TestAll;

        TestAll.setDate(TestDateForFirstTableItem);
        TestAll.setTime(TestTimeForFirstTableItem);

        //qDebug() << TestAll;
        //Если разница между Датой/Временем компьютера и Датой/Временем респа ближайшего артефакта (1 строка 1 столбец)
        //час или меньше, то отметить указанное поле зеленым
        if( QDateTime :: currentDateTime().secsTo( TestAll ) <= AlertTime.minute()*60 /* 59 минут по умолчанию, можно сменить на сколько угодно */ )
            Table->item(0,0)->setTextColor(Qt :: darkGreen);

        TestAll.~QDateTime();

    }

    CurrentWeek.clear();
    BufDateTimeForColumn.~QDateTime();
}

QDateTime Rezina::correction(QDateTime RestartDateTime, QTime Correct, QLineEdit *isPlusCorrection){
    //if(isPlus) RestartDateTime = RestartDateTime.addSecs( (Correct.minute())*60 + Correct.second() );

    bool isPlus=true;
    if(isPlusCorrection->text()=="+") isPlus=true;
    else isPlus=false;

    QDateTime RDTFT = RestartDateTime;
    if(isPlus) RDTFT=RDTFT.addSecs( (Correct.minute())*60 + Correct.second() );
    if( (RDTFT>=QDateTime :: currentDateTime()) || (Correct.minute()==0 && Correct.second()==0) ){
        qDebug() << "Скорректированный тайм резины :" << "Без изменений (корректировка не указана, или превышает время компьютера!)" << endl;
        return RestartDateTime;
    }
    else {
        if (isPlus){
            qDebug() << "Скорректированный тайм резины :" << RDTFT.toString("dd MMM yyyy  H:mm:ss") << endl;
            return RDTFT;
        }
        else {
            RestartDateTime = RestartDateTime.addSecs(-( (Correct.minute())*60 + Correct.second() ) );
            qDebug() << "Скорректированный тайм резины :" << RestartDateTime.toString("dd MMM yyyy  H:mm:ss") << endl;
            return RestartDateTime;
        }
    }
}
