#ifndef PROVOD_H
#define PROVOD_H

#include <QDateTime>
#include <QDebug>
#include <QTableWidget>
#include <QLineEdit>
#include <QTimeEdit>

#include "mainwindow.h"

class Provod
{
    //Q_OBJECT

private :
    QTime ProvodTime;
    QTime ProvodEtalon;
public :
    explicit Provod(){

        //Установка тайминга Проводника
        ProvodTime.setHMS(06,38,00);

        //Установка эталонного времени по +0 UTC
        ProvodEtalon.setHMS(02,54,00);
/*
        //Установка эталонного времени по +0 UTC
        ProvodEtalon.setHMS(23,55,00);

        //Инициализация промежуточного QDateTime, который впоследствии будет равен эталонному времени по нужному utc (дата не важна)
        QDateTime UtcTime = QDateTime :: currentDateTime();

        //Переменная, хранящаяя значение UTC системы в секундах
        qint64 utc = UtcTime.offsetFromUtc();

        UtcTime.setTime(ProvodEtalon);
        UtcTime = UtcTime.addSecs(utc);

        ProvodEtalon.setHMS( UtcTime.time().hour(), UtcTime.time().minute(), UtcTime.time().second() );
        //qDebug() << ProvodEtalon;*/

    }

    void organization(QDateTime RestartDateTime, QTableWidget *Table, QTimeEdit *AccumCurrentTime, QLineEdit *isPlusAccum, QTime AlertTime, QTimeEdit *UTC, QLineEdit *UTCPlusMinus);

};

#endif // PROVOD_H
