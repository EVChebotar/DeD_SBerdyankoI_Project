#include <filescheck.h>

QDateTime FileCheck::ReadOrCreate(QString FileName,QDateTime RestartDateTime){

    // Инициализация создания / чтения файла
    QFile file(FileName);

    // Если файла не существует, в него записывается время компьютера в формате dd MMM yyyy  H:mm:ss
    if ( !file.exists() ) {

        qDebug() << "Файла" << file.fileName() << "не существует, создание файла"  << endl;

        file.open(QIODevice::WriteOnly);
        QDateTime RestartDateTime;
        RestartDateTime=RestartDateTime.currentDateTime();
        QByteArray data = RestartDateTime.toString("dd MMM yyyy  H:mm:ss").toUtf8();

        file.write(data);

        file.close();
        data.clear();

        qDebug() << "В созданный файл " << file.fileName() << "записана дата / время :" << RestartDateTime.toString("dd MMM yyyy  H:mm:ss") << endl;
        return RestartDateTime;

    }
    // Если файл существует, читается дата/время из него в формате dd MMM yyyy  H:mm:ss
    else{

        qDebug() << "Файл" << file.fileName() << "существует" << endl;

        file.open(QIODevice::ReadOnly);

        QString data = file.readLine();

        file.close();

        RestartDateTime=RestartDateTime.fromString(data,"dd MMM yyyy  H:mm:ss");
        data.clear();

        if(!RestartDateTime.isValid() || RestartDateTime.date().year() < 2018 /* Проверить, ошибочный ли год в файле (< текущего года) */
                || ( RestartDateTime.date() > QDate :: currentDate()
                     && RestartDateTime.time() > QTime :: currentTime() ) /* Проверить, > ли дата/время в файле, чем текущее время компьютера */){

            qDebug() << "Прочитанная из файла" << file.fileName() << "дата / время имеет ошибочный формат" << endl;

            file.open(QIODevice::WriteOnly | QIODevice::Truncate);

            RestartDateTime=RestartDateTime.currentDateTime();
            QByteArray data = RestartDateTime.toString("dd MMM yyyy  H:mm:ss").toUtf8();

            file.write(data);

            file.close();
            data.clear();

            qDebug() << "Файл " << file.fileName() << " перезаписан" << endl;


            return RestartDateTime;

        }
        else {
            qDebug() << "Прочитанная из файла" << file.fileName() << "дата / время :" << RestartDateTime.toString("dd MMM yyyy  H:mm:ss") << endl;
            return RestartDateTime;
        }

    }

}

void FileCheck :: ReadOrCreate(QString FileName, QTimeEdit *AccumCurrentTime){

    // Инициализация создания / чтения файла
    QFile file(FileName);

    // Если файла не существует, в него записывается нулевое время в формате mm : ss
    if ( !file.exists() ) {

        qDebug() << "Файла" << file.fileName() << "не существует, создание файла"  << endl;

        file.open(QIODevice::WriteOnly);

        QTime AccumToNull;  //хранит нулевое время
        AccumToNull.setHMS(0,0,0);
        QByteArray data = AccumToNull.toString("mm : ss").toUtf8();

        file.write(data);

        file.close();
        data.clear();

        qDebug() << "В созданный файл " << file.fileName() << "записано время :" << AccumToNull.toString("mm : ss") << endl;
        AccumCurrentTime->setTime(AccumToNull);

    }
    // Если файл существует, читается время из него в формате mm : ss
    else{

        qDebug() << "Файл" << file.fileName() << "существует" << endl;

        file.open(QIODevice::ReadOnly);

        QString data = file.readLine();

        file.close();

        QTime Accum = Accum.fromString(data, "mm : ss");    // Хранит прочитанную из файла строку
        data.clear();

        if(!Accum.isValid()){

            qDebug() << "Прочитанное из файла" << file.fileName() << "время имеет ошибочный формат" << endl;

            file.open(QIODevice::WriteOnly | QIODevice::Truncate);

            QTime AccumToNull;  // Хранит нулевое время
            AccumToNull.setHMS(0,0,0);
            QByteArray data = AccumToNull.toString("mm : ss").toUtf8();

            file.write(data);

            file.close();
            data.clear();

            qDebug() << "Файл " << file.fileName() << " перезаписан" << endl;
            AccumCurrentTime->setTime(AccumToNull);

        }
        else {
            qDebug() << "Прочитанное из файла" << file.fileName() << "время :" << Accum.toString("mm : ss") << endl;
            AccumCurrentTime->setTime(Accum);
        }

    }

}

void FileCheck :: ReadOrCreate(QString FileName, QTimeEdit *AlertTime, bool ShortTime){

    if( ShortTime ){
        // Инициализация создания / чтения файла
        QFile file(FileName);

        // Если файла не существует, в него записывается нулевое время в формате mm
        if ( !file.exists() ) {

            qDebug() << "Файла" << file.fileName() << "не существует, создание файла"  << endl;

            file.open(QIODevice::WriteOnly);

            QTime DefaultAlertTime;  //хранит нулевое время
            DefaultAlertTime.setHMS(0,59,0);
            QByteArray data = DefaultAlertTime.toString("mm").toUtf8();

            file.write(data);

            file.close();
            data.clear();

            qDebug() << "В созданный файл " << file.fileName() << "записано время :" << DefaultAlertTime.toString("mm") << endl;
            AlertTime->setTime(DefaultAlertTime);

        }
        // Если файл существует, читается время из него в формате mm
        else{

            qDebug() << "Файл" << file.fileName() << "существует" << endl;

            file.open(QIODevice::ReadOnly);

            QString data = file.readLine();

            file.close();

            QTime Accum = Accum.fromString(data, "mm");    // Хранит прочитанную из файла строку
            data.clear();

            if(!Accum.isValid()){

                qDebug() << "Прочитанное из файла" << file.fileName() << "время имеет ошибочный формат" << endl;

                file.open(QIODevice::WriteOnly | QIODevice::Truncate);

                QTime DefaultAlertTime;  //хранит нулевое время
                DefaultAlertTime.setHMS(0,59,0);
                QByteArray data = DefaultAlertTime.toString("mm").toUtf8();

                file.write(data);

                file.close();
                data.clear();

                qDebug() << "Файл " << file.fileName() << " перезаписан" << endl;
                AlertTime->setTime(DefaultAlertTime);

            }
            else {
                qDebug() << "Прочитанное из файла" << file.fileName() << "время :" << Accum.toString("mm") << endl;
                AlertTime->setTime(Accum);
            }

        }
    }
}

void FileCheck :: ReadOrCreate(QString FileName, QLineEdit *AccumPlusMinus){

    // Инициализация создания / чтения файла
    QFile file(FileName);

    // Если файла не существует, в него записывается значение в формате + или -
    if ( !file.exists() ) {

        qDebug() << "Файла" << file.fileName() << "не существует, создание файла"  << endl;

        file.open(QIODevice::WriteOnly);

        QString PlusMinus = "+";  // Хранит плюс

        QByteArray data = PlusMinus.toUtf8();

        file.write(data);

        file.close();
        data.clear();

        qDebug() << "В созданный файл " << file.fileName() << "записано значение :" << PlusMinus.toUtf8() << endl;
        AccumPlusMinus->setText(PlusMinus);

    }
    // Если файл существует, читается дата/время из него в формате + или -
    else{

        qDebug() << "Файл" << file.fileName() << "существует" << endl;

        file.open(QIODevice::ReadOnly);

        QString data = file.readLine();

        file.close();

        QString PlusMinus = data.toUtf8();    // Хранит прочитанную из файла строку
        data.clear();

        if(PlusMinus != "+" && PlusMinus != "-"){

            qDebug() << "Прочитанное из файла" << file.fileName() << "значение имеет ошибочный формат" << endl;

            file.open(QIODevice::WriteOnly | QIODevice::Truncate);

            QString PlusMinus = "+";  // Хранит плюс

            QByteArray data = PlusMinus.toUtf8();

            file.write(data);

            file.close();
            data.clear();

            qDebug() << "Файл " << file.fileName() << "перезаписан" << endl;
            AccumPlusMinus->setText(PlusMinus);

        }
        else {
            qDebug() << "Прочитанное из файла" << file.fileName() << "значение :" << PlusMinus.toUtf8() << endl;
            AccumPlusMinus->setText(PlusMinus);
        }

    }

}


void FileCheck::SaveFile(QString FileName,QDateTime RestartDateTime){

    // Инициализация создания / чтения файла
    QFile file(FileName);

    file.open(QIODevice::WriteOnly);

    QByteArray data = RestartDateTime.toString("dd MMM yyyy  H:mm:ss").toUtf8();

    file.write(data);

    file.close();

    data.clear();
}

void FileCheck::SaveFile(QString FileName, QTimeEdit *AccumCurrentTime){

    // Инициализация создания / чтения файла
    QFile file(FileName);

    file.open(QIODevice::WriteOnly);

    QByteArray data = AccumCurrentTime->time().toString("mm : ss").toUtf8();

    file.write(data);

    file.close();

    data.clear();
}

void FileCheck::SaveFile(QString FileName, QTimeEdit *AlertTime, bool ShortTime){

    if( ShortTime ){
        // Инициализация создания / чтения файла
        QFile file(FileName);

        file.open(QIODevice::WriteOnly);

        QByteArray data = AlertTime->time().toString("mm").toUtf8();

        file.write(data);

        file.close();

        data.clear();
    }
}

void FileCheck::SaveFile(QString FileName, QLineEdit *AccumPlusMinus){

    // Инициализация создания / чтения файла
    QFile file(FileName);

    file.open(QIODevice::WriteOnly);

    QByteArray data = AccumPlusMinus->text().toUtf8();

    file.write(data);

    file.close();

    data.clear();
}
