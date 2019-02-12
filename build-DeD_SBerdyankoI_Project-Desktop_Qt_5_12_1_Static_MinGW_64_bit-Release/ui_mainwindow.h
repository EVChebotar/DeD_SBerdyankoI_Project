/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *SaveAll;
    QAction *Exit;
    QAction *WriteMe;
    QAction *About;
    QAction *CancelAll;
    QAction *general_information;
    QWidget *centralWidget;
    QCheckBox *EditAllRestart;
    QDateTimeEdit *AllRestart;
    QPushButton *AllRestartApplyButton;
    QPushButton *AllRestartCancelButton;
    QWidget *layoutWidget;
    QVBoxLayout *RespIsAndSelectTimingLayout;
    QTabWidget *SelectTiming;
    QWidget *RezinaTab;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_17;
    QVBoxLayout *RezinaLayout;
    QHBoxLayout *RezinaCorrectionLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelRezinaDateTimeRestart;
    QDateTimeEdit *RezinaRestart;
    QPushButton *EditTimingRezina;
    QLineEdit *RezinaPlusMinus;
    QTimeEdit *RezinaEdit;
    QTableWidget *RezinaTable;
    QSpacerItem *verticalSpacer_4;
    QWidget *VezaVulkanTab;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *VezaVulkanLayout;
    QHBoxLayout *VezaVulkanAccumLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelVezaVulkanCorrection;
    QLineEdit *VezaVulkanPlusMinusCorrection;
    QTimeEdit *VezaVulkanEditCorrection;
    QHBoxLayout *VezaVulkanEditTimingLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelVezaVulkanRestart;
    QDateTimeEdit *VezaVulkanRestart;
    QPushButton *EditTimingVezaVulkan;
    QLineEdit *VezaVulkanPlusMinus;
    QTimeEdit *VezaVulkanEdit;
    QHBoxLayout *VezaVulkanTableLayout;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *VezaVulkanTable;
    QSpacerItem *verticalSpacer;
    QWidget *ProvodTab;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_18;
    QVBoxLayout *ProvodLayout;
    QHBoxLayout *ProvodAccumLayout;
    QSpacerItem *horizontalSpacer_9;
    QLabel *labelProvodCorrection;
    QLineEdit *ProvodPlusMinusCorrection;
    QTimeEdit *ProvodEditCorrection;
    QHBoxLayout *ProvodEditTimingLayout;
    QSpacerItem *horizontalSpacer_10;
    QLabel *labelProvodRestart;
    QDateTimeEdit *ProvodRestart;
    QPushButton *EditTimingProvod;
    QLineEdit *ProvodPlusMinus;
    QTimeEdit *ProvodEdit;
    QHBoxLayout *ProvodTableLayout;
    QSpacerItem *horizontalSpacer_11;
    QTableWidget *ProvodTable;
    QSpacerItem *verticalSpacer_5;
    QWidget *VezaNovayaTab;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *VezaNovayaLayout;
    QHBoxLayout *VezaNovayaAccumLayout;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labelVezaNovayaCorrection;
    QLineEdit *VezaNovayaPlusMinusCorrection;
    QTimeEdit *VezaNovayaEditCorrection;
    QHBoxLayout *VezaNovayaEditTimingLayout;
    QSpacerItem *horizontalSpacer_7;
    QLabel *labelVezaNovayaRestart;
    QDateTimeEdit *VezaNovayaRestart;
    QPushButton *EditTimingVezaNovaya;
    QLineEdit *VezaNovayaPlusMinus;
    QTimeEdit *VezaNovayaEdit;
    QHBoxLayout *VezaNovayaTableLayout;
    QSpacerItem *horizontalSpacer_8;
    QTableWidget *VezaNovayaTable;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *RespIsNearLayout;
    QLabel *RespIsNearlabel;
    QLabel *RespIsNearlabel_2;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *RespIsNowLayout;
    QLabel *RespIsNowlabel;
    QLabel *RespIsNowlabel_2;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_3;
    QWidget *layoutWidget1;
    QVBoxLayout *CurrentTime_UpdateAndAlert_UpdateButtonLayout;
    QRadioButton *UpdateButton;
    QHBoxLayout *AlertTimehorizontalLayout;
    QLabel *AlertTimelabel;
    QTimeEdit *AlertTime;
    QLabel *AlertTimelabel_2;
    QHBoxLayout *CurrentTimeLayout;
    QLabel *CurrentTimelabel;
    QTimeEdit *CurrentTime;
    QSpacerItem *horizontalSpacer_15;
    QWidget *layoutWidget2;
    QHBoxLayout *UTCLayout;
    QLabel *UTClabel;
    QLineEdit *UTSPlusMInus;
    QTimeEdit *UTSTime;
    QTextBrowser *MainText;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(777, 622);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(777, 622));
        MainWindow->setMaximumSize(QSize(777, 622));
        QFont font;
        font.setFamily(QString::fromUtf8("Tahoma"));
        MainWindow->setFont(font);
        MainWindow->setTabletTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8("MainIcon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        SaveAll = new QAction(MainWindow);
        SaveAll->setObjectName(QString::fromUtf8("SaveAll"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Filling/Mainwindow/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        SaveAll->setIcon(icon1);
        SaveAll->setShortcutVisibleInContextMenu(false);
        Exit = new QAction(MainWindow);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Filling/Mainwindow/Exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        Exit->setIcon(icon2);
        WriteMe = new QAction(MainWindow);
        WriteMe->setObjectName(QString::fromUtf8("WriteMe"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Filling/Mainwindow/WriteMeIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        WriteMe->setIcon(icon3);
        About = new QAction(MainWindow);
        About->setObjectName(QString::fromUtf8("About"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Filling/Mainwindow/AboutIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        About->setIcon(icon4);
        CancelAll = new QAction(MainWindow);
        CancelAll->setObjectName(QString::fromUtf8("CancelAll"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Filling/Mainwindow/CancelAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        CancelAll->setIcon(icon5);
        general_information = new QAction(MainWindow);
        general_information->setObjectName(QString::fromUtf8("general_information"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Filling/artifacts/GeneralInformationIcon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        general_information->setIcon(icon6);
        general_information->setShortcutContext(Qt::WindowShortcut);
        general_information->setVisible(true);
        general_information->setShortcutVisibleInContextMenu(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        EditAllRestart = new QCheckBox(centralWidget);
        EditAllRestart->setObjectName(QString::fromUtf8("EditAllRestart"));
        EditAllRestart->setGeometry(QRect(393, 111, 365, 27));
        sizePolicy.setHeightForWidth(EditAllRestart->sizePolicy().hasHeightForWidth());
        EditAllRestart->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        EditAllRestart->setFont(font1);
        AllRestart = new QDateTimeEdit(centralWidget);
        AllRestart->setObjectName(QString::fromUtf8("AllRestart"));
        AllRestart->setGeometry(QRect(393, 140, 368, 29));
        sizePolicy.setHeightForWidth(AllRestart->sizePolicy().hasHeightForWidth());
        AllRestart->setSizePolicy(sizePolicy);
        AllRestart->setMinimumSize(QSize(220, 23));
        AllRestart->setFont(font1);
        AllRestart->setMinimumDateTime(QDateTime(QDate(2018, 1, 1), QTime(0, 0, 0)));
        AllRestart->setMinimumDate(QDate(2018, 1, 1));
        AllRestart->setCalendarPopup(true);
        AllRestartApplyButton = new QPushButton(centralWidget);
        AllRestartApplyButton->setObjectName(QString::fromUtf8("AllRestartApplyButton"));
        AllRestartApplyButton->setGeometry(QRect(393, 170, 75, 23));
        AllRestartCancelButton = new QPushButton(centralWidget);
        AllRestartCancelButton->setObjectName(QString::fromUtf8("AllRestartCancelButton"));
        AllRestartCancelButton->setGeometry(QRect(470, 170, 75, 23));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 202, 757, 374));
        RespIsAndSelectTimingLayout = new QVBoxLayout(layoutWidget);
        RespIsAndSelectTimingLayout->setSpacing(6);
        RespIsAndSelectTimingLayout->setContentsMargins(11, 11, 11, 11);
        RespIsAndSelectTimingLayout->setObjectName(QString::fromUtf8("RespIsAndSelectTimingLayout"));
        RespIsAndSelectTimingLayout->setContentsMargins(0, 0, 0, 0);
        SelectTiming = new QTabWidget(layoutWidget);
        SelectTiming->setObjectName(QString::fromUtf8("SelectTiming"));
        SelectTiming->setEnabled(true);
        SelectTiming->setMinimumSize(QSize(755, 290));
        SelectTiming->setMaximumSize(QSize(755, 290));
        SelectTiming->setMouseTracking(false);
        SelectTiming->setTabletTracking(false);
        SelectTiming->setAutoFillBackground(true);
        SelectTiming->setIconSize(QSize(24, 24));
        SelectTiming->setUsesScrollButtons(false);
        SelectTiming->setDocumentMode(false);
        SelectTiming->setTabsClosable(false);
        SelectTiming->setMovable(true);
        SelectTiming->setTabBarAutoHide(false);
        RezinaTab = new QWidget();
        RezinaTab->setObjectName(QString::fromUtf8("RezinaTab"));
        verticalLayout_3 = new QVBoxLayout(RezinaTab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_17 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_17);

        RezinaLayout = new QVBoxLayout();
        RezinaLayout->setSpacing(6);
        RezinaLayout->setObjectName(QString::fromUtf8("RezinaLayout"));
        RezinaCorrectionLayout = new QHBoxLayout();
        RezinaCorrectionLayout->setSpacing(6);
        RezinaCorrectionLayout->setObjectName(QString::fromUtf8("RezinaCorrectionLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        RezinaCorrectionLayout->addItem(horizontalSpacer);

        labelRezinaDateTimeRestart = new QLabel(RezinaTab);
        labelRezinaDateTimeRestart->setObjectName(QString::fromUtf8("labelRezinaDateTimeRestart"));

        RezinaCorrectionLayout->addWidget(labelRezinaDateTimeRestart);

        RezinaRestart = new QDateTimeEdit(RezinaTab);
        RezinaRestart->setObjectName(QString::fromUtf8("RezinaRestart"));
        sizePolicy.setHeightForWidth(RezinaRestart->sizePolicy().hasHeightForWidth());
        RezinaRestart->setSizePolicy(sizePolicy);
        RezinaRestart->setMinimumSize(QSize(220, 23));
        RezinaRestart->setMinimumDateTime(QDateTime(QDate(2018, 1, 1), QTime(0, 0, 0)));
        RezinaRestart->setMinimumDate(QDate(2018, 1, 1));
        RezinaRestart->setCalendarPopup(true);

        RezinaCorrectionLayout->addWidget(RezinaRestart);

        EditTimingRezina = new QPushButton(RezinaTab);
        EditTimingRezina->setObjectName(QString::fromUtf8("EditTimingRezina"));
        EditTimingRezina->setAutoDefault(false);

        RezinaCorrectionLayout->addWidget(EditTimingRezina);

        RezinaPlusMinus = new QLineEdit(RezinaTab);
        RezinaPlusMinus->setObjectName(QString::fromUtf8("RezinaPlusMinus"));
        RezinaPlusMinus->setMaximumSize(QSize(23, 25));

        RezinaCorrectionLayout->addWidget(RezinaPlusMinus);

        RezinaEdit = new QTimeEdit(RezinaTab);
        RezinaEdit->setObjectName(QString::fromUtf8("RezinaEdit"));
        RezinaEdit->setMaximumSize(QSize(16777215, 25));
        RezinaEdit->setToolTipDuration(-1);
        RezinaEdit->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        RezinaEdit->setMaximumTime(QTime(0, 59, 59));
        RezinaEdit->setCalendarPopup(false);
        RezinaEdit->setTime(QTime(0, 0, 0));

        RezinaCorrectionLayout->addWidget(RezinaEdit);


        RezinaLayout->addLayout(RezinaCorrectionLayout);

        RezinaTable = new QTableWidget(RezinaTab);
        RezinaTable->setObjectName(QString::fromUtf8("RezinaTable"));
        RezinaTable->setEnabled(true);
        sizePolicy.setHeightForWidth(RezinaTable->sizePolicy().hasHeightForWidth());
        RezinaTable->setSizePolicy(sizePolicy);
        RezinaTable->setMinimumSize(QSize(702, 152));
        RezinaTable->setMaximumSize(QSize(702, 152));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(14);
        RezinaTable->setFont(font2);
        RezinaTable->setFrameShape(QFrame::Box);
        RezinaTable->setFrameShadow(QFrame::Raised);
        RezinaTable->setLineWidth(0);
        RezinaTable->setMidLineWidth(1);
        RezinaTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        RezinaTable->setDragEnabled(false);
        RezinaTable->setAlternatingRowColors(false);
        RezinaTable->setSelectionMode(QAbstractItemView::SingleSelection);
        RezinaTable->setSelectionBehavior(QAbstractItemView::SelectItems);
        RezinaTable->setShowGrid(true);
        RezinaTable->setGridStyle(Qt::SolidLine);
        RezinaTable->setSortingEnabled(false);
        RezinaTable->horizontalHeader()->setVisible(true);
        RezinaTable->horizontalHeader()->setCascadingSectionResizes(false);
        RezinaTable->horizontalHeader()->setHighlightSections(true);
        RezinaTable->verticalHeader()->setVisible(false);

        RezinaLayout->addWidget(RezinaTable);


        horizontalLayout_4->addLayout(RezinaLayout);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);


        verticalLayout_3->addLayout(verticalLayout_4);

        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Filling/artifacts/RezinaIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        SelectTiming->addTab(RezinaTab, icon7, QString());
        VezaVulkanTab = new QWidget();
        VezaVulkanTab->setObjectName(QString::fromUtf8("VezaVulkanTab"));
        verticalLayout_6 = new QVBoxLayout(VezaVulkanTab);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        VezaVulkanLayout = new QVBoxLayout();
        VezaVulkanLayout->setSpacing(6);
        VezaVulkanLayout->setObjectName(QString::fromUtf8("VezaVulkanLayout"));
        VezaVulkanAccumLayout = new QHBoxLayout();
        VezaVulkanAccumLayout->setSpacing(6);
        VezaVulkanAccumLayout->setObjectName(QString::fromUtf8("VezaVulkanAccumLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        VezaVulkanAccumLayout->addItem(horizontalSpacer_3);

        labelVezaVulkanCorrection = new QLabel(VezaVulkanTab);
        labelVezaVulkanCorrection->setObjectName(QString::fromUtf8("labelVezaVulkanCorrection"));

        VezaVulkanAccumLayout->addWidget(labelVezaVulkanCorrection);

        VezaVulkanPlusMinusCorrection = new QLineEdit(VezaVulkanTab);
        VezaVulkanPlusMinusCorrection->setObjectName(QString::fromUtf8("VezaVulkanPlusMinusCorrection"));
        VezaVulkanPlusMinusCorrection->setMaximumSize(QSize(23, 25));
        VezaVulkanPlusMinusCorrection->setReadOnly(true);

        VezaVulkanAccumLayout->addWidget(VezaVulkanPlusMinusCorrection);

        VezaVulkanEditCorrection = new QTimeEdit(VezaVulkanTab);
        VezaVulkanEditCorrection->setObjectName(QString::fromUtf8("VezaVulkanEditCorrection"));
        VezaVulkanEditCorrection->setMinimumSize(QSize(60, 23));
        VezaVulkanEditCorrection->setMaximumSize(QSize(60, 23));
        VezaVulkanEditCorrection->setToolTipDuration(-1);
        VezaVulkanEditCorrection->setAutoFillBackground(false);
        VezaVulkanEditCorrection->setWrapping(false);
        VezaVulkanEditCorrection->setFrame(true);
        VezaVulkanEditCorrection->setReadOnly(true);
        VezaVulkanEditCorrection->setButtonSymbols(QAbstractSpinBox::NoButtons);
        VezaVulkanEditCorrection->setMaximumTime(QTime(0, 59, 59));
        VezaVulkanEditCorrection->setCalendarPopup(false);
        VezaVulkanEditCorrection->setTime(QTime(0, 0, 0));

        VezaVulkanAccumLayout->addWidget(VezaVulkanEditCorrection);


        VezaVulkanLayout->addLayout(VezaVulkanAccumLayout);

        VezaVulkanEditTimingLayout = new QHBoxLayout();
        VezaVulkanEditTimingLayout->setSpacing(6);
        VezaVulkanEditTimingLayout->setObjectName(QString::fromUtf8("VezaVulkanEditTimingLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        VezaVulkanEditTimingLayout->addItem(horizontalSpacer_4);

        labelVezaVulkanRestart = new QLabel(VezaVulkanTab);
        labelVezaVulkanRestart->setObjectName(QString::fromUtf8("labelVezaVulkanRestart"));

        VezaVulkanEditTimingLayout->addWidget(labelVezaVulkanRestart);

        VezaVulkanRestart = new QDateTimeEdit(VezaVulkanTab);
        VezaVulkanRestart->setObjectName(QString::fromUtf8("VezaVulkanRestart"));
        sizePolicy.setHeightForWidth(VezaVulkanRestart->sizePolicy().hasHeightForWidth());
        VezaVulkanRestart->setSizePolicy(sizePolicy);
        VezaVulkanRestart->setMinimumSize(QSize(220, 23));
        VezaVulkanRestart->setMinimumDateTime(QDateTime(QDate(2018, 1, 1), QTime(0, 0, 0)));
        VezaVulkanRestart->setMinimumDate(QDate(2018, 1, 1));
        VezaVulkanRestart->setCalendarPopup(true);

        VezaVulkanEditTimingLayout->addWidget(VezaVulkanRestart);

        EditTimingVezaVulkan = new QPushButton(VezaVulkanTab);
        EditTimingVezaVulkan->setObjectName(QString::fromUtf8("EditTimingVezaVulkan"));
        EditTimingVezaVulkan->setAutoDefault(false);

        VezaVulkanEditTimingLayout->addWidget(EditTimingVezaVulkan);

        VezaVulkanPlusMinus = new QLineEdit(VezaVulkanTab);
        VezaVulkanPlusMinus->setObjectName(QString::fromUtf8("VezaVulkanPlusMinus"));
        VezaVulkanPlusMinus->setMaximumSize(QSize(23, 25));

        VezaVulkanEditTimingLayout->addWidget(VezaVulkanPlusMinus);

        VezaVulkanEdit = new QTimeEdit(VezaVulkanTab);
        VezaVulkanEdit->setObjectName(QString::fromUtf8("VezaVulkanEdit"));
        VezaVulkanEdit->setMinimumSize(QSize(60, 23));
        VezaVulkanEdit->setMaximumSize(QSize(60, 23));
        VezaVulkanEdit->setToolTipDuration(-1);
        VezaVulkanEdit->setMaximumTime(QTime(0, 59, 59));
        VezaVulkanEdit->setCalendarPopup(false);
        VezaVulkanEdit->setTime(QTime(0, 0, 0));

        VezaVulkanEditTimingLayout->addWidget(VezaVulkanEdit);


        VezaVulkanLayout->addLayout(VezaVulkanEditTimingLayout);

        VezaVulkanTableLayout = new QHBoxLayout();
        VezaVulkanTableLayout->setSpacing(6);
        VezaVulkanTableLayout->setObjectName(QString::fromUtf8("VezaVulkanTableLayout"));
        horizontalSpacer_2 = new QSpacerItem(13, 149, QSizePolicy::Expanding, QSizePolicy::Minimum);

        VezaVulkanTableLayout->addItem(horizontalSpacer_2);

        VezaVulkanTable = new QTableWidget(VezaVulkanTab);
        VezaVulkanTable->setObjectName(QString::fromUtf8("VezaVulkanTable"));
        VezaVulkanTable->setEnabled(true);
        sizePolicy.setHeightForWidth(VezaVulkanTable->sizePolicy().hasHeightForWidth());
        VezaVulkanTable->setSizePolicy(sizePolicy);
        VezaVulkanTable->setMinimumSize(QSize(702, 182));
        VezaVulkanTable->setMaximumSize(QSize(702, 182));
        VezaVulkanTable->setFont(font2);
        VezaVulkanTable->setFrameShape(QFrame::Box);
        VezaVulkanTable->setFrameShadow(QFrame::Raised);
        VezaVulkanTable->setLineWidth(0);
        VezaVulkanTable->setMidLineWidth(1);
        VezaVulkanTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        VezaVulkanTable->setDragEnabled(false);
        VezaVulkanTable->setAlternatingRowColors(false);
        VezaVulkanTable->setSelectionMode(QAbstractItemView::SingleSelection);
        VezaVulkanTable->setSelectionBehavior(QAbstractItemView::SelectItems);
        VezaVulkanTable->setShowGrid(true);
        VezaVulkanTable->setGridStyle(Qt::SolidLine);
        VezaVulkanTable->setSortingEnabled(false);
        VezaVulkanTable->horizontalHeader()->setCascadingSectionResizes(false);
        VezaVulkanTable->horizontalHeader()->setHighlightSections(true);
        VezaVulkanTable->verticalHeader()->setVisible(false);

        VezaVulkanTableLayout->addWidget(VezaVulkanTable);


        VezaVulkanLayout->addLayout(VezaVulkanTableLayout);


        horizontalLayout->addLayout(VezaVulkanLayout);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(0, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_6->addLayout(verticalLayout);

        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Filling/artifacts/VezaVulkanIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        SelectTiming->addTab(VezaVulkanTab, icon8, QString());
        ProvodTab = new QWidget();
        ProvodTab->setObjectName(QString::fromUtf8("ProvodTab"));
        verticalLayout_8 = new QVBoxLayout(ProvodTab);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_18 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_18);

        ProvodLayout = new QVBoxLayout();
        ProvodLayout->setSpacing(6);
        ProvodLayout->setObjectName(QString::fromUtf8("ProvodLayout"));
        ProvodAccumLayout = new QHBoxLayout();
        ProvodAccumLayout->setSpacing(6);
        ProvodAccumLayout->setObjectName(QString::fromUtf8("ProvodAccumLayout"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ProvodAccumLayout->addItem(horizontalSpacer_9);

        labelProvodCorrection = new QLabel(ProvodTab);
        labelProvodCorrection->setObjectName(QString::fromUtf8("labelProvodCorrection"));

        ProvodAccumLayout->addWidget(labelProvodCorrection);

        ProvodPlusMinusCorrection = new QLineEdit(ProvodTab);
        ProvodPlusMinusCorrection->setObjectName(QString::fromUtf8("ProvodPlusMinusCorrection"));
        ProvodPlusMinusCorrection->setMaximumSize(QSize(23, 25));
        ProvodPlusMinusCorrection->setReadOnly(true);

        ProvodAccumLayout->addWidget(ProvodPlusMinusCorrection);

        ProvodEditCorrection = new QTimeEdit(ProvodTab);
        ProvodEditCorrection->setObjectName(QString::fromUtf8("ProvodEditCorrection"));
        ProvodEditCorrection->setMinimumSize(QSize(60, 23));
        ProvodEditCorrection->setMaximumSize(QSize(60, 23));
        ProvodEditCorrection->setToolTipDuration(-1);
        ProvodEditCorrection->setAutoFillBackground(false);
        ProvodEditCorrection->setWrapping(false);
        ProvodEditCorrection->setFrame(true);
        ProvodEditCorrection->setReadOnly(true);
        ProvodEditCorrection->setButtonSymbols(QAbstractSpinBox::NoButtons);
        ProvodEditCorrection->setMaximumTime(QTime(0, 59, 59));
        ProvodEditCorrection->setCalendarPopup(false);
        ProvodEditCorrection->setTime(QTime(0, 0, 0));

        ProvodAccumLayout->addWidget(ProvodEditCorrection);


        ProvodLayout->addLayout(ProvodAccumLayout);

        ProvodEditTimingLayout = new QHBoxLayout();
        ProvodEditTimingLayout->setSpacing(6);
        ProvodEditTimingLayout->setObjectName(QString::fromUtf8("ProvodEditTimingLayout"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ProvodEditTimingLayout->addItem(horizontalSpacer_10);

        labelProvodRestart = new QLabel(ProvodTab);
        labelProvodRestart->setObjectName(QString::fromUtf8("labelProvodRestart"));

        ProvodEditTimingLayout->addWidget(labelProvodRestart);

        ProvodRestart = new QDateTimeEdit(ProvodTab);
        ProvodRestart->setObjectName(QString::fromUtf8("ProvodRestart"));
        sizePolicy.setHeightForWidth(ProvodRestart->sizePolicy().hasHeightForWidth());
        ProvodRestart->setSizePolicy(sizePolicy);
        ProvodRestart->setMinimumSize(QSize(220, 23));
        ProvodRestart->setMinimumDateTime(QDateTime(QDate(2018, 1, 1), QTime(0, 0, 0)));
        ProvodRestart->setMinimumDate(QDate(2018, 1, 1));
        ProvodRestart->setCalendarPopup(true);

        ProvodEditTimingLayout->addWidget(ProvodRestart);

        EditTimingProvod = new QPushButton(ProvodTab);
        EditTimingProvod->setObjectName(QString::fromUtf8("EditTimingProvod"));
        EditTimingProvod->setAutoDefault(false);

        ProvodEditTimingLayout->addWidget(EditTimingProvod);

        ProvodPlusMinus = new QLineEdit(ProvodTab);
        ProvodPlusMinus->setObjectName(QString::fromUtf8("ProvodPlusMinus"));
        ProvodPlusMinus->setMaximumSize(QSize(23, 25));

        ProvodEditTimingLayout->addWidget(ProvodPlusMinus);

        ProvodEdit = new QTimeEdit(ProvodTab);
        ProvodEdit->setObjectName(QString::fromUtf8("ProvodEdit"));
        ProvodEdit->setMinimumSize(QSize(60, 23));
        ProvodEdit->setMaximumSize(QSize(60, 23));
        ProvodEdit->setToolTipDuration(-1);
        ProvodEdit->setMaximumTime(QTime(0, 59, 59));
        ProvodEdit->setCalendarPopup(false);
        ProvodEdit->setTime(QTime(0, 0, 0));

        ProvodEditTimingLayout->addWidget(ProvodEdit);


        ProvodLayout->addLayout(ProvodEditTimingLayout);

        ProvodTableLayout = new QHBoxLayout();
        ProvodTableLayout->setSpacing(6);
        ProvodTableLayout->setObjectName(QString::fromUtf8("ProvodTableLayout"));
        horizontalSpacer_11 = new QSpacerItem(13, 149, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ProvodTableLayout->addItem(horizontalSpacer_11);

        ProvodTable = new QTableWidget(ProvodTab);
        ProvodTable->setObjectName(QString::fromUtf8("ProvodTable"));
        ProvodTable->setEnabled(true);
        sizePolicy.setHeightForWidth(ProvodTable->sizePolicy().hasHeightForWidth());
        ProvodTable->setSizePolicy(sizePolicy);
        ProvodTable->setMinimumSize(QSize(702, 152));
        ProvodTable->setMaximumSize(QSize(702, 152));
        ProvodTable->setFont(font2);
        ProvodTable->setFrameShape(QFrame::Box);
        ProvodTable->setFrameShadow(QFrame::Raised);
        ProvodTable->setLineWidth(0);
        ProvodTable->setMidLineWidth(1);
        ProvodTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ProvodTable->setDragEnabled(false);
        ProvodTable->setAlternatingRowColors(false);
        ProvodTable->setSelectionMode(QAbstractItemView::SingleSelection);
        ProvodTable->setSelectionBehavior(QAbstractItemView::SelectItems);
        ProvodTable->setShowGrid(true);
        ProvodTable->setGridStyle(Qt::SolidLine);
        ProvodTable->setSortingEnabled(false);
        ProvodTable->horizontalHeader()->setCascadingSectionResizes(false);
        ProvodTable->horizontalHeader()->setHighlightSections(true);
        ProvodTable->verticalHeader()->setVisible(false);

        ProvodTableLayout->addWidget(ProvodTable);


        ProvodLayout->addLayout(ProvodTableLayout);


        horizontalLayout_5->addLayout(ProvodLayout);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);


        verticalLayout_8->addLayout(verticalLayout_5);

        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Filling/artifacts/ProvodIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        SelectTiming->addTab(ProvodTab, icon9, QString());
        VezaNovayaTab = new QWidget();
        VezaNovayaTab->setObjectName(QString::fromUtf8("VezaNovayaTab"));
        verticalLayout_7 = new QVBoxLayout(VezaNovayaTab);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_12 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);

        VezaNovayaLayout = new QVBoxLayout();
        VezaNovayaLayout->setSpacing(6);
        VezaNovayaLayout->setObjectName(QString::fromUtf8("VezaNovayaLayout"));
        VezaNovayaAccumLayout = new QHBoxLayout();
        VezaNovayaAccumLayout->setSpacing(6);
        VezaNovayaAccumLayout->setObjectName(QString::fromUtf8("VezaNovayaAccumLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        VezaNovayaAccumLayout->addItem(horizontalSpacer_6);

        labelVezaNovayaCorrection = new QLabel(VezaNovayaTab);
        labelVezaNovayaCorrection->setObjectName(QString::fromUtf8("labelVezaNovayaCorrection"));

        VezaNovayaAccumLayout->addWidget(labelVezaNovayaCorrection);

        VezaNovayaPlusMinusCorrection = new QLineEdit(VezaNovayaTab);
        VezaNovayaPlusMinusCorrection->setObjectName(QString::fromUtf8("VezaNovayaPlusMinusCorrection"));
        VezaNovayaPlusMinusCorrection->setMaximumSize(QSize(23, 25));
        VezaNovayaPlusMinusCorrection->setReadOnly(true);

        VezaNovayaAccumLayout->addWidget(VezaNovayaPlusMinusCorrection);

        VezaNovayaEditCorrection = new QTimeEdit(VezaNovayaTab);
        VezaNovayaEditCorrection->setObjectName(QString::fromUtf8("VezaNovayaEditCorrection"));
        VezaNovayaEditCorrection->setMinimumSize(QSize(60, 23));
        VezaNovayaEditCorrection->setMaximumSize(QSize(60, 23));
        VezaNovayaEditCorrection->setToolTipDuration(-1);
        VezaNovayaEditCorrection->setAutoFillBackground(false);
        VezaNovayaEditCorrection->setWrapping(false);
        VezaNovayaEditCorrection->setFrame(true);
        VezaNovayaEditCorrection->setReadOnly(true);
        VezaNovayaEditCorrection->setButtonSymbols(QAbstractSpinBox::NoButtons);
        VezaNovayaEditCorrection->setMaximumTime(QTime(0, 59, 59));
        VezaNovayaEditCorrection->setCalendarPopup(false);
        VezaNovayaEditCorrection->setTime(QTime(0, 0, 0));

        VezaNovayaAccumLayout->addWidget(VezaNovayaEditCorrection);


        VezaNovayaLayout->addLayout(VezaNovayaAccumLayout);

        VezaNovayaEditTimingLayout = new QHBoxLayout();
        VezaNovayaEditTimingLayout->setSpacing(6);
        VezaNovayaEditTimingLayout->setObjectName(QString::fromUtf8("VezaNovayaEditTimingLayout"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        VezaNovayaEditTimingLayout->addItem(horizontalSpacer_7);

        labelVezaNovayaRestart = new QLabel(VezaNovayaTab);
        labelVezaNovayaRestart->setObjectName(QString::fromUtf8("labelVezaNovayaRestart"));

        VezaNovayaEditTimingLayout->addWidget(labelVezaNovayaRestart);

        VezaNovayaRestart = new QDateTimeEdit(VezaNovayaTab);
        VezaNovayaRestart->setObjectName(QString::fromUtf8("VezaNovayaRestart"));
        sizePolicy.setHeightForWidth(VezaNovayaRestart->sizePolicy().hasHeightForWidth());
        VezaNovayaRestart->setSizePolicy(sizePolicy);
        VezaNovayaRestart->setMinimumSize(QSize(220, 23));
        VezaNovayaRestart->setMinimumDateTime(QDateTime(QDate(2018, 1, 1), QTime(0, 0, 0)));
        VezaNovayaRestart->setMinimumDate(QDate(2018, 1, 1));
        VezaNovayaRestart->setCalendarPopup(true);

        VezaNovayaEditTimingLayout->addWidget(VezaNovayaRestart);

        EditTimingVezaNovaya = new QPushButton(VezaNovayaTab);
        EditTimingVezaNovaya->setObjectName(QString::fromUtf8("EditTimingVezaNovaya"));
        EditTimingVezaNovaya->setAutoDefault(false);

        VezaNovayaEditTimingLayout->addWidget(EditTimingVezaNovaya);

        VezaNovayaPlusMinus = new QLineEdit(VezaNovayaTab);
        VezaNovayaPlusMinus->setObjectName(QString::fromUtf8("VezaNovayaPlusMinus"));
        VezaNovayaPlusMinus->setMaximumSize(QSize(23, 25));

        VezaNovayaEditTimingLayout->addWidget(VezaNovayaPlusMinus);

        VezaNovayaEdit = new QTimeEdit(VezaNovayaTab);
        VezaNovayaEdit->setObjectName(QString::fromUtf8("VezaNovayaEdit"));
        VezaNovayaEdit->setMinimumSize(QSize(60, 23));
        VezaNovayaEdit->setMaximumSize(QSize(60, 23));
        VezaNovayaEdit->setToolTipDuration(-1);
        VezaNovayaEdit->setMaximumTime(QTime(0, 59, 59));
        VezaNovayaEdit->setCalendarPopup(false);
        VezaNovayaEdit->setTime(QTime(0, 0, 0));

        VezaNovayaEditTimingLayout->addWidget(VezaNovayaEdit);


        VezaNovayaLayout->addLayout(VezaNovayaEditTimingLayout);

        VezaNovayaTableLayout = new QHBoxLayout();
        VezaNovayaTableLayout->setSpacing(6);
        VezaNovayaTableLayout->setObjectName(QString::fromUtf8("VezaNovayaTableLayout"));
        horizontalSpacer_8 = new QSpacerItem(13, 149, QSizePolicy::Expanding, QSizePolicy::Minimum);

        VezaNovayaTableLayout->addItem(horizontalSpacer_8);

        VezaNovayaTable = new QTableWidget(VezaNovayaTab);
        VezaNovayaTable->setObjectName(QString::fromUtf8("VezaNovayaTable"));
        VezaNovayaTable->setEnabled(true);
        sizePolicy.setHeightForWidth(VezaNovayaTable->sizePolicy().hasHeightForWidth());
        VezaNovayaTable->setSizePolicy(sizePolicy);
        VezaNovayaTable->setMinimumSize(QSize(702, 182));
        VezaNovayaTable->setMaximumSize(QSize(702, 182));
        VezaNovayaTable->setFont(font2);
        VezaNovayaTable->setFrameShape(QFrame::Box);
        VezaNovayaTable->setFrameShadow(QFrame::Raised);
        VezaNovayaTable->setLineWidth(0);
        VezaNovayaTable->setMidLineWidth(1);
        VezaNovayaTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        VezaNovayaTable->setDragEnabled(false);
        VezaNovayaTable->setAlternatingRowColors(false);
        VezaNovayaTable->setSelectionMode(QAbstractItemView::SingleSelection);
        VezaNovayaTable->setSelectionBehavior(QAbstractItemView::SelectItems);
        VezaNovayaTable->setShowGrid(true);
        VezaNovayaTable->setGridStyle(Qt::SolidLine);
        VezaNovayaTable->setSortingEnabled(false);
        VezaNovayaTable->horizontalHeader()->setCascadingSectionResizes(false);
        VezaNovayaTable->horizontalHeader()->setHighlightSections(true);
        VezaNovayaTable->verticalHeader()->setVisible(false);

        VezaNovayaTableLayout->addWidget(VezaNovayaTable);


        VezaNovayaLayout->addLayout(VezaNovayaTableLayout);


        horizontalLayout_2->addLayout(VezaNovayaLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout_7->addLayout(verticalLayout_2);

        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Filling/artifacts/VezaNovayaIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        SelectTiming->addTab(VezaNovayaTab, icon10, QString());

        RespIsAndSelectTimingLayout->addWidget(SelectTiming);

        RespIsNearLayout = new QHBoxLayout();
        RespIsNearLayout->setSpacing(6);
        RespIsNearLayout->setObjectName(QString::fromUtf8("RespIsNearLayout"));
        RespIsNearlabel = new QLabel(layoutWidget);
        RespIsNearlabel->setObjectName(QString::fromUtf8("RespIsNearlabel"));

        RespIsNearLayout->addWidget(RespIsNearlabel);

        RespIsNearlabel_2 = new QLabel(layoutWidget);
        RespIsNearlabel_2->setObjectName(QString::fromUtf8("RespIsNearlabel_2"));

        RespIsNearLayout->addWidget(RespIsNearlabel_2);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        RespIsNearLayout->addItem(horizontalSpacer_13);


        RespIsAndSelectTimingLayout->addLayout(RespIsNearLayout);

        RespIsNowLayout = new QHBoxLayout();
        RespIsNowLayout->setSpacing(6);
        RespIsNowLayout->setObjectName(QString::fromUtf8("RespIsNowLayout"));
        RespIsNowlabel = new QLabel(layoutWidget);
        RespIsNowlabel->setObjectName(QString::fromUtf8("RespIsNowlabel"));

        RespIsNowLayout->addWidget(RespIsNowlabel);

        RespIsNowlabel_2 = new QLabel(layoutWidget);
        RespIsNowlabel_2->setObjectName(QString::fromUtf8("RespIsNowlabel_2"));

        RespIsNowLayout->addWidget(RespIsNowlabel_2);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        RespIsNowLayout->addItem(horizontalSpacer_14);


        RespIsAndSelectTimingLayout->addLayout(RespIsNowLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        RespIsAndSelectTimingLayout->addItem(verticalSpacer_3);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 110, 281, 86));
        CurrentTime_UpdateAndAlert_UpdateButtonLayout = new QVBoxLayout(layoutWidget1);
        CurrentTime_UpdateAndAlert_UpdateButtonLayout->setSpacing(6);
        CurrentTime_UpdateAndAlert_UpdateButtonLayout->setContentsMargins(11, 11, 11, 11);
        CurrentTime_UpdateAndAlert_UpdateButtonLayout->setObjectName(QString::fromUtf8("CurrentTime_UpdateAndAlert_UpdateButtonLayout"));
        CurrentTime_UpdateAndAlert_UpdateButtonLayout->setContentsMargins(0, 0, 0, 0);
        UpdateButton = new QRadioButton(layoutWidget1);
        UpdateButton->setObjectName(QString::fromUtf8("UpdateButton"));
        QFont font3;
        font3.setPointSize(10);
        UpdateButton->setFont(font3);
        UpdateButton->setMouseTracking(false);
        UpdateButton->setChecked(false);

        CurrentTime_UpdateAndAlert_UpdateButtonLayout->addWidget(UpdateButton);

        AlertTimehorizontalLayout = new QHBoxLayout();
        AlertTimehorizontalLayout->setSpacing(6);
        AlertTimehorizontalLayout->setObjectName(QString::fromUtf8("AlertTimehorizontalLayout"));
        AlertTimelabel = new QLabel(layoutWidget1);
        AlertTimelabel->setObjectName(QString::fromUtf8("AlertTimelabel"));
        AlertTimelabel->setFont(font3);

        AlertTimehorizontalLayout->addWidget(AlertTimelabel);

        AlertTime = new QTimeEdit(layoutWidget1);
        AlertTime->setObjectName(QString::fromUtf8("AlertTime"));
        AlertTime->setMaximumTime(QTime(0, 59, 0));
        AlertTime->setMinimumTime(QTime(0, 1, 0));
        AlertTime->setTime(QTime(0, 59, 0));

        AlertTimehorizontalLayout->addWidget(AlertTime);

        AlertTimelabel_2 = new QLabel(layoutWidget1);
        AlertTimelabel_2->setObjectName(QString::fromUtf8("AlertTimelabel_2"));
        AlertTimelabel_2->setFont(font3);

        AlertTimehorizontalLayout->addWidget(AlertTimelabel_2);


        CurrentTime_UpdateAndAlert_UpdateButtonLayout->addLayout(AlertTimehorizontalLayout);

        CurrentTimeLayout = new QHBoxLayout();
        CurrentTimeLayout->setSpacing(6);
        CurrentTimeLayout->setObjectName(QString::fromUtf8("CurrentTimeLayout"));
        CurrentTimelabel = new QLabel(layoutWidget1);
        CurrentTimelabel->setObjectName(QString::fromUtf8("CurrentTimelabel"));
        CurrentTimelabel->setFont(font3);

        CurrentTimeLayout->addWidget(CurrentTimelabel);

        CurrentTime = new QTimeEdit(layoutWidget1);
        CurrentTime->setObjectName(QString::fromUtf8("CurrentTime"));
        CurrentTime->setFont(font2);
        CurrentTime->setAutoFillBackground(false);
        CurrentTime->setStyleSheet(QString::fromUtf8(""));
        CurrentTime->setWrapping(false);
        CurrentTime->setFrame(false);
        CurrentTime->setReadOnly(true);
        CurrentTime->setButtonSymbols(QAbstractSpinBox::NoButtons);
        CurrentTime->setKeyboardTracking(true);

        CurrentTimeLayout->addWidget(CurrentTime);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        CurrentTimeLayout->addItem(horizontalSpacer_15);


        CurrentTime_UpdateAndAlert_UpdateButtonLayout->addLayout(CurrentTimeLayout);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(290, 110, 101, 31));
        UTCLayout = new QHBoxLayout(layoutWidget2);
        UTCLayout->setSpacing(0);
        UTCLayout->setContentsMargins(11, 11, 11, 11);
        UTCLayout->setObjectName(QString::fromUtf8("UTCLayout"));
        UTCLayout->setSizeConstraint(QLayout::SetFixedSize);
        UTCLayout->setContentsMargins(0, 0, 0, 0);
        UTClabel = new QLabel(layoutWidget2);
        UTClabel->setObjectName(QString::fromUtf8("UTClabel"));
        UTClabel->setMinimumSize(QSize(0, 0));
        UTClabel->setMaximumSize(QSize(35, 29));
        UTClabel->setFont(font1);
        UTClabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        UTCLayout->addWidget(UTClabel);

        UTSPlusMInus = new QLineEdit(layoutWidget2);
        UTSPlusMInus->setObjectName(QString::fromUtf8("UTSPlusMInus"));
        UTSPlusMInus->setMaximumSize(QSize(33, 29));
        UTSPlusMInus->setFont(font1);
        UTSPlusMInus->setFrame(false);
        UTSPlusMInus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        UTSPlusMInus->setReadOnly(true);

        UTCLayout->addWidget(UTSPlusMInus);

        UTSTime = new QTimeEdit(layoutWidget2);
        UTSTime->setObjectName(QString::fromUtf8("UTSTime"));
        UTSTime->setMaximumSize(QSize(30, 29));
        UTSTime->setFont(font1);
        UTSTime->setFrame(false);
        UTSTime->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        UTSTime->setReadOnly(true);
        UTSTime->setButtonSymbols(QAbstractSpinBox::NoButtons);
        UTSTime->setMaximumTime(QTime(13, 0, 0));

        UTCLayout->addWidget(UTSTime);

        MainText = new QTextBrowser(centralWidget);
        MainText->setObjectName(QString::fromUtf8("MainText"));
        MainText->setGeometry(QRect(10, 10, 751, 92));
        MainText->setFrameShape(QFrame::Box);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 777, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(EditAllRestart, AllRestart);
        QWidget::setTabOrder(AllRestart, AllRestartApplyButton);
        QWidget::setTabOrder(AllRestartApplyButton, AllRestartCancelButton);
        QWidget::setTabOrder(AllRestartCancelButton, CurrentTime);
        QWidget::setTabOrder(CurrentTime, AlertTime);
        QWidget::setTabOrder(AlertTime, UpdateButton);
        QWidget::setTabOrder(UpdateButton, SelectTiming);
        QWidget::setTabOrder(SelectTiming, RezinaRestart);
        QWidget::setTabOrder(RezinaRestart, EditTimingRezina);
        QWidget::setTabOrder(EditTimingRezina, RezinaPlusMinus);
        QWidget::setTabOrder(RezinaPlusMinus, RezinaEdit);
        QWidget::setTabOrder(RezinaEdit, RezinaTable);
        QWidget::setTabOrder(RezinaTable, VezaVulkanPlusMinusCorrection);
        QWidget::setTabOrder(VezaVulkanPlusMinusCorrection, VezaVulkanEditCorrection);
        QWidget::setTabOrder(VezaVulkanEditCorrection, VezaVulkanRestart);
        QWidget::setTabOrder(VezaVulkanRestart, EditTimingVezaVulkan);
        QWidget::setTabOrder(EditTimingVezaVulkan, VezaVulkanPlusMinus);
        QWidget::setTabOrder(VezaVulkanPlusMinus, VezaVulkanEdit);
        QWidget::setTabOrder(VezaVulkanEdit, VezaVulkanTable);
        QWidget::setTabOrder(VezaVulkanTable, ProvodPlusMinusCorrection);
        QWidget::setTabOrder(ProvodPlusMinusCorrection, ProvodEditCorrection);
        QWidget::setTabOrder(ProvodEditCorrection, ProvodRestart);
        QWidget::setTabOrder(ProvodRestart, EditTimingProvod);
        QWidget::setTabOrder(EditTimingProvod, ProvodPlusMinus);
        QWidget::setTabOrder(ProvodPlusMinus, ProvodEdit);
        QWidget::setTabOrder(ProvodEdit, ProvodTable);
        QWidget::setTabOrder(ProvodTable, VezaNovayaPlusMinusCorrection);
        QWidget::setTabOrder(VezaNovayaPlusMinusCorrection, VezaNovayaEditCorrection);
        QWidget::setTabOrder(VezaNovayaEditCorrection, VezaNovayaRestart);
        QWidget::setTabOrder(VezaNovayaRestart, EditTimingVezaNovaya);
        QWidget::setTabOrder(EditTimingVezaNovaya, VezaNovayaPlusMinus);
        QWidget::setTabOrder(VezaNovayaPlusMinus, VezaNovayaEdit);
        QWidget::setTabOrder(VezaNovayaEdit, VezaNovayaTable);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(CancelAll);
        menu->addAction(SaveAll);
        menu->addAction(Exit);
        menu->addSeparator();
        menu_2->addAction(general_information);
        menu_2->addAction(WriteMe);
        menu_2->addAction(About);

        retranslateUi(MainWindow);
        QObject::connect(Exit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        SelectTiming->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\241\321\207\320\265\321\202\321\207\320\270\320\272 \321\202\320\260\320\271\320\274\320\270\320\275\320\263\320\276\320\262 \320\276\321\202 \320\224\320\265\320\224_\321\201\320\221\320\265\321\200\320\264\321\217\320\275\320\272\320\276\320\231", nullptr));
        SaveAll->setText(QApplication::translate("MainWindow", "&\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262\321\201\321\221", nullptr));
#ifndef QT_NO_SHORTCUT
        SaveAll->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        Exit->setText(QApplication::translate("MainWindow", "&\320\222\321\213\320\271\321\202\320\270", nullptr));
#ifndef QT_NO_SHORTCUT
        Exit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+E", nullptr));
#endif // QT_NO_SHORTCUT
        WriteMe->setText(QApplication::translate("MainWindow", "&\320\236\320\261\321\200\320\260\321\202\320\275\320\260\321\217 \321\201\320\262\321\217\320\267\321\214", nullptr));
        About->setText(QApplication::translate("MainWindow", "&\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        CancelAll->setText(QApplication::translate("MainWindow", "&\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214 \320\262\321\201\321\221", nullptr));
#ifndef QT_NO_SHORTCUT
        CancelAll->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        general_information->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\211\320\270\320\265 \321\201\320\262\320\265\320\264\320\265\320\275\320\270\321\217 \320\270 \320\277\321\200\320\270\320\275\321\206\320\270\320\277 \321\200\320\260\320\261\320\276\321\202\321\213 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
#ifndef QT_NO_TOOLTIP
        EditAllRestart->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\224\320\260\321\202\321\203/\320\222\321\200\320\265\320\274\321\217 \321\200\320\265\321\201\321\202\320\260\321\200\321\202\320\260 \320\264\320\273\321\217 \320\222\320\241\320\225\320\245 \320\260\321\200\321\202\320\265\321\204\320\260\320\272\321\202\320\276\320\262</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        EditAllRestart->setText(QApplication::translate("MainWindow", "&\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\276\320\261\321\211\321\203\321\216 \320\224\320\260\321\202\321\203/\320\222\321\200\320\265\320\274\321\217 \321\200\320\265\321\201\321\202\320\260\321\200\321\202\320\260", nullptr));
#ifndef QT_NO_TOOLTIP
        AllRestart->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\234\320\276\320\266\320\275\320\276 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\321\214 \320\272\320\273\320\260\320\262\320\270\321\210\320\270 \342\206\220, \342\206\222, \342\206\221, \342\206\223 \320\275\320\260 \320\272\320\273\320\260\320\262\320\270\320\260\321\202\321\203\321\200\320\265, \320\260 \321\202\320\260\320\272\320\266\320\265 \321\201\320\277\321\200\320\260\320\262\320\260 \320\274\320\276\320\266\320\275\320\276 \320\276\321\202\320\272\321\200\321\213\321\202\321\214 \320\272\320\260\320\273\320\265\320\275\320\264\320\260\321\200\321\214 \320\264\320\273\321\217 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \320\264\320\260\321\202\321\213.</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        AllRestart->setDisplayFormat(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 - dd MMM yyyy     \320\222\321\200\320\265\320\274\321\217 - H:mm:ss", nullptr));
        AllRestartApplyButton->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        AllRestartCancelButton->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
#ifndef QT_NO_TOOLTIP
        labelRezinaDateTimeRestart->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\224\320\260\321\202\320\260/\320\222\321\200\320\265\320\274\321\217 \321\200\320\265\321\201\321\202\320\260\321\200\321\202\320\260 \320\240\320\265\320\267\320\270\320\275\321\213 \321\201 \321\203\321\207\320\265\321\202\320\276\320\274 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\276\320\272 \320\270 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\271</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelRezinaDateTimeRestart->setText(QApplication::translate("MainWindow", "&\320\224\320\260\321\202\320\260/\320\222\321\200\320\265\320\274\321\217 \321\200\320\265\321\201\321\202\320\260\321\200\321\202\320\260 \321\200\320\265\320\267\320\270\320\275\321\213", nullptr));
#ifndef QT_NO_TOOLTIP
        RezinaRestart->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\234\320\276\320\266\320\275\320\276 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\321\214 \320\272\320\273\320\260\320\262\320\270\321\210\320\270 \342\206\220, \342\206\222, \342\206\221, \342\206\223 \320\275\320\260 \320\272\320\273\320\260\320\262\320\270\320\260\321\202\321\203\321\200\320\265, \320\260 \321\202\320\260\320\272\320\266\320\265 \321\201\320\277\321\200\320\260\320\262\320\260 \320\274\320\276\320\266\320\275\320\276 \320\276\321\202\320\272\321\200\321\213\321\202\321\214 \320\272\320\260\320\273\320\265\320\275\320\264\320\260\321\200\321\214 \320\264\320\273\321\217 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \320\264\320\260\321\202\321\213.</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        RezinaRestart->setDisplayFormat(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 - dd MMM yyyy     \320\222\321\200\320\265\320\274\321\217 - H:mm:ss", nullptr));
#ifndef QT_NO_TOOLTIP
        EditTimingRezina->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\225\321\201\320\273\320\270 \320\240\320\265\320\267\320\270\320\275\320\260 \320\277\320\276\321\217\320\262\320\270\320\273\320\260\321\201\321\214 \321\207\321\203\321\202\321\214 \321\200\320\260\320\275\321\214\321\210\320\265 \320\270\320\273\320\270 \321\207\321\203\321\202\321\214 \320\277\320\276\320\267\320\266\320\265 - \320\274\320\276\320\266\320\275\320\276 \320\276\321\202\320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262\321\201\320\265 \321\202\320\260\320\271\320\274\320\270\320\275\320\263\320\270 , \321\203\320\272\320\260\320\267\320\260\320\262 \320\262\321\200\320\265\320\274\321\217, \320\272\320\276\321\202\320\276\321\200\320\276\320\265 \320\275\321\203\320\266\320\275\320\276 \320\270\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\262 \320\277\320\260\320\275\320\265\320\273\320\270 \321\201\320\277\321\200\320\260\320\262\320\260</span></p"
                        "></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        EditTimingRezina->setText(QApplication::translate("MainWindow", "\320\232\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\272\320\260 \321\200\320\265\320\267\320\270\320\275\321\213 \342\206\222", nullptr));
#ifndef QT_NO_TOOLTIP
        RezinaPlusMinus->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\270\320\273\320\270 \320\262\321\213\321\207\320\265\321\201\321\202\321\214 \320\262\321\200\320\265\320\274\321\217 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\272\320\270?</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        RezinaPlusMinus->setInputMask(QString());
        RezinaPlusMinus->setText(QApplication::translate("MainWindow", "+", nullptr));
        RezinaPlusMinus->setPlaceholderText(QApplication::translate("MainWindow", "+/-", nullptr));
#ifndef QT_NO_TOOLTIP
        RezinaEdit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\244\320\276\321\200\320\274\320\260\321\202 \320\262\320\262\320\276\320\264\320\260 - \320\234\320\270\320\275\321\203\321\202\321\213 : \320\241\320\265\320\272\321\203\320\275\320\264\321\213</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        RezinaEdit->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        RezinaEdit->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        RezinaEdit->setDisplayFormat(QApplication::translate("MainWindow", "mm : ss", nullptr));
        SelectTiming->setTabText(SelectTiming->indexOf(RezinaTab), QApplication::translate("MainWindow", "&\320\240\320\265\320\267\320\270\320\275\320\260", nullptr));
#ifndef QT_NO_TOOLTIP
        labelVezaVulkanCorrection->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\241\321\203\320\274\320\274\320\260 \320\262\321\201\320\265\321\205 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\276\320\272, \320\262\320\262\320\265\320\264\320\265\320\275\320\275\321\213\321\205 \320\267\320\260 \320\262\321\201\320\265 \320\262\321\200\320\265\320\274\321\217</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelVezaVulkanCorrection->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\211\320\265\320\265 \320\262\321\200\320\265\320\274\321\217 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\272\320\270", nullptr));
        VezaVulkanPlusMinusCorrection->setInputMask(QString());
        VezaVulkanPlusMinusCorrection->setText(QApplication::translate("MainWindow", "+", nullptr));
        VezaVulkanPlusMinusCorrection->setPlaceholderText(QApplication::translate("MainWindow", "+/-", nullptr));
#ifndef QT_NO_TOOLTIP
        VezaVulkanEditCorrection->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\234\320\270\320\275\321\203\321\202\321\213 : \320\241\320\265\320\272\321\203\320\275\320\264\321\213</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        VezaVulkanEditCorrection->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        VezaVulkanEditCorrection->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        VezaVulkanEditCorrection->setDisplayFormat(QApplication::translate("MainWindow", "mm : ss", nullptr));
#ifndef QT_NO_TOOLTIP
        labelVezaVulkanRestart->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\224\320\260\321\202\320\260/\320\222\321\200\320\265\320\274\321\217 \321\200\320\265\321\201\321\202\320\260\321\200\321\202\320\260 \320\222\320\265\320\267\321\203\320\262\320\270\321\217 \320\222\321\203\320\273\320\272\320\260\320\275 \321\201 \321\203\321\207\320\265\321\202\320\276\320\274 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\271</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelVezaVulkanRestart->setText(QApplication::translate("MainWindow", "&\320\224\320\260\321\202\320\260/\320\222\321\200\320\265\320\274\321\217 \321\200\320\265\321\201\321\202\320\260\321\200\321\202\320\260 \320\222\320\265\320\267\321\203\320\262\320\270\321\217 \320\222\321\203\320\273\320\272\320\260\320\275", nullptr));
#ifndef QT_NO_TOOLTIP
        VezaVulkanRestart->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\234\320\276\320\266\320\275\320\276 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\321\214 \320\272\320\273\320\260\320\262\320\270\321\210\320\270 \342\206\220, \342\206\222, \342\206\221, \342\206\223 \320\275\320\260 \320\272\320\273\320\260\320\262\320\270\320\260\321\202\321\203\321\200\320\265, \320\260 \321\202\320\260\320\272\320\266\320\265 \321\201\320\277\321\200\320\260\320\262\320\260 \320\274\320\276\320\266\320\275\320\276 \320\276\321\202\320\272\321\200\321\213\321\202\321\214 \320\272\320\260\320\273\320\265\320\275\320\264\320\260\321\200\321\214 \320\264\320\273\321\217 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \320\264\320\260\321\202\321\213.</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        VezaVulkanRestart->setDisplayFormat(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 - dd MMM yyyy     \320\222\321\200\320\265\320\274\321\217 - H:mm:ss", nullptr));
#ifndef QT_NO_TOOLTIP
        EditTimingVezaVulkan->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\225\321\201\320\273\320\270 \320\222\320\265\320\267\321\203\320\262\320\270\320\271 \320\277\320\276\321\217\320\262\320\270\320\273\321\201\321\217 \321\207\321\203\321\202\321\214 \321\200\320\260\320\275\321\214\321\210\320\265 \320\270\320\273\320\270 \321\207\321\203\321\202\321\214 \320\277\320\276\320\267\320\266\320\265 - \320\274\320\276\320\266\320\275\320\276 \320\276\321\202\320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262\321\201\320\265 \321\202\320\260\320\271\320\274\320\270\320\275\320\263\320\270 , \321\203\320\272\320\260\320\267\320\260\320\262 \320\262\321\200\320\265\320\274\321\217, \320\272\320\276\321\202\320\276\321\200\320\276\320\265 \320\275\321\203\320\266\320\275\320\276 \320\270\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\262 \320\277\320\260\320\275\320\265\320\273\320\270 \321\201\320\277\321\200\320\260\320\262\320\260</span></p"
                        "></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        EditTimingVezaVulkan->setText(QApplication::translate("MainWindow", "\320\232\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\272\320\260 \320\222\320\265\320\267\321\203\320\262\320\270\321\217 \320\222\321\203\320\273\320\272\320\260\320\275 \342\206\222", nullptr));
#ifndef QT_NO_TOOLTIP
        VezaVulkanPlusMinus->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\270\320\273\320\270 \320\262\321\213\321\207\320\265\321\201\321\202\321\214 \320\262\321\200\320\265\320\274\321\217 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\272\320\270?</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        VezaVulkanPlusMinus->setInputMask(QString());
        VezaVulkanPlusMinus->setText(QApplication::translate("MainWindow", "+", nullptr));
        VezaVulkanPlusMinus->setPlaceholderText(QApplication::translate("MainWindow", "+/-", nullptr));
#ifndef QT_NO_TOOLTIP
        VezaVulkanEdit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\244\320\276\321\200\320\274\320\260\321\202 \320\262\320\262\320\276\320\264\320\260 - \320\234\320\270\320\275\321\203\321\202\321\213 : \320\241\320\265\320\272\321\203\320\275\320\264\321\213</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        VezaVulkanEdit->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        VezaVulkanEdit->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        VezaVulkanEdit->setDisplayFormat(QApplication::translate("MainWindow", "mm : ss", nullptr));
        SelectTiming->setTabText(SelectTiming->indexOf(VezaVulkanTab), QApplication::translate("MainWindow", "&\320\222\320\265\320\267\321\203\320\262\320\270\320\271 \320\222\321\203\320\273\320\272\320\260\320\275", nullptr));
#ifndef QT_NO_TOOLTIP
        labelProvodCorrection->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\241\321\203\320\274\320\274\320\260 \320\262\321\201\320\265\321\205 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\276\320\272, \320\262\320\262\320\265\320\264\320\265\320\275\320\275\321\213\321\205 \320\267\320\260 \320\262\321\201\320\265 \320\262\321\200\320\265\320\274\321\217</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelProvodCorrection->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\211\320\265\320\265 \320\262\321\200\320\265\320\274\321\217 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\272\320\270", nullptr));
        ProvodPlusMinusCorrection->setInputMask(QString());
        ProvodPlusMinusCorrection->setText(QApplication::translate("MainWindow", "+", nullptr));
        ProvodPlusMinusCorrection->setPlaceholderText(QApplication::translate("MainWindow", "+/-", nullptr));
#ifndef QT_NO_TOOLTIP
        ProvodEditCorrection->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\234\320\270\320\275\321\203\321\202\321\213 : \320\241\320\265\320\272\321\203\320\275\320\264\321\213</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        ProvodEditCorrection->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        ProvodEditCorrection->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        ProvodEditCorrection->setDisplayFormat(QApplication::translate("MainWindow", "mm : ss", nullptr));
#ifndef QT_NO_TOOLTIP
        labelProvodRestart->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\224\320\260\321\202\320\260/\320\222\321\200\320\265\320\274\321\217 \321\200\320\265\321\201\321\202\320\260\321\200\321\202\320\260 \320\237\321\200\320\276\320\262\320\276\320\264\320\275\320\270\320\272\320\260 \321\201 \321\203\321\207\320\265\321\202\320\276\320\274 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\271</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelProvodRestart->setText(QApplication::translate("MainWindow", "&\320\224\320\260\321\202\320\260/\320\222\321\200\320\265\320\274\321\217 \321\200\320\265\321\201\321\202\320\260\321\200\321\202\320\260 \320\237\321\200\320\276\320\262\320\276\320\264\320\275\320\270\320\272\320\260", nullptr));
#ifndef QT_NO_TOOLTIP
        ProvodRestart->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\234\320\276\320\266\320\275\320\276 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\321\214 \320\272\320\273\320\260\320\262\320\270\321\210\320\270 \342\206\220, \342\206\222, \342\206\221, \342\206\223 \320\275\320\260 \320\272\320\273\320\260\320\262\320\270\320\260\321\202\321\203\321\200\320\265, \320\260 \321\202\320\260\320\272\320\266\320\265 \321\201\320\277\321\200\320\260\320\262\320\260 \320\274\320\276\320\266\320\275\320\276 \320\276\321\202\320\272\321\200\321\213\321\202\321\214 \320\272\320\260\320\273\320\265\320\275\320\264\320\260\321\200\321\214 \320\264\320\273\321\217 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \320\264\320\260\321\202\321\213.</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        ProvodRestart->setDisplayFormat(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 - dd MMM yyyy     \320\222\321\200\320\265\320\274\321\217 - H:mm:ss", nullptr));
#ifndef QT_NO_TOOLTIP
        EditTimingProvod->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\225\321\201\320\273\320\270 \320\237\321\200\320\276\320\262\320\276\320\264\320\275\320\270\320\272 \320\277\320\276\321\217\320\262\320\270\320\273\321\201\321\217 \321\207\321\203\321\202\321\214 \321\200\320\260\320\275\321\214\321\210\320\265 \320\270\320\273\320\270 \321\207\321\203\321\202\321\214 \320\277\320\276\320\267\320\266\320\265 - \320\274\320\276\320\266\320\275\320\276 \320\276\321\202\320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262\321\201\320\265 \321\202\320\260\320\271\320\274\320\270\320\275\320\263\320\270 , \321\203\320\272\320\260\320\267\320\260\320\262 \320\262\321\200\320\265\320\274\321\217, \320\272\320\276\321\202\320\276\321\200\320\276\320\265 \320\275\321\203\320\266\320\275\320\276 \320\270\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\262 \320\277\320\260\320\275\320\265\320\273\320\270 \321\201\320\277\321\200\320\260\320\262\320"
                        "\260</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        EditTimingProvod->setText(QApplication::translate("MainWindow", "\320\232\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\272\320\260 \320\237\321\200\320\276\320\262\320\276\320\264\320\275\320\270\320\272\320\260 \342\206\222", nullptr));
#ifndef QT_NO_TOOLTIP
        ProvodPlusMinus->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\270\320\273\320\270 \320\262\321\213\321\207\320\265\321\201\321\202\321\214 \320\262\321\200\320\265\320\274\321\217 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\272\320\270?</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        ProvodPlusMinus->setInputMask(QString());
        ProvodPlusMinus->setText(QApplication::translate("MainWindow", "+", nullptr));
        ProvodPlusMinus->setPlaceholderText(QApplication::translate("MainWindow", "+/-", nullptr));
#ifndef QT_NO_TOOLTIP
        ProvodEdit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\244\320\276\321\200\320\274\320\260\321\202 \320\262\320\262\320\276\320\264\320\260 - \320\234\320\270\320\275\321\203\321\202\321\213 : \320\241\320\265\320\272\321\203\320\275\320\264\321\213</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        ProvodEdit->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        ProvodEdit->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        ProvodEdit->setDisplayFormat(QApplication::translate("MainWindow", "mm : ss", nullptr));
        SelectTiming->setTabText(SelectTiming->indexOf(ProvodTab), QApplication::translate("MainWindow", "&\320\237\321\200\320\276\320\262\320\276\320\264\320\275\320\270\320\272", nullptr));
#ifndef QT_NO_TOOLTIP
        labelVezaNovayaCorrection->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\241\321\203\320\274\320\274\320\260 \320\262\321\201\320\265\321\205 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\276\320\272, \320\262\320\262\320\265\320\264\320\265\320\275\320\275\321\213\321\205 \320\267\320\260 \320\262\321\201\320\265 \320\262\321\200\320\265\320\274\321\217</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelVezaNovayaCorrection->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\211\320\265\320\265 \320\262\321\200\320\265\320\274\321\217 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\272\320\270", nullptr));
        VezaNovayaPlusMinusCorrection->setInputMask(QString());
        VezaNovayaPlusMinusCorrection->setText(QApplication::translate("MainWindow", "+", nullptr));
        VezaNovayaPlusMinusCorrection->setPlaceholderText(QApplication::translate("MainWindow", "+/-", nullptr));
#ifndef QT_NO_TOOLTIP
        VezaNovayaEditCorrection->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\234\320\270\320\275\321\203\321\202\321\213 : \320\241\320\265\320\272\321\203\320\275\320\264\321\213</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        VezaNovayaEditCorrection->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        VezaNovayaEditCorrection->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        VezaNovayaEditCorrection->setDisplayFormat(QApplication::translate("MainWindow", "mm : ss", nullptr));
#ifndef QT_NO_TOOLTIP
        labelVezaNovayaRestart->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\224\320\260\321\202\320\260/\320\222\321\200\320\265\320\274\321\217 \321\200\320\265\321\201\321\202\320\260\321\200\321\202\320\260 \320\222\320\265\320\267\321\203\320\262\320\270\321\217 \320\235\320\276\320\262\320\260\321\217 \320\227\320\265\320\274\320\273\321\217 \321\201 \321\203\321\207\320\265\321\202\320\276\320\274 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\271</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelVezaNovayaRestart->setText(QApplication::translate("MainWindow", "&\320\224\320\260\321\202\320\260/\320\222\321\200\320\265\320\274\321\217 \321\200\320\265\321\201\321\202\320\260\321\200\321\202\320\260 \320\222\320\265\320\267\321\203\320\262\320\270\321\217 \320\235\320\227", nullptr));
#ifndef QT_NO_TOOLTIP
        VezaNovayaRestart->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\234\320\276\320\266\320\275\320\276 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\321\214 \320\272\320\273\320\260\320\262\320\270\321\210\320\270 \342\206\220, \342\206\222, \342\206\221, \342\206\223 \320\275\320\260 \320\272\320\273\320\260\320\262\320\270\320\260\321\202\321\203\321\200\320\265, \320\260 \321\202\320\260\320\272\320\266\320\265 \321\201\320\277\321\200\320\260\320\262\320\260 \320\274\320\276\320\266\320\275\320\276 \320\276\321\202\320\272\321\200\321\213\321\202\321\214 \320\272\320\260\320\273\320\265\320\275\320\264\320\260\321\200\321\214 \320\264\320\273\321\217 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \320\264\320\260\321\202\321\213.</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        VezaNovayaRestart->setDisplayFormat(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 - dd MMM yyyy     \320\222\321\200\320\265\320\274\321\217 - H:mm:ss", nullptr));
#ifndef QT_NO_TOOLTIP
        EditTimingVezaNovaya->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\225\321\201\320\273\320\270 \320\222\320\265\320\267\321\203\320\262\320\270\320\271 \320\235\320\276\320\262\320\260\321\217 \320\227\320\265\320\274\320\273\321\217 \320\277\320\276\321\217\320\262\320\270\320\273\321\201\321\217 \321\207\321\203\321\202\321\214 \321\200\320\260\320\275\321\214\321\210\320\265 \320\270\320\273\320\270 \321\207\321\203\321\202\321\214 \320\277\320\276\320\267\320\266\320\265 - \320\274\320\276\320\266\320\275\320\276 \320\276\321\202\320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262\321\201\320\265 \321\202\320\260\320\271\320\274\320\270\320\275\320\263\320\270 , \321\203\320\272\320\260\320\267\320\260\320\262 \320\262\321\200\320\265\320\274\321\217, \320\272\320\276\321\202\320\276\321\200\320\276\320\265 \320\275\321\203\320\266\320\275\320\276 \320\270\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\262 \320\277\320\260\320\275\320"
                        "\265\320\273\320\270 \321\201\320\277\321\200\320\260\320\262\320\260</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        EditTimingVezaNovaya->setText(QApplication::translate("MainWindow", "\320\232\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\272\320\260 \320\222\320\265\320\267\321\203\320\262\320\270\321\217 \320\235\320\276\320\262\320\260\321\217 \320\227\320\265\320\274\320\273\321\217 \342\206\222", nullptr));
#ifndef QT_NO_TOOLTIP
        VezaNovayaPlusMinus->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\270\320\273\320\270 \320\262\321\213\321\207\320\265\321\201\321\202\321\214 \320\262\321\200\320\265\320\274\321\217 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\272\320\270?</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        VezaNovayaPlusMinus->setInputMask(QString());
        VezaNovayaPlusMinus->setText(QApplication::translate("MainWindow", "+", nullptr));
        VezaNovayaPlusMinus->setPlaceholderText(QApplication::translate("MainWindow", "+/-", nullptr));
#ifndef QT_NO_TOOLTIP
        VezaNovayaEdit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\244\320\276\321\200\320\274\320\260\321\202 \320\262\320\262\320\276\320\264\320\260 - \320\234\320\270\320\275\321\203\321\202\321\213 : \320\241\320\265\320\272\321\203\320\275\320\264\321\213</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        VezaNovayaEdit->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        VezaNovayaEdit->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        VezaNovayaEdit->setDisplayFormat(QApplication::translate("MainWindow", "mm : ss", nullptr));
        SelectTiming->setTabText(SelectTiming->indexOf(VezaNovayaTab), QApplication::translate("MainWindow", "&\320\222\320\265\320\267\321\203\320\262\320\270\320\271 \320\235\320\276\320\262\320\260\321\217 \320\227\320\265\320\274\320\273\321\217", nullptr));
        RespIsNearlabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/Filling/Mainwindow/Table_Green.jpg\"/></p></body></html>", nullptr));
        RespIsNearlabel_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">- \321\201\320\272\320\276\321\200\320\276 \320\261\321\203\320\264\320\265\321\202 \321\200\320\265\321\201\320\277 \320\260\321\200\321\202\320\265\321\204\320\260\320\272\321\202\320\260</span></p></body></html>", nullptr));
        RespIsNowlabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/Filling/Mainwindow/Table_Red.jpg\"/></p></body></html>", nullptr));
        RespIsNowlabel_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">- \321\200\320\265\321\201\320\277 \321\203\320\266\320\265 \320\270\320\264\320\265\321\202 (\321\202\320\276\320\273\321\214\320\272\320\276 \320\264\320\273\321\217 \321\200\320\265\320\267\320\270\320\275\321\213)</span></p></body></html>", nullptr));
        UpdateButton->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\202\320\260\321\202\321\214 \320\262 \321\200\320\265\320\260\320\273\321\214\320\275\320\276\320\274 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
#ifndef QT_NO_TOOLTIP
        AlertTimelabel->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\222\321\200\320\265\320\274\321\217 \320\264\320\276 \321\200\320\265\321\201\320\277\320\260 \320\222\320\241\320\225\320\245 \320\260\321\200\321\202\320\265\321\204\320\260\320\272\321\202\320\276\320\262, \320\277\321\200\320\270 \320\275\320\260\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\320\270 \320\272\320\276\321\202\320\276\321\200\320\276\320\263\320\276 \320\261\320\273\320\270\320\266\320\260\320\271\321\210\320\270\320\271 \321\200\320\265\321\201\320\277 \320\261\321\203\320\264\320\265\321\202 \320\276\321\202\320\274\320\265\321\207\320\265\320\275 \320\267\320\265\320\273\320\265\320\275\321\213\320\274 \321\206\320\262\320\265\321\202\320\276\320\274</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        AlertTimelabel->setText(QApplication::translate("MainWindow", "&\320\236\320\277\320\276\320\262\320\265\321\211\320\260\321\202\321\214 \320\276 \320\275\320\260\321\207\320\260\320\273\320\265 \320\240\320\265\321\201\320\277\320\260 \320\267\320\260", nullptr));
#ifndef QT_NO_TOOLTIP
        AlertTime->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\222\321\200\320\265\320\274\321\217 \320\264\320\276 \321\200\320\265\321\201\320\277\320\260 \320\222\320\241\320\225\320\245 \320\260\321\200\321\202\320\265\321\204\320\260\320\272\321\202\320\276\320\262, \320\277\321\200\320\270 \320\275\320\260\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\320\270 \320\272\320\276\321\202\320\276\321\200\320\276\320\263\320\276 \320\261\320\273\320\270\320\266\320\260\320\271\321\210\320\270\320\271 \321\200\320\265\321\201\320\277 \320\261\321\203\320\264\320\265\321\202 \320\276\321\202\320\274\320\265\321\207\320\265\320\275 \320\267\320\265\320\273\320\265\320\275\321\213\320\274 \321\206\320\262\320\265\321\202\320\276\320\274</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        AlertTime->setDisplayFormat(QApplication::translate("MainWindow", "mm", nullptr));
#ifndef QT_NO_TOOLTIP
        AlertTimelabel_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\222\321\200\320\265\320\274\321\217 \320\264\320\276 \321\200\320\265\321\201\320\277\320\260 \320\222\320\241\320\225\320\245 \320\260\321\200\321\202\320\265\321\204\320\260\320\272\321\202\320\276\320\262, \320\277\321\200\320\270 \320\275\320\260\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\320\270 \320\272\320\276\321\202\320\276\321\200\320\276\320\263\320\276 \320\261\320\273\320\270\320\266\320\260\320\271\321\210\320\270\320\271 \321\200\320\265\321\201\320\277 \320\261\321\203\320\264\320\265\321\202 \320\276\321\202\320\274\320\265\321\207\320\265\320\275 \320\267\320\265\320\273\320\265\320\275\321\213\320\274 \321\206\320\262\320\265\321\202\320\276\320\274</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        AlertTimelabel_2->setText(QApplication::translate("MainWindow", "\320\274\320\270\320\275\321\203\321\202", nullptr));
#ifndef QT_NO_TOOLTIP
        CurrentTimelabel->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\242\320\265\320\272\321\203\321\211\320\265\320\265 \320\262\321\200\320\265\320\274\321\217 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        CurrentTimelabel->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\265\320\265 \320\262\321\200\320\265\320\274\321\217 :", nullptr));
#ifndef QT_NO_TOOLTIP
        CurrentTime->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\244\320\276\321\200\320\274\320\260\321\202 - \320\247\320\260\321\201\321\213 : \320\234\320\270\320\275\321\203\321\202\321\213 : \320\241\320\265\320\272\321\203\320\275\320\264\321\213</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        CurrentTime->setDisplayFormat(QApplication::translate("MainWindow", "H:mm:ss", nullptr));
#ifndef QT_NO_TOOLTIP
        UTClabel->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\247\320\260\321\201\320\276\320\262\320\276\320\271 \320\277\320\276\321\217\321\201 \320\222\320\260\321\210\320\265\320\263\320\276 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        UTClabel->setText(QApplication::translate("MainWindow", "UTC", nullptr));
#ifndef QT_NO_TOOLTIP
        UTSPlusMInus->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\247\320\260\321\201\320\276\320\262\320\276\320\271 \320\277\320\276\321\217\321\201 \320\222\320\260\321\210\320\265\320\263\320\276 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        UTSPlusMInus->setInputMask(QString());
        UTSPlusMInus->setText(QApplication::translate("MainWindow", "+", nullptr));
#ifndef QT_NO_TOOLTIP
        UTSTime->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\247\320\260\321\201\320\276\320\262\320\276\320\271 \320\277\320\276\321\217\321\201 \320\222\320\260\321\210\320\265\320\263\320\276 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        UTSTime->setDisplayFormat(QApplication::translate("MainWindow", "H", nullptr));
        MainText->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Tahoma'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\237\321\200\320\270 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\270 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 \321\200\320\265\321\201\321\202\320\260\321\200\321\202\320\260 \321\203\320\272\320\260\320\267\321\213\320\262\320\260\320\271\321\202\320\265 \320\262\321\200\320\265\320\274\321\217 </span><span style=\" font-size:10pt; color:#aa0000;\">\320\222\320\220\320\250\320\225\320\223\320\236 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260</span><s"
                        "pan style=\" font-size:10pt;\"> (\320\270\320\275\320\260\321\207\320\265 \320\263\320\276\320\262\320\276\321\200\321\217 - </span><span style=\" font-size:10pt; color:#aa0000;\">\320\234\320\225\320\241\320\242\320\235\320\236\320\225 \320\262\321\200\320\265\320\274</span><span style=\" font-size:10pt; color:#aa5500;\">\321\217</span><span style=\" font-size:10pt;\">) !!!</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\233\321\216\320\261\320\276\320\265 \320\262\321\200\320\265\320\274\321\217, \321\201\321\203\321\211\320\265\321\201\321\202\320\262\321\203\321\216\321\211\320\265\320\265 \320\262 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265, \320\276\321\200\320\270\320\265\320\275\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\276 \320\275\320\260 \320\262\321\200\320\265\320\274\321\217 \320\222\320\260\321\210\320\265\320"
                        "\263\320\276 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260, \321\202.\320\265. \320\275\320\265 \320\275\321\203\320\266\320\275\320\276 \320\272\320\260\320\266\320\264\321\213\320\271 \321\200\320\265\321\201\320\277 \320\260\321\200\321\202\320\265\321\204\320\260\320\272\321\202\320\276\320\262 \320\277\320\265\321\200\320\265\320\262\320\276\320\264\320\270\321\202\321\214 \320\275\320\260 \320\262\321\200\320\265\320\274\321\217 \320\234\320\241\320\232 (\321\201\320\265\321\200\320\262\320\265\321\200\320\275\320\276\320\265), \320\265\321\201\320\273\320\270 \320\222\321\213 \320\275\320\260\321\205\320\276\320\264\320\270\321\202\320\265\321\201\321\214 \320\262 \320\264\321\200\321\203\320\263\320\276\320\274 \321\207\320\260\321\201\320\276\320\262\320\276\320\274 \320\277\320\276\321\217\321\201\320\265.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span st"
                        "yle=\" font-size:10pt;\">\320\222\321\201\321\221, \321\207\321\202\320\276 \321\202\321\200\320\265\320\261\321\203\320\265\321\202\321\201\321\217 - \320\262\320\262\320\265\321\201\321\202\320\270 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\265 \320\262\321\200\320\265\320\274\321\217 \321\200\320\265\321\201\321\202\320\260\321\200\321\202\320\260 \321\201\320\265\321\200\320\262\320\265\321\200\320\260 (\320\277\320\276 </span><span style=\" font-size:10pt; color:#aa0000;\">\320\234\320\225\320\241\320\242\320\235\320\236\320\234\320\243</span><span style=\" font-size:10pt;\"> \320\262\321\200\320\265\320\274\320\265\320\275\320\270 - \320\262\321\200\320\265\320\274\320\265\320\275\320\270 </span><span style=\" font-size:10pt; color:#aa0000;\">\320\222\320\220\320\250\320\225\320\223\320\236</span><span style=\" font-size:10pt;\"> \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260) \320\262 \320\277\320\276\320\273\320\265 &quot;\320\230\320\267\320\274"
                        "\320\265\320\275\320\270\321\202\321\214 \320\276\320\261\321\211\321\203\321\216 \320\224\320\260\321\202\321\203/\320\222\321\200\320\265\320\274\321\217 \321\200\320\265\321\201\321\202\320\260\321\200\321\202\320\260&quot; - \320\276\321\201\321\202\320\260\320\273\321\214\320\275\320\276\320\265 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \321\201\320\264\320\265\320\273\320\260\320\265\321\202 \320\267\320\260 \320\222\320\260\321\201.</span></p></body></html>", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "&\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "&\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
