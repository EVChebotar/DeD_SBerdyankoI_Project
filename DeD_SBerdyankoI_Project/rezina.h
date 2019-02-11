#ifndef REZINA_H
#define REZINA_H

#include <QDateTime>
#include <QTableWidget>
#include <QDebug>
#include <QLineEdit>

#include "mainwindow.h"

class Rezina
{
    //Q_OBJECT

private :
    QTime RezinaTime;
public :
    explicit Rezina(){

        RezinaTime.setHMS(6,23,54);

    }

    void organization(QDateTime RestartDateTime, QTableWidget *Table, QTime AlertTime);
    QDateTime correction(QDateTime RestartDateTime, QTime Correct, QLineEdit *isPlusCorrection);

};

#endif // REZINA_H
