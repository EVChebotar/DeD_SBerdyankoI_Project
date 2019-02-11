#ifndef FILESCHECK_H
#define FILESCHECK_H

#include <QDateTime>
#include <QFile>
#include <QDebug>
#include <QLineEdit>
#include <QTimeEdit>

class FileCheck  {

public :

    QDateTime ReadOrCreate(QString FileName, QDateTime RestartDateTime);
    void ReadOrCreate(QString FileName, QTimeEdit *AccumCurrentTime);
    void ReadOrCreate(QString FileName, QLineEdit *AccumPlusMinus);
    void ReadOrCreate(QString FileName, QTimeEdit *AlertTime, bool ShortTime);

    void SaveFile(QString FileName, QDateTime RestartDateTime);
    void SaveFile(QString FileName, QTimeEdit *AccumCurrentTime);
    void SaveFile(QString FileName, QLineEdit *AccumPlusMinus);
    void SaveFile(QString FileName, QTimeEdit *AlertTime, bool ShortTime);

};

#endif // FILESCHECK_H
