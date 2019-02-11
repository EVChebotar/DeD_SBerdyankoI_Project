QT += core gui
#Если нужно подключить звуковой кодек, включить :
#QT += multimedia

RC_ICONS = MainIcon.ico

VERSION=1.0.0.1
QMAKE_TARGET_COMPANY = DeD_SBerdyankoI_soft
QMAKE_TARGET_PRODUCT = DeD_SBerdyankoI_Project
QMAKE_TARGET_DESCRIPTION = Rezina/VezaVulkan/VezaNovaya/Provod timings from DeD_SBerdyankoI
QMAKE_TARGET_COPYRIGHT = DeD_SBerdyankoI

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DeD_SBerdyankoI_Project
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    rezina.cpp \
    about.cpp \
    filescheck.cpp \
    vezavulkan.cpp \
    accumulator.cpp \
    vezanovaya.cpp \
    provod.cpp \
    generalinformation.cpp \
    writeme.cpp


HEADERS += \
        mainwindow.h \
    rezina.h \
    about.h \
    filescheck.h \
    vezavulkan.h \
    accumulator.h \
    vezanovaya.h \
    provod.h \
    generalinformation.h \
    writeme.h


FORMS += \
        mainwindow.ui \
    about.ui \
    generalinformation.ui \
    writeme.ui

RESOURCES += \
    resourses_and_icons.qrc

DISTFILES +=

#QMAKE_LFLAGS_RELEASE += -static -static-libgcc
