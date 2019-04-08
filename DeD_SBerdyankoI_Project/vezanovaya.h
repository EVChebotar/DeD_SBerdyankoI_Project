#ifndef VEZANOVAYA_H
#define VEZANOVAYA_H

#include <QDateTime>
#include <QDebug>
#include <QTableWidget>
#include <QLineEdit>
#include <QTimeEdit>

#include "mainwindow.h"

class VezaNovaya
{
    //Q_OBJECT

private :
    QTime VezaNovayaTime;
    QTime VezaNovayaEtalon;

public :
    explicit VezaNovaya(){

        // Установка тайминга Везувия Новая Земля
        VezaNovayaTime.setHMS(04,49,50);

        // Установка эталонного времени по +0 UTC
        VezaNovayaEtalon.setHMS(02,58,20);

    }

    void organization(QDateTime RestartDateTime, QTableWidget *Table, QTimeEdit *AccumCurrentTime, QLineEdit *isPlusAccum, QTime AlertTime, QTimeEdit *UTC, QLineEdit *UTCPlusMinus);

};

#endif // VEZANOVAYA_H
