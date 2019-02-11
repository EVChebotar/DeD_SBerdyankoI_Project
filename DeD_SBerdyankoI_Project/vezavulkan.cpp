#include "vezavulkan.h"

void VezaVulkan :: organization(QDateTime RestartDateTime, QTableWidget *Table, QTimeEdit *AccumCurrentTime, QLineEdit *isPlusAccum, QTime AlertTime, QTimeEdit *UTC, QLineEdit *UTCPlusMinus){

    Table->setColumnCount(7);
    Table->setRowCount(5);
    Table->clear();

    QStringList CurrentWeek;    //Массив строк хранит в себе дни недели таблицы
    QDateTime BufDateTimeForColumn = RestartDateTime,   //Буфер для формирования дней недели в таблице
            NewTimeEtalon = RestartDateTime ; //По этой переменной будут формироваться поля таблицы, учитывая эталонное время

    //UTC, хранимое в qint64 с соответствующим UTC знаком
    qint64 UTCtoInt = UTC->time().hour();
    if (UTCPlusMinus->text() == "-") UTCtoInt = UTCtoInt * (-1);

    //установить дату эталонного UTC (+3)
    if (UTCtoInt <= 3) NewTimeEtalon = RestartDateTime.addSecs(( 3-UTCtoInt/*Т.к. эталоном считается время мск (+3 UTC), то вычесть 3*/ ) *60 *60  );
    else NewTimeEtalon = RestartDateTime.addSecs(-( UTCtoInt-3/*Т.к. эталоном считается время мск (+3 UTC), то вычесть 3*/ ) *60 *60  );

    //смещать эталонный тайм артефакта на UTC часов

    //Проверка, смещается ли эталонный день
    QDateTime BufDateTimeForEtalon = NewTimeEtalon;
    BufDateTimeForEtalon.setTime( VezaVulkanEtalon );
    BufDateTimeForEtalon = BufDateTimeForEtalon.addSecs( (UTCtoInt-3/*Т.к. эталоном считается время мск (+3 UTC), то вычесть 3*/ ) *60 *60  );

    //Установка даты для колонок таблицы
    BufDateTimeForColumn = BufDateTimeForEtalon;

    //хранит, чему равен текущий день
    qint64 BufMinusNew = 0;
    if (BufDateTimeForEtalon.date().day() < NewTimeEtalon.date().day()) BufMinusNew = -1;
    if(BufDateTimeForEtalon.date().day() > NewTimeEtalon.date().day()) BufMinusNew = 1;

    //qDebug() << BufMinusNew;

    NewTimeEtalon = NewTimeEtalon.addDays( BufMinusNew );

    NewTimeEtalon.setTime( VezaVulkanEtalon.addSecs( (UTCtoInt-3/*Т.к. эталоном считается время мск (+3 UTC), то вычесть 3*/ ) *60 *60) );

    //Формирование эталонного времени с учетом аккумулятора
    qint64 AccumInSecs = AccumCurrentTime->time().second() + (AccumCurrentTime->time().minute())*60;
    if ( isPlusAccum->text() == "+" ) NewTimeEtalon = NewTimeEtalon.addSecs(AccumInSecs);
    else NewTimeEtalon = NewTimeEtalon.addSecs( - AccumInSecs);

    while (NewTimeEtalon < QDateTime :: currentDateTime()){
        NewTimeEtalon=NewTimeEtalon.addSecs(VezaVulkanTime.second()+(VezaVulkanTime.minute()+VezaVulkanTime.hour()*60)*60);
        BufDateTimeForColumn=NewTimeEtalon;
    }

    int i=0, j=0;

    //Проход по неделям
    while(j<7){
        int CheckDate = NewTimeEtalon.date().day()+1;
        int CheckMonth = NewTimeEtalon.date().month()+1;

        CurrentWeek << BufDateTimeForColumn.date().toString("ddd dd MMM");

        i=0;

        //Итерация подсчета таймингов, пока не будет след. день
        while( (NewTimeEtalon.date().day() != CheckDate) && (NewTimeEtalon.date().month() != CheckMonth) ){


            if ( (NewTimeEtalon.date().day() != CheckDate) && (NewTimeEtalon.date().month() != CheckMonth) ){
                QString timestr = NewTimeEtalon.time().toString("HH:mm:ss");
                QTableWidgetItem *itm = new QTableWidgetItem;
                itm->setText(timestr);
                Table->setItem(i,j,itm);
                i++;
                //qDebug() << "Рассчитанный тайм Везы Вулкан :" << timestr << endl;
                NewTimeEtalon=NewTimeEtalon.addSecs(VezaVulkanTime.second()+(VezaVulkanTime.minute()+VezaVulkanTime.hour()*60)*60);

                timestr.clear();
            }
        }
        j++;
        BufDateTimeForColumn=BufDateTimeForColumn.addDays(1);
    };

    //Формирование дней недели таблицы (заголовки столбцов)
    Table->setHorizontalHeaderLabels(CurrentWeek);

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
    CurrentWeek.clear();
    BufDateTimeForColumn.~QDateTime();
}
