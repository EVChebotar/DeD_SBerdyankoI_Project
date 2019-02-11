#include "mainwindow.h"
#include <QApplication>
#include <QDir>
#include <QSettings>
#include <QDebug>

int main(int argc, char *argv[])
{
    qDebug() << "Запуск Main";

    QDir SystemStorage;
    SystemStorage.mkdir(SystemStorage.rootPath() + "zDeD_SBerdyankoI_Timing" );

    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    return a.exec();
}
