/********************************************************************************
** Form generated from reading UI file 'writeme.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITEME_H
#define UI_WRITEME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_WriteMe
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *WriteMePushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *WriteMe)
    {
        if (WriteMe->objectName().isEmpty())
            WriteMe->setObjectName(QString::fromUtf8("WriteMe"));
        WriteMe->resize(598, 537);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Filling/Mainwindow/WriteMeIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        WriteMe->setWindowIcon(icon);
        gridLayout = new QGridLayout(WriteMe);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser = new QTextBrowser(WriteMe);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        WriteMePushButton = new QPushButton(WriteMe);
        WriteMePushButton->setObjectName(QString::fromUtf8("WriteMePushButton"));

        horizontalLayout->addWidget(WriteMePushButton);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(WriteMe);
        QObject::connect(WriteMePushButton, SIGNAL(clicked()), WriteMe, SLOT(close()));

        QMetaObject::connectSlotsByName(WriteMe);
    } // setupUi

    void retranslateUi(QDialog *WriteMe)
    {
        WriteMe->setWindowTitle(QApplication::translate("WriteMe", "\320\236\320\261\321\200\320\260\321\202\320\275\320\260\321\217 \321\201\320\262\321\217\320\267\321\214", nullptr));
        textBrowser->setHtml(QApplication::translate("WriteMe", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\320\232\320\260\320\272 \321\201\320\262\321\217\320\267\320\260\321\202\321\214\321\201\321\217 \321\201 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272\320\276\320"
                        "\274 : </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Filling/OtherWindows/writeme/E-Mail.jpg\" width=\"42\" height=\"42\" />  -<span style=\" font-size:14pt;\">  johnchymaxer@inbox.ru</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Filling/OtherWindows/writeme/Skype.png\" width=\"42\" height=\"42\" />  -<span style=\" font-size:14pt;\">  johnchymaxer</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Filling/OtherWindows/writeme/Telegram.jpg\" width=\"42\" height=\"42\" />  -  <span style=\" font-size:14pt;\">@Johnchymaxer</span></p>\n"
"<"
                        "p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\320\222 \320\270\320\263\321\200\320\265 : \320\224\320\265\320\224_\321\201\320\221\320\265\321\200\320\264\321\217\320\275\320\272\320\276\320\231 (\320\241\320\265\321\200\320\262\320\265\321\200 \320\241\320\237\320\221 \320\270 \320\242\320\236\320\233\320\254\320\232\320\236! \320\235\320\260 \320\234\320\241\320\232 \320\274\320\265\320\275\321\217 \320\275\320\265\321\202, \320\275\320\265 \320\261\321\203\320\264\320\265\321\202 \320\270 \320\262\321\201\320\265, \320\272\321\202\320\276 \320\275\320\260\320\267\321\213\320\262\320\260\321\216\321\202\321\201\321\217 \320\274\320\275\320\276\320\271 - \321\204\320\265\320\271\320\272\320\270!)</span></p>\n"
"<p style=\"-qt-par"
                        "agraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Filling/OtherWindows/writeme/DeD_Game.jpg\" /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\320\225\321\201\320\273\320\270 \320\222\321\213 \320\276\320\261\320\273\320\260\320\264\320\260\320\265\321\202\320\265 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\265\320\271, \320\272\320\260\320\272 \320\262\321\213\321\201\321\207\320\270\321\202\321\213\320\262\320\260\321\202\321\214 \321\200\320\265\321\201\320\277\321"
                        "\213 \320\260\321\200\321\202\320\265\321\204\320\260\320\272\321\202\320\276\320\262 \320\265\321\211\320\265 \321\202\320\276\321\207\320\275\320\265\320\265, \320\270\320\273\320\270 \320\266\320\265 \320\267\320\275\320\260\320\265\321\202\320\265 \321\202\320\260\320\271\320\274\320\270\320\275\320\263\320\270 \320\264\321\200\321\203\320\263\320\270\321\205 \320\260\321\200\321\202\320\276\320\262 - \320\275\320\260\320\277\320\270\321\210\320\270\321\202\320\265, \320\277\320\276\320\266\320\260\320\273\321\203\320\271\321\201\321\202\320\260, \320\274\320\275\320\265. \320\221\321\203\320\264\321\203 \320\276\321\207\320\265\320\275\321\214 \320\277\321\200\320\270\320\267\320\275\320\260\321\202\320\265\320\273\320\265\320\275!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-"
                        "block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\320\243 \320\274\320\275\320\276\320\263\320\270\321\205 \320\274\320\276\320\266\320\265\321\202 \320\262\320\276\320\267\320\275\320\270\320\272\320\275\321\203\321\202\321\214 \320\262\320\276\320\277\321\200\320\276\321\201 : &quot;\320\220 \320\267\320\260\321\207\320\265\320\274 \321\202\320\265\320\261\320\265 \321\215\321\202\320\276 \320\275\320\260\320\264\320\276, \320\224\320\265\320\224_\321\201\320\221\320\265\321\200\320\264\321\217\320\275\320\272\320\276\320\231?&quot; \320\237\321\200\320\276\321\201\321\202\320\276 \320\267\320\260\321\205\320\276\321\202\320\265\320\273 \320\277\321\200\320\270\320\275\320\265\321\201\321\202\320\270 \320\272\320\260\320\272\321\203\321\216-\321\202\320\276 \320\277\320\276\320\273\321\214\320\267\321\203 \321\215\321\202\320\276\320\274\321\203 \320\272\320\276\320\274\321\214\321\216\320\275\320\270\321\202\320\270, \320\262\320\276\321\202 \320\270 \320\262\321\201\320\265.</span></p></"
                        "body></html>", nullptr));
        WriteMePushButton->setText(QApplication::translate("WriteMe", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WriteMe: public Ui_WriteMe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITEME_H
