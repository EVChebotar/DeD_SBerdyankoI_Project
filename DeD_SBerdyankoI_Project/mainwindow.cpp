#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rezina.h"
#include "vezavulkan.h"
#include "vezanovaya.h"
#include "provod.h"
#include "filescheck.h"
#include "accumulator.h"

#include "about.h"
#include "generalinformation.h"
#include "writeme.h"

#include <QFile>
#include <QDir>
#include <QMessageBox>
#include <QTimer>
#include <QCloseEvent>

QDir Root( Root.rootPath() );
QString SystemStorage(Root.path() + "zDeD_SBerdyankoI_Timing/");


QString FileAlertTime = SystemStorage + "AlertTime";


QString FileAll = SystemStorage + "All";


QString FileRezina = SystemStorage + "Rezina";


QString FileVezaVulkan = SystemStorage + "VezaVulkan";

QString FileVezaVulkanPlusMinusCorrection = SystemStorage + "VezaVulkanPlusMinusCorrection";
QString FileVezaVulkanCorrection = SystemStorage + "VezaVulkanCorrection";


QString FileVezaNovaya = SystemStorage + "VezaNovaya";

QString FileVezaNovayaPlusMinusCorrection = SystemStorage + "VezaNovayaPlusMinusCorrection";
QString FileVezaNovayaCorrection = SystemStorage + "VezaNovayaCorrection";


QString FileProvod = SystemStorage + "Provod";

QString FileProvodPlusMinusCorrection = SystemStorage + "ProvodPlusMinusCorrection";
QString FileProvodCorrection = SystemStorage + "ProvodCorrection";


QDateTime RestartDateTimeAll = QDateTime::currentDateTime();

QDateTime RestartDateTimeRezina = QDateTime::currentDateTime();

QDateTime RestartDateTimeVezaVulkan = QDateTime::currentDateTime();

QDateTime RestartDateTimeVezaNovaya = QDateTime::currentDateTime();

QDateTime RestartDateTimeProvod = QDateTime::currentDateTime();


//Инициализация таймера обновления таблиц (реализация работы в реальном времени)
QTimer *timer = new QTimer();
QTimer *CurrentTimeTimer = new QTimer();

//Флаг, отслеживающий, происходили ли какие - то изменения в программе (при закрытии программы предложить сохраниться, если флаг true)
bool IsSaveAfterExit = false;

//Переменная, хранящая последнее UTC в программе
qint64 UTCLastTime = 0;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Инициализация значения времени часового пояса

    //Инициализация промежуточной даты/времени, из которой будет извлекаться UTC
    ui->UTSTime->setMaximumDateTime(QDateTime::currentDateTime());
    QDateTime UtcBufDateTime = QDateTime :: currentDateTime();

    //Переменная, хранящаяя значение UTC системы в секундах
    qint64 utc = UtcBufDateTime.offsetFromUtc() / 60 / 60;

    if(utc < 0 ){

        //если Utc < 0, поменять знак на плюс
        utc = utc * -1;

        //Настройка знака UTC
        ui->UTSPlusMInus->setText("-");
    }
    else{

        //Настройка знака UTC
        ui->UTSPlusMInus->setText("+");
    }

    //Инициализация промежуточного QTime
    QTime UtcTime = QTime( utc, 0, 0);

    //Настройка поля UTC
    ui->UTSTime->setTime(UtcTime);

    //Глобальная переменная последнего UTC перед изменением
    UTCLastTime = ui->UTSTime->time().hour();
    if ( ui->UTSPlusMInus->text() == ("-") ) UTCLastTime = UTCLastTime * (-1);

    //Инициализация текущего времени в CurrentTime
    ui->CurrentTime->setTime( QTime :: currentTime() );

    //Инициализация сигнала вывода текущего времени и UTC
    connect(CurrentTimeTimer,SIGNAL(timeout()),this,SLOT( CurrentTimeUpdate() ) );

    //Запуск таймера
    CurrentTimeTimer->start(500);

    //Инициализация сигнала обновления таблиц (реализация работы в реальном времени)
    connect(timer, SIGNAL(timeout()),this, SLOT(UpdateButtonTrigger()));
    //Установка кнопки работы в реальном времени в clicked
    ui->UpdateButton->click();

    //Установка партнеров для каждого label
    ui->AlertTimelabel->setBuddy(ui->AlertTime);
    ui->labelRezinaDateTimeRestart->setBuddy(ui->RezinaRestart);
    ui->labelVezaVulkanRestart->setBuddy(ui->VezaVulkanRestart);
    ui->labelVezaNovayaRestart->setBuddy(ui->VezaNovayaRestart);
    ui->labelProvodRestart->setBuddy(ui->ProvodRestart);

    //Инициализация валидаторов +- для конкретных LineEdit
    QRegExp PM("[+,-]{1}");

    ui->UTSPlusMInus->setValidator(new QRegExpValidator(PM,this));

    ui->RezinaPlusMinus->setValidator(new QRegExpValidator(PM,this));

    ui->VezaVulkanPlusMinus->setValidator(new QRegExpValidator(PM,this));
    ui->VezaVulkanPlusMinusCorrection->setValidator(new QRegExpValidator(PM,this));

    ui->VezaNovayaPlusMinus->setValidator(new QRegExpValidator(PM,this));
    ui->VezaNovayaPlusMinusCorrection->setValidator(new QRegExpValidator(PM,this));

    ui->ProvodPlusMinus->setValidator(new QRegExpValidator(PM,this));
    ui->ProvodPlusMinusCorrection->setValidator(new QRegExpValidator(PM,this));

    //Отключение всех кнопок корректировки
    ui->EditTimingRezina->setEnabled(false);

    ui->EditTimingVezaVulkan->setEnabled(false);

    ui->EditTimingVezaNovaya->setEnabled(false);

    ui->EditTimingProvod->setEnabled(false);

    FileCheck *CheckFiles = new FileCheck;

    //Чтение файлов всех аккумуляторов и их знаков. ПОРЯДОК : вначале знак, потом сам аккумулятор!!!
    CheckFiles->ReadOrCreate(FileVezaVulkanPlusMinusCorrection,ui->VezaVulkanPlusMinusCorrection);
    CheckFiles->ReadOrCreate(FileVezaVulkanCorrection, ui->VezaVulkanEditCorrection);

    CheckFiles->ReadOrCreate(FileVezaNovayaPlusMinusCorrection,ui->VezaNovayaPlusMinusCorrection);
    CheckFiles->ReadOrCreate(FileVezaNovayaCorrection, ui->VezaNovayaEditCorrection);

    CheckFiles->ReadOrCreate(FileProvodPlusMinusCorrection,ui->ProvodPlusMinusCorrection);
    CheckFiles->ReadOrCreate(FileProvodCorrection, ui->ProvodEditCorrection);

    //Чтение файла AlertTime (время оповещения о начале респа артефактов)
    CheckFiles->ReadOrCreate(FileAlertTime,ui->AlertTime,true);

    //Проверка содержимого файлов, если файл пуст, то выставление времени компьютера как время рестарта,
    //если нет - чтение файла и присваивания соответствующих значений переменным

    RestartDateTimeAll=CheckFiles->ReadOrCreate(FileAll,RestartDateTimeAll);

    RestartDateTimeRezina=CheckFiles->ReadOrCreate(FileRezina,RestartDateTimeRezina);

    RestartDateTimeVezaVulkan=CheckFiles->ReadOrCreate(FileVezaVulkan,RestartDateTimeVezaVulkan);

    RestartDateTimeVezaNovaya=CheckFiles->ReadOrCreate(FileVezaNovaya,RestartDateTimeVezaNovaya);

    RestartDateTimeProvod=CheckFiles->ReadOrCreate(FileProvod,RestartDateTimeProvod);

    delete CheckFiles;
    qDebug() << "Класс Filecheck очищен после вызова метода ReadOrCreate" << endl;

    // установка времени рестарта для каждого QDateTimeEdit
    ui->AllRestart->setDateTime(RestartDateTimeAll);

    ui->RezinaRestart->setDateTime(RestartDateTimeRezina);

    ui->VezaVulkanRestart->setDateTime(RestartDateTimeVezaVulkan);

    ui->VezaNovayaRestart->setDateTime(RestartDateTimeVezaNovaya);

    ui->ProvodRestart->setDateTime(RestartDateTimeProvod);

    //Настройка кнопок слоя "AllRestart"
    ui->AllRestartApplyButton->setVisible(false);
    ui->AllRestartCancelButton->setVisible(false);
    ui->AllRestart->setEnabled(false);
    ui->EditAllRestart->setChecked(false);

    //Вывод сообщения в StatusBar
    ui->statusBar->showMessage("Все файлы прочитаны/перезаписаны", 2000);

    //Занулить флаг после формирования таблиц, дат и аккумуляторов
    IsSaveAfterExit = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::CurrentTimeUpdate()
{
    ui->CurrentTime->setTime( QTime :: currentTime() );

    //Инициализация значения времени часового пояса

    //Инициализация промежуточной даты/времени, из которой будет извлекаться UTC

    QDateTime UtcBufDateTime;

    UtcBufDateTime = QDateTime::currentDateTime();

    //СПЕЦИАЛЬНАЯ ВСТАВКА (какой то баг Qt, если не вставить строку ниже - UTC в UtcBufDateTime хранится с задержкой на шаг)
    UtcBufDateTime=UtcBufDateTime.addSecs(0);

    //Переменная, хранящаяя значение UTC системы в секундах
    qint64 utc = UtcBufDateTime.offsetFromUtc() / 60 / 60;
    //Если UTC поменялся
    if( utc != UTCLastTime ) {
        if( utc < 0 ){

            //если Utc < 0, поменять знак на плюс
            utc = utc * -1;

            //Настройка знака UTC
            ui->UTSPlusMInus->setText("-");
        }
        else{

            //Настройка знака UTC
            ui->UTSPlusMInus->setText("+");
        }

        //Инициализация промежуточного QTime
        QTime UtcTime = QTime( utc, 0, 0);

        //настройка поля UTC
        ui->UTSTime->setTime(UtcTime);

        MainWindow::UTCTrigger();

        //Глобальная переменная последнего UTC перед изменением
        UTCLastTime = ui->UTSTime->time().hour();
        if ( ui->UTSPlusMInus->text() == ("-") ) UTCLastTime = UTCLastTime * (-1);
    }
}

void MainWindow::UTCTrigger()
{
    //перевод UTC программы в qint64 со знаком
    qint64 AddTime = 0;

    qint64 UTCBufTime = ui->UTSTime->time().hour();
    if(ui->UTSPlusMInus->text() == "-") UTCBufTime = UTCBufTime * (-1);

    if( UTCLastTime > UTCBufTime ){
        AddTime = (UTCLastTime - UTCBufTime) * -1;
    }
    else if( UTCLastTime < UTCBufTime ){
        AddTime = UTCBufTime - UTCLastTime;
    }

    //qDebug() << "AddTime=" << AddTime << "LastTime=" << UTCLastTime << "BufTime=" << UTCBufTime;

    //Промежуточная дата/время, хранящая измененное время рестартов
    QDateTime EditDateTimeAfterUTCChange = ui->AllRestart->dateTime();
    EditDateTimeAfterUTCChange = EditDateTimeAfterUTCChange.addSecs(AddTime*60*60);

    //СПЕЦИАЛЬНАЯ ВСТАВКА (какой то баг Qt, если не вставить строку ниже - UTC в UtcBufDateTime хранится с задержкой на шаг)
    QDateTime UtcBufDateTime;
    UtcBufDateTime = QDateTime::currentDateTime();
    UtcBufDateTime=UtcBufDateTime.addSecs(0);

    //Изменение максимальных дат/времен рестарта
    ui->RezinaRestart->setMaximumDateTime(QDateTime::currentDateTime());
    ui->VezaVulkanRestart->setMaximumDateTime(QDateTime::currentDateTime());
    ui->VezaNovayaRestart->setMaximumDateTime(QDateTime::currentDateTime());
    ui->ProvodRestart->setMaximumDateTime(QDateTime::currentDateTime());
    ui->AllRestart->setMaximumDateTime(QDateTime::currentDateTime());

    //Установка смещения на AddTime часов всех времен рестарта
    ui->AllRestart->setDateTime( EditDateTimeAfterUTCChange );
    ui->AllRestartApplyButton->click();

    //Глобальная переменная последнего UTC перед изменением
    UTCLastTime = ui->UTSTime->time().hour();
    if ( ui->UTSPlusMInus->text() == ("-") ) UTCLastTime = UTCLastTime * (-1);

    //qDebug() << UTCLastTime;
}

void MainWindow::on_VezaVulkanEditCorrection_userTimeChanged()
{
    ui->VezaVulkanRestart->setMaximumDateTime(QDateTime::currentDateTime());
    //Читаем из строки даты / времени данные
    RestartDateTimeVezaVulkan = ui->VezaVulkanRestart->dateTime();

    //Считаем тайминги по считанной строки даты / времени
    VezaVulkan *VezaVulkanAll = new VezaVulkan();

    VezaVulkanAll->organization(RestartDateTimeVezaVulkan,ui->VezaVulkanTable, ui->VezaVulkanEditCorrection, ui->VezaVulkanPlusMinusCorrection, ui->AlertTime->time(), ui->UTSTime, ui->UTSPlusMInus);

    delete VezaVulkanAll;
    qDebug() << "Класс VezaVulkan очищен после вызова метода organization" << endl;

    ui->VezaVulkanPlusMinus->setText("+");
    QTime NullTime(0,0,0);
    ui->VezaVulkanEdit->setTime(NullTime);
    ui->EditTimingVezaVulkan->setEnabled(false);
}

void MainWindow::on_VezaVulkanPlusMinusCorrection_textChanged()
{
    ui->VezaVulkanRestart->setMaximumDateTime(QDateTime::currentDateTime());
    //Читаем из строки даты / времени данные
    RestartDateTimeVezaVulkan = ui->VezaVulkanRestart->dateTime();

    //Считаем тайминги по считанной строки даты / времени
    VezaVulkan *VezaVulkanAll = new VezaVulkan();

    VezaVulkanAll->organization(RestartDateTimeVezaVulkan,ui->VezaVulkanTable, ui->VezaVulkanEditCorrection, ui->VezaVulkanPlusMinusCorrection, ui->AlertTime->time(), ui->UTSTime, ui->UTSPlusMInus);

    delete VezaVulkanAll;
    qDebug() << "Класс VezaVulkan очищен после вызова метода organization" << endl;

    ui->VezaVulkanPlusMinus->setText("+");
    QTime NullTime(0,0,0);
    ui->VezaVulkanEdit->setTime(NullTime);
    ui->EditTimingVezaVulkan->setEnabled(false);
}

void MainWindow::on_VezaNovayaEditCorrection_userTimeChanged()
{
    ui->VezaNovayaRestart->setMaximumDateTime(QDateTime::currentDateTime());
    //Читаем из строки даты / времени данные
    RestartDateTimeVezaNovaya = ui->VezaNovayaRestart->dateTime();

    //Считаем тайминги по считанной строки даты / времени
    VezaNovaya *VezaNovayaAll = new VezaNovaya();

    VezaNovayaAll->organization(RestartDateTimeVezaNovaya,ui->VezaNovayaTable, ui->VezaNovayaEditCorrection, ui->VezaNovayaPlusMinusCorrection, ui->AlertTime->time(), ui->UTSTime, ui->UTSPlusMInus);

    delete VezaNovayaAll;
    qDebug() << "Класс VezaNovaya очищен после вызова метода organization" << endl;

    ui->VezaNovayaPlusMinus->setText("+");
    QTime NullTime(0,0,0);
    ui->VezaNovayaEdit->setTime(NullTime);
    ui->EditTimingVezaNovaya->setEnabled(false);
}

void MainWindow::on_VezaNovayaPlusMinusCorrection_textChanged()
{
    ui->VezaNovayaRestart->setMaximumDateTime(QDateTime::currentDateTime());
    //Читаем из строки даты / времени данные
    RestartDateTimeVezaNovaya = ui->VezaNovayaRestart->dateTime();

    //Считаем тайминги по считанной строки даты / времени
    VezaNovaya *VezaNovayaAll = new VezaNovaya();

    VezaNovayaAll->organization(RestartDateTimeVezaNovaya,ui->VezaNovayaTable, ui->VezaNovayaEditCorrection, ui->VezaNovayaPlusMinusCorrection, ui->AlertTime->time(), ui->UTSTime, ui->UTSPlusMInus);

    delete VezaNovayaAll;
    qDebug() << "Класс VezaNovaya очищен после вызова метода organization" << endl;

    ui->VezaNovayaPlusMinus->setText("+");
    QTime NullTime(0,0,0);
    ui->VezaNovayaEdit->setTime(NullTime);
    ui->EditTimingVezaNovaya->setEnabled(false);
}

void MainWindow::on_ProvodEditCorrection_userTimeChanged()
{
    ui->ProvodRestart->setMaximumDateTime(QDateTime::currentDateTime());
    //Читаем из строки даты / времени данные
    RestartDateTimeProvod = ui->ProvodRestart->dateTime();

    //Считаем тайминги по считанной строки даты / времени
    Provod *ProvodAll = new Provod();

    ProvodAll->organization(RestartDateTimeProvod,ui->ProvodTable, ui->ProvodEditCorrection, ui->ProvodPlusMinusCorrection, ui->AlertTime->time(), ui->UTSTime, ui->UTSPlusMInus);

    delete ProvodAll;
    qDebug() << "Класс Provod очищен после вызова метода organization" << endl;

    ui->ProvodPlusMinus->setText("+");
    QTime NullTime(0,0,0);
    ui->ProvodEdit->setTime(NullTime);
    ui->EditTimingProvod->setEnabled(false);
}

void MainWindow::on_ProvodPlusMinusCorrection_textChanged()
{
    ui->ProvodRestart->setMaximumDateTime(QDateTime::currentDateTime());
    //Читаем из строки даты / времени данные
    RestartDateTimeProvod = ui->ProvodRestart->dateTime();

    //Считаем тайминги по считанной строки даты / времени
    Provod *ProvodAll = new Provod();

    ProvodAll->organization(RestartDateTimeProvod,ui->ProvodTable, ui->ProvodEditCorrection, ui->ProvodPlusMinusCorrection, ui->AlertTime->time(), ui->UTSTime, ui->UTSPlusMInus);

    delete ProvodAll;
    qDebug() << "Класс Provod очищен после вызова метода organization" << endl;

    ui->ProvodPlusMinus->setText("+");
    QTime NullTime(0,0,0);
    ui->ProvodEdit->setTime(NullTime);
    ui->EditTimingProvod->setEnabled(false);
}

void MainWindow::on_RezinaRestart_dateTimeChanged()
{
    ui->RezinaRestart->setMaximumDateTime(QDateTime::currentDateTime());
    //Читаем из строки даты / времени данные
    RestartDateTimeRezina = ui->RezinaRestart->dateTime();

    //Считаем тайминги по считанной строки даты / времени
    Rezina *RezinaAll = new Rezina();

    RezinaAll->organization(RestartDateTimeRezina,ui->RezinaTable, ui->AlertTime->time());

    delete RezinaAll;
    qDebug() << "Класс Rezina очищен после вызова метода organization" << endl;

    //Включить флаг, отслеживающий, происходили ли какие - то изменения в программе
    IsSaveAfterExit = true;
}

void MainWindow::on_VezaVulkanRestart_dateTimeChanged()
{
    ui->VezaVulkanRestart->setMaximumDateTime(QDateTime::currentDateTime());
    //Читаем из строки даты / времени данные
    RestartDateTimeVezaVulkan = ui->VezaVulkanRestart->dateTime();

    //Считаем тайминги по считанной строки даты / времени
    VezaVulkan *VezaVulkanAll = new VezaVulkan();

    VezaVulkanAll->organization(RestartDateTimeVezaVulkan,ui->VezaVulkanTable, ui->VezaVulkanEditCorrection, ui->VezaVulkanPlusMinusCorrection, ui->AlertTime->time(), ui->UTSTime, ui->UTSPlusMInus);

    delete VezaVulkanAll;
    qDebug() << "Класс VezaVulkan очищен после вызова метода organization" << endl;

    //Включить флаг, отслеживающий, происходили ли какие - то изменения в программе
    IsSaveAfterExit = true;
}

void MainWindow::on_VezaNovayaRestart_dateTimeChanged()
{
    ui->VezaNovayaRestart->setMaximumDateTime(QDateTime::currentDateTime());
    //Читаем из строки даты / времени данные
    RestartDateTimeVezaNovaya = ui->VezaNovayaRestart->dateTime();

    //Считаем тайминги по считанной строки даты / времени
    VezaNovaya *VezaNovayaAll = new VezaNovaya();

    VezaNovayaAll->organization(RestartDateTimeVezaNovaya,ui->VezaNovayaTable, ui->VezaNovayaEditCorrection, ui->VezaNovayaPlusMinusCorrection, ui->AlertTime->time(), ui->UTSTime, ui->UTSPlusMInus);

    delete VezaNovayaAll;
    qDebug() << "Класс VezaNovaya очищен после вызова метода organization" << endl;

    //Включить флаг, отслеживающий, происходили ли какие - то изменения в программе
    IsSaveAfterExit = true;
}

void MainWindow::on_ProvodRestart_dateTimeChanged()
{
    ui->ProvodRestart->setMaximumDateTime(QDateTime::currentDateTime());
    //Читаем из строки даты / времени данные
    RestartDateTimeProvod = ui->ProvodRestart->dateTime();

    //Считаем тайминги по считанной строки даты / времени
    Provod *ProvodAll = new Provod();

    ProvodAll->organization(RestartDateTimeProvod,ui->ProvodTable, ui->ProvodEditCorrection, ui->ProvodPlusMinusCorrection, ui->AlertTime->time(), ui->UTSTime, ui->UTSPlusMInus);

    delete ProvodAll;
    qDebug() << "Класс Provod очищен после вызова метода organization" << endl;

    //Включить флаг, отслеживающий, происходили ли какие - то изменения в программе
    IsSaveAfterExit = true;
}

void MainWindow::on_SaveAll_triggered()
{

    FileCheck *SaveFiles = new FileCheck;

    SaveFiles->SaveFile(FileAll,RestartDateTimeAll);

    SaveFiles->SaveFile(FileAlertTime,ui->AlertTime,true);

    SaveFiles->SaveFile(FileRezina,RestartDateTimeRezina);

    SaveFiles->SaveFile(FileVezaVulkan,RestartDateTimeVezaVulkan);
    SaveFiles->SaveFile(FileVezaVulkanCorrection, ui->VezaVulkanEditCorrection);
    SaveFiles->SaveFile(FileVezaVulkanPlusMinusCorrection,ui->VezaVulkanPlusMinusCorrection);

    SaveFiles->SaveFile(FileVezaNovaya,RestartDateTimeVezaNovaya);
    SaveFiles->SaveFile(FileVezaNovayaCorrection, ui->VezaNovayaEditCorrection);
    SaveFiles->SaveFile(FileVezaNovayaPlusMinusCorrection,ui->VezaNovayaPlusMinusCorrection);

    SaveFiles->SaveFile(FileProvod,RestartDateTimeProvod);
    SaveFiles->SaveFile(FileProvodCorrection, ui->ProvodEditCorrection);
    SaveFiles->SaveFile(FileProvodPlusMinusCorrection,ui->ProvodPlusMinusCorrection);

    delete SaveFiles;
    qDebug() << "Класс SaveFiles очищен после вызова метода SaveFile" << endl;

    //Настройка кнопок слоя "AllRestart"
    ui->AllRestartApplyButton->setVisible(false);
    ui->AllRestartCancelButton->setVisible(false);
    ui->AllRestart->setEnabled(false);
    ui->EditAllRestart->setChecked(false);

    //Вывод сообщения в StatusBar
    ui->statusBar->showMessage("Изменения сохранены", 2000);

    //Занулить флаг, отслеживающий, происходили ли какие - то изменения в программе
    IsSaveAfterExit = false;
}

void MainWindow::on_EditTimingRezina_clicked()
{
    if (ui->RezinaPlusMinus->text()=="") ui->RezinaPlusMinus->setText("+");
    RestartDateTimeRezina=ui->RezinaRestart->dateTime();

    Rezina *RezinaAll = new Rezina();
    RestartDateTimeRezina=RezinaAll->correction(RestartDateTimeRezina,ui->RezinaEdit->time(),ui->RezinaPlusMinus);

    ui->RezinaRestart->setMaximumDateTime(QDateTime::currentDateTime());
    ui->RezinaRestart->setDateTime(RestartDateTimeRezina);

    delete RezinaAll;
    qDebug() << "Класс Rezina очищен после вызова метода correction" << endl;

    ui->RezinaPlusMinus->setText("+");
    QTime NullTime(0,0,0);
    ui->RezinaEdit->setTime(NullTime);
    ui->EditTimingRezina->setEnabled(false);

    //Включить флаг, отслеживающий, происходили ли какие - то изменения в программе
    IsSaveAfterExit = true;
}

void MainWindow::on_EditTimingVezaVulkan_clicked()
{
    if (ui->VezaVulkanPlusMinus->text() =="") ui->VezaVulkanPlusMinus->setText("+");
    if (ui->VezaVulkanPlusMinusCorrection->text() == "") ui->VezaVulkanPlusMinusCorrection->setText("+");

    Accumulator *VezaVulkanAccum = new Accumulator;
    VezaVulkanAccum->Summ(ui->VezaVulkanPlusMinus, ui->VezaVulkanEdit, ui->VezaVulkanEditCorrection, ui->VezaVulkanPlusMinusCorrection);

    delete VezaVulkanAccum;
    qDebug() << "Класс Accumulator очищен после вызова метода Summ" << endl;

    //Включить флаг, отслеживающий, происходили ли какие - то изменения в программе
    IsSaveAfterExit = true;
}

void MainWindow::on_EditTimingVezaNovaya_clicked()
{
    if (ui->VezaNovayaPlusMinus->text() =="") ui->VezaNovayaPlusMinus->setText("+");
    if (ui->VezaNovayaPlusMinusCorrection->text() == "") ui->VezaNovayaPlusMinusCorrection->setText("+");

    Accumulator *VezaNovayaAccum = new Accumulator;
    VezaNovayaAccum->Summ(ui->VezaNovayaPlusMinus, ui->VezaNovayaEdit, ui->VezaNovayaEditCorrection, ui->VezaNovayaPlusMinusCorrection);

    delete VezaNovayaAccum;
    qDebug() << "Класс Accumulator очищен после вызова метода Summ" << endl;

    //Включить флаг, отслеживающий, происходили ли какие - то изменения в программе
    IsSaveAfterExit = true;
}

void MainWindow::on_EditTimingProvod_clicked()
{
    if (ui->ProvodPlusMinus->text() =="") ui->ProvodPlusMinus->setText("+");
    if (ui->ProvodPlusMinusCorrection->text() == "") ui->ProvodPlusMinusCorrection->setText("+");

    Accumulator *ProvodAccum = new Accumulator;
    ProvodAccum->Summ(ui->ProvodPlusMinus, ui->ProvodEdit, ui->ProvodEditCorrection, ui->ProvodPlusMinusCorrection);

    delete ProvodAccum;
    qDebug() << "Класс Accumulator очищен после вызова метода Summ" << endl;

    //Включить флаг, отслеживающий, происходили ли какие - то изменения в программе
    IsSaveAfterExit = true;
}

void MainWindow::on_RezinaEdit_userTimeChanged()
{
    ui->EditTimingRezina->setEnabled(true);
}

void MainWindow::on_VezaVulkanEdit_userTimeChanged()
{
    ui->EditTimingVezaVulkan->setEnabled(true);
}

void MainWindow::on_VezaNovayaEdit_userTimeChanged()
{
    ui->EditTimingVezaNovaya->setEnabled(true);
}

void MainWindow::on_ProvodEdit_userTimeChanged()
{
    ui->EditTimingProvod->setEnabled(true);
}

void MainWindow::on_CancelAll_triggered()
{
    FileCheck *CheckFiles = new FileCheck;

    //Чтение файлов всех аккумуляторов и их знаков. ПОРЯДОК : вначале знак, потом сам аккумулятор!!!
    CheckFiles->ReadOrCreate(FileVezaVulkanPlusMinusCorrection,ui->VezaVulkanPlusMinusCorrection);
    CheckFiles->ReadOrCreate(FileVezaVulkanCorrection, ui->VezaVulkanEditCorrection);

    CheckFiles->ReadOrCreate(FileVezaNovayaPlusMinusCorrection,ui->VezaNovayaPlusMinusCorrection);
    CheckFiles->ReadOrCreate(FileVezaNovayaCorrection, ui->VezaNovayaEditCorrection);

    CheckFiles->ReadOrCreate(FileProvodPlusMinusCorrection,ui->ProvodPlusMinusCorrection);
    CheckFiles->ReadOrCreate(FileProvodCorrection, ui->ProvodEditCorrection);

    //Чтение файла AlertTime (время оповещения о начале респа артефактов)
    CheckFiles->ReadOrCreate(FileAlertTime,ui->AlertTime,true);

    //Проверка содержимого файлов, если файл пуст, то выставление времени компьютера как время рестарта,
    //если нет - чтение файла и присваивания соответствующих значений переменным
    RestartDateTimeAll=CheckFiles->ReadOrCreate(FileAll,RestartDateTimeAll);

    RestartDateTimeRezina=CheckFiles->ReadOrCreate(FileRezina,RestartDateTimeRezina);

    RestartDateTimeVezaVulkan=CheckFiles->ReadOrCreate(FileVezaVulkan,RestartDateTimeVezaVulkan);

    RestartDateTimeVezaNovaya=CheckFiles->ReadOrCreate(FileVezaNovaya,RestartDateTimeVezaNovaya);

    RestartDateTimeProvod=CheckFiles->ReadOrCreate(FileProvod,RestartDateTimeProvod);

    delete CheckFiles;
    qDebug() << "Класс Filecheck очищен после вызова метода ReadOrCreate" << endl;

    // установка времени рестарта для каждого QDateTimeEdit
    ui->AllRestart->setDateTime(RestartDateTimeAll);

    ui->RezinaRestart->setDateTime(RestartDateTimeRezina);

    ui->VezaVulkanRestart->setDateTime(RestartDateTimeVezaVulkan);

    ui->VezaNovayaRestart->setDateTime(RestartDateTimeVezaNovaya);

    ui->ProvodRestart->setDateTime(RestartDateTimeProvod);

    //Отключение всех кнопок корректировки
    ui->EditTimingRezina->setEnabled(false);

    ui->EditTimingVezaVulkan->setEnabled(false);

    ui->EditTimingVezaNovaya->setEnabled(false);

    ui->EditTimingProvod->setEnabled(false);

    //Настройка кнопок слоя "AllRestart"
    ui->AllRestartApplyButton->setVisible(false);
    ui->AllRestartCancelButton->setVisible(false);
    ui->AllRestart->setEnabled(false);
    ui->EditAllRestart->setChecked(false);

    //Настройка оповещения о начале респа (установка по умолчанию - 59 минут)
    QTime DefaultAlertTime(0,59,0);
    ui->AlertTime->setTime(DefaultAlertTime);

    //Вывод сообщения в StatusBar
    ui->statusBar->showMessage("Изменения отменены", 2000);

    //Занулить флаг, отслеживающий, происходили ли какие - то изменения в программе
    IsSaveAfterExit = false;
}

void MainWindow::on_AlertTime_userTimeChanged()
{

    MainWindow::on_RezinaRestart_dateTimeChanged();
    MainWindow::on_VezaVulkanRestart_dateTimeChanged();
    MainWindow::on_VezaNovayaRestart_dateTimeChanged();
    MainWindow::on_ProvodRestart_dateTimeChanged();

    //Включить флаг, отслеживающий, происходили ли какие - то изменения в программе
    IsSaveAfterExit = true;

}

void MainWindow::on_EditAllRestart_stateChanged()
{
    if(ui->EditAllRestart->isChecked()){

        //Настройка кнопок слоя "AllRestart"
        ui->AllRestart->setEnabled(true);

    }
    else {

        //Настройка кнопок слоя "AllRestart"
        ui->AllRestartApplyButton->setEnabled(false);
        ui->AllRestartCancelButton->setEnabled(false);
        ui->AllRestart->setEnabled(false);
        ui->EditAllRestart->setChecked(false);

    }
}

void MainWindow::on_AllRestart_dateTimeChanged()
{

    ui->AllRestart->setMaximumDateTime(QDateTime::currentDateTime());
    ui->AllRestartApplyButton->setVisible(true);
    ui->AllRestartCancelButton->setVisible(true);
    ui->AllRestartApplyButton->setEnabled(true);
    ui->AllRestartCancelButton->setEnabled(true);

    //Читаем из строки даты / времени данные
    RestartDateTimeAll = ui->AllRestart->dateTime();

    //Включить флаг, отслеживающий, происходили ли какие - то изменения в программе
    IsSaveAfterExit = true;
}

void MainWindow::on_AllRestartCancelButton_clicked()
{
    FileCheck *CheckFiles = new FileCheck;

    //Проверка содержимого файлов, если файл пуст, то выставление времени компьютера как время рестарта,
    //если нет - чтение файла и присваивания соответствующих значений переменным
    RestartDateTimeAll=CheckFiles->ReadOrCreate(FileAll,RestartDateTimeAll);

    delete CheckFiles;
    qDebug() << "Класс Filecheck очищен после вызова метода ReadOrCreate" << endl;

    // установка времени рестарта для каждого QDateTimeEdit
    ui->AllRestart->setDateTime(RestartDateTimeAll);

    //Настройка кнопок слоя "AllRestart"
    ui->AllRestartApplyButton->setVisible(false);
    ui->AllRestartCancelButton->setVisible(false);
    ui->AllRestart->setEnabled(false);
    ui->EditAllRestart->setChecked(false);

}

void MainWindow::on_AllRestartApplyButton_clicked()
{
    // установка времени рестарта для каждого QDateTimeEdit
    ui->RezinaRestart->setDateTime(ui->AllRestart->dateTime());

    ui->VezaVulkanRestart->setDateTime(ui->AllRestart->dateTime());

    ui->VezaNovayaRestart->setDateTime(ui->AllRestart->dateTime());

    ui->ProvodRestart->setDateTime(ui->AllRestart->dateTime());

    //Настройка кнопок слоя "AllRestart"
    ui->AllRestartApplyButton->setVisible(false);
    ui->AllRestartCancelButton->setVisible(false);
    ui->AllRestart->setEnabled(false);
    ui->EditAllRestart->setChecked(false);
}

void MainWindow::UpdateButtonTrigger(){

    //Части методов по каждому артефакту скопированы сюда отдельно.
    //Такой подход нужен для того, чтобы правильно работал флаг, отслеживающий, происходили ли какие - то изменения в программе

    //Триггер для резины

    ui->RezinaRestart->setMaximumDateTime(QDateTime::currentDateTime());
    //Читаем из строки даты / времени данные
    RestartDateTimeRezina = ui->RezinaRestart->dateTime();

    //Считаем тайминги по считанной строки даты / времени
    Rezina *RezinaAll = new Rezina();

    RezinaAll->organization(RestartDateTimeRezina,ui->RezinaTable, ui->AlertTime->time());

    delete RezinaAll;
    qDebug() << "Класс Rezina очищен после вызова метода organization" << endl;


    //Триггер для Везы Вулкан

    ui->VezaVulkanRestart->setMaximumDateTime(QDateTime::currentDateTime());
    //Читаем из строки даты / времени данные
    RestartDateTimeVezaVulkan = ui->VezaVulkanRestart->dateTime();

    //Считаем тайминги по считанной строки даты / времени
    VezaVulkan *VezaVulkanAll = new VezaVulkan();

    VezaVulkanAll->organization(RestartDateTimeVezaVulkan,ui->VezaVulkanTable, ui->VezaVulkanEditCorrection, ui->VezaVulkanPlusMinusCorrection, ui->AlertTime->time(), ui->UTSTime, ui->UTSPlusMInus);

    delete VezaVulkanAll;
    qDebug() << "Класс VezaVulkan очищен после вызова метода organization" << endl;


    //Триггер для Везы Новая

    ui->VezaNovayaRestart->setMaximumDateTime(QDateTime::currentDateTime());
    //Читаем из строки даты / времени данные
    RestartDateTimeVezaNovaya = ui->VezaNovayaRestart->dateTime();

    //Считаем тайминги по считанной строки даты / времени
    VezaNovaya *VezaNovayaAll = new VezaNovaya();

    VezaNovayaAll->organization(RestartDateTimeVezaNovaya,ui->VezaNovayaTable, ui->VezaNovayaEditCorrection, ui->VezaNovayaPlusMinusCorrection, ui->AlertTime->time(), ui->UTSTime, ui->UTSPlusMInus);

    delete VezaNovayaAll;
    qDebug() << "Класс VezaNovaya очищен после вызова метода organization" << endl;


    //Триггер для Провода

    ui->ProvodRestart->setMaximumDateTime(QDateTime::currentDateTime());
    //Читаем из строки даты / времени данные
    RestartDateTimeProvod = ui->ProvodRestart->dateTime();

    //Считаем тайминги по считанной строки даты / времени
    Provod *ProvodAll = new Provod();

    ProvodAll->organization(RestartDateTimeProvod,ui->ProvodTable, ui->ProvodEditCorrection, ui->ProvodPlusMinusCorrection, ui->AlertTime->time(), ui->UTSTime, ui->UTSPlusMInus);

    delete ProvodAll;
    qDebug() << "Класс Provod очищен после вызова метода organization" << endl;

}

void MainWindow::on_UpdateButton_clicked()
{
    if( ui->UpdateButton->isChecked() ){
        timer->start(1000/* 1 секунда */);
        //Вывод сообщения в StatusBar
        ui->statusBar->showMessage("Работа в реальном времени включена", 2000);
    }
    else {
        if (timer->isActive()){
            timer->stop();
            //Вывод сообщения в StatusBar
            ui->statusBar->showMessage("Работа в реальном времени выключена", 2000);
        }
    }
}

void MainWindow::closeEvent(QCloseEvent *event)
{

    //Если производились какие-либо изменения в программе, создается MessageBox, который спрашивает сохранить ли все изменения?
    if( IsSaveAfterExit ){

        QMessageBox CloseWindow;

        CloseWindow.setText("        Сохранить все изменения?                  ");
        CloseWindow.setWindowTitle("Счетчик таймингов от ДеД_сБердянкоЙ");
        CloseWindow.setIcon(QMessageBox::Information);

        QPushButton *SaveButton = CloseWindow.addButton("&Сохранить", QMessageBox::ActionRole);
        QPushButton *NoSaveButton = CloseWindow.addButton("&Не сохранять", QMessageBox::ActionRole);
        QPushButton *CancelButton = CloseWindow.addButton("&Отмена", QMessageBox::ActionRole);
        CloseWindow.setDefaultButton(SaveButton);
        CloseWindow.exec();

        if(CloseWindow.clickedButton() == SaveButton){
            MainWindow::on_SaveAll_triggered();
            event->accept();
        }
        else if (CloseWindow.clickedButton() == NoSaveButton){
            event->accept();
        }
        else if (CloseWindow.clickedButton() == CancelButton){
            event->ignore();
            CloseWindow.close();
        }
    }

}

void MainWindow::on_About_triggered()
{
    About AboutMe;
    AboutMe.setWindowFlags(AboutMe.windowFlags() & Qt::Widget & ~Qt::WindowContextHelpButtonHint);


    AboutMe.exec();
}

void MainWindow::on_general_information_triggered()
{
    GeneralInformation GenInfo;
    GenInfo.setWindowFlags(GenInfo.windowFlags() & Qt::Widget & ~Qt::WindowContextHelpButtonHint);


    GenInfo.exec();
}

void MainWindow::on_WriteMe_triggered()
{
    WriteMe Write;
    Write.setWindowFlags(Write.windowFlags() & Qt::Widget & ~Qt::WindowContextHelpButtonHint);


    Write.exec();
}
