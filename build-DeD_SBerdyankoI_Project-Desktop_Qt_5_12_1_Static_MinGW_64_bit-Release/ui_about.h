/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

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

class Ui_About
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *AboutButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(770, 404);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Filling/Mainwindow/AboutIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        About->setWindowIcon(icon);
        About->setSizeGripEnabled(false);
        About->setModal(false);
        gridLayout = new QGridLayout(About);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser = new QTextBrowser(About);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setOpenExternalLinks(true);

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        AboutButton = new QPushButton(About);
        AboutButton->setObjectName(QString::fromUtf8("AboutButton"));

        horizontalLayout->addWidget(AboutButton);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(About);
        QObject::connect(AboutButton, SIGNAL(clicked()), About, SLOT(close()));

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        textBrowser->setHtml(QApplication::translate("About", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Filling/LogoDB.jpg\" width=\"140\" height=\"100\" /><span style=\" font-size:10pt;\">	</span><span style=\" font-size:10pt; font-weight:600;\">\320\241\321\207\320\265\321\202\321\207\320\270\320\272 \321\202\320\260\320\271\320\274\320\270\320\275\320\263\320\276\320\262 \320\276\321\202 \320\224\320\265\320\224_\321\201\320\221\320\265\321\200\320\264\321\217\320\275\320\272\320\276\320\231</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inde"
                        "nt:0px; font-size:10pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">		ver. 1.0.0.4</span><span style=\" font-size:10pt;\">	</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">		\320\235\320\260\320\277\320\270\321\201\320\260\320\275 \320\275\320\260 Qt (C++). \320\222 \320\264\320\260\320\273\321\214\320\275\320\265\320\271\321\210\320\265\320\274 (\320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276), \320\270\321\201\321\205\320\276\320\264\320\275\321\213\320\265 \321\204\320\260\320\271\320\273\321\213 \320\277\321\200\320\276\320\265\320\272\321"
                        "\202\320\260 \320\261\321\203\320\264\321\203\321\202 \320\267\320\260\320\273\320\270\321\202\321\213 \320\275\320\260</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">		Github \320\270 \320\264\320\276\321\201\321\202\321\203\320\277\320\275\321\213 \320\262\321\201\320\265\320\274, \320\272\320\276\320\263\320\276 \320\267\320\260\320\270\320\275\321\202\320\265\321\200\320\265\321\201\321\203\321\216\321\202		</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">		\320\232\320\276\321\200\320\275\320\265\320\262\320\276\320\271 \321\200\320\265\320\277\320\276\320\267\320\270\321\202\320\276\321\200\320"
                        "\270\320\271 : </span><a href=\"https://yadi.sk/d/wQ0M0Dn03UaSEg\"><span style=\" font-size:10pt; text-decoration: underline; color:#0000ff;\">DeD_SBerdyankoI_Project</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">		\320\237\320\276\321\201\320\273\320\265\320\264\320\275\321\217\321\217 \321\201\320\261\320\276\321\200\320\272\320\260 \320\277\321\200\320\276\320\265\320\272\321\202\320\260 : </span><a href=\"https://yadi.sk/d/oZWkMuRh3UaSF9\"><span style=\" font-size:10pt; text-decoration: underline; color:#0000ff;\">\320\237\320\276\321\201\320\273\320\265\320\264\320\275\321\217\321\217 \320\262\320\265\321\200\321\201\320\270\321\217 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213</s"
                        "pan></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\225\321\201\320\273\320\270 \320\264\320\260\320\275\320\275\321\213\320\271 \321\201\320\276\321\204\321\202 \320\261\321\213\320\273 \320\277\320\276\320\273\320\265\320\267\320\265\320\275 \320\222\320\260\320\274, \320\270 \320\222\321\213 \321\205\320\276\321\202\320\270\321\202\320\265 \320\276\321\202\320\261\320"
                        "\273\320\260\320\263\320\276\320\264\320\260\321\200\320\270\321\202\321\214 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272\320\260 - \320\262\320\276\321\202 \320\274\320\276\320\271 QIWI \320\272\320\276\321\210\320\265\320\273\320\265\320\272 : </span><span style=\" font-size:10pt; font-weight:600;\">8-999-868-43-21</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\230\320\273\320\270 \320\266\320\265 \320\274\320\276\320\266\320\275\320\276 \320\275\320\260\320\271\321\202\320\270 \320\274\320\265\320\275\321\217 \320\262 \320\270\320\263\321\200\320\265 ( \320\275\320\270\320\272\320\275\320\265\320\271\320\274 </span><span style=\" font-size:10pt; font-weight:600;\">\320\224\320\265\320\224_\321\201\320\221\320\265\321\200\320\264\321\217\320\275\320\272\320\276\320\231 - \321\201\320\265\321\200\320\262\320\265\321\200 \320"
                        "\241\320\237\320\221, \320\275\320\260 \320\234\320\241\320\232 \320\274\320\265\320\275\321\217 \320\275\320\265\321\202!!! </span><span style=\" font-size:10pt;\">) \320\270 \320\277\320\276\320\264\320\265\320\273\320\270\321\202\321\214\321\201\321\217 \320\273\321\216\320\261\321\213\320\274\320\270 \320\275\320\270\321\210\321\202\321\217\320\272\320\260\320\274\320\270 (\320\273\321\203\321\207\321\210\320\265 \320\262 \320\262\320\270\320\264\320\265 \320\277\320\276\321\201\321\213\320\273\320\272\320\270).</span></p></body></html>", nullptr));
        AboutButton->setText(QApplication::translate("About", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
