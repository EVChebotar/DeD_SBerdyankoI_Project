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

        // Установка тайминга Везувия Вулкан
        VezaVulkanTime.setHMS(05,21,30);

        // Установка эталонного времени по +0 UTC
        VezaVulkanEtalon.setHMS(02,57,20);

    }

    void organization(QDateTime RestartDateTime, QTableWidget *Table, QTimeEdit *AccumCurrentTime, QLineEdit *isPlusAccum, QTime AlertTime, QTimeEdit *UTC, QLineEdit *UTCPlusMinus);

};

#endif // VEZA_VULKAN_H
