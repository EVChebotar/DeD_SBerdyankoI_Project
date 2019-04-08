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

    }

    void organization(QDateTime RestartDateTime, QTableWidget *Table, QTimeEdit *AccumCurrentTime, QLineEdit *isPlusAccum, QTime AlertTime, QTimeEdit *UTC, QLineEdit *UTCPlusMinus);

};

#endif // PROVOD_H
