#ifndef VEZA_VULKAN_H
#define VEZA_VULKAN_H

#include <QDateTime>
#include <QDebug>
#include <QTableWidget>
#include <QLineEdit>
#include <QTimeEdit>

#include "mainwindow.h"

class VezaVulkan
{
    //Q_OBJECT

private :
    QTime VezaVulkanTime;
    QTime VezaVulkanEtalon;
public :
    explicit VezaVulkan(){

        //Установка тайминга Везувия Вулкан
        VezaVulkanTime.setHMS(05,21,30);

        //Установка эталонного времени по +0 UTC
        VezaVulkanEtalon.setHMS(02,57,20);
/*
        //Установка эталонного времени по +0 UTC
        VezaVulkanEtalon.setHMS(23,57,00);

        //Инициализация промежуточного QDateTime, который впоследствии будет равен эталонному времени по нужному utc (дата не важна)
        QDateTime UtcTime = QDateTime :: currentDateTime();

        //Переменная, хранящаяя значение UTC системы в секундах
        qint64 utc = UtcTime.offsetFromUtc();

        UtcTime.setTime(VezaVulkanEtalon);
        UtcTime = UtcTime.addSecs(utc);

        VezaVulkanEtalon.setHMS( UtcTime.time().hour(), UtcTime.time().minute(), UtcTime.time().second() );
        //qDebug() << VezaVulkanEtalon;*/

    }

    void organization(QDateTime RestartDateTime, QTableWidget *Table, QTimeEdit *AccumCurrentTime, QLineEdit *isPlusAccum, QTime AlertTime, QTimeEdit *UTC, QLineEdit *UTCPlusMinus);

};

#endif // VEZA_VULKAN_H
