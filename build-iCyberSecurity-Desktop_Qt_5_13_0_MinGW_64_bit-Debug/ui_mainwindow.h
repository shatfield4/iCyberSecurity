/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *Products;
    QTextBrowser *textBrowser_3;
    QWidget *BussinessOutcomes;
    QTextBrowser *textBrowser;
    QWidget *Reviews;
    QTextBrowser *textBrowser_2;
    QWidget *ContactUs;
    QPushButton *SubmitMessage;
    QWidget *help;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(916, 660);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        Products = new QWidget();
        Products->setObjectName(QString::fromUtf8("Products"));
        textBrowser_3 = new QTextBrowser(Products);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(0, 0, 901, 571));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(12);
        textBrowser_3->setFont(font);
        tabWidget->addTab(Products, QString());
        BussinessOutcomes = new QWidget();
        BussinessOutcomes->setObjectName(QString::fromUtf8("BussinessOutcomes"));
        textBrowser = new QTextBrowser(BussinessOutcomes);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 891, 581));
        tabWidget->addTab(BussinessOutcomes, QString());
        Reviews = new QWidget();
        Reviews->setObjectName(QString::fromUtf8("Reviews"));
        textBrowser_2 = new QTextBrowser(Reviews);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(0, 0, 891, 581));
        tabWidget->addTab(Reviews, QString());
        ContactUs = new QWidget();
        ContactUs->setObjectName(QString::fromUtf8("ContactUs"));
        SubmitMessage = new QPushButton(ContactUs);
        SubmitMessage->setObjectName(QString::fromUtf8("SubmitMessage"));
        SubmitMessage->setGeometry(QRect(380, 420, 121, 41));
        tabWidget->addTab(ContactUs, QString());
        help = new QWidget();
        help->setObjectName(QString::fromUtf8("help"));
        tabWidget->addTab(help, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 916, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Comic Sans MS'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Silver rank: This package offers 24/7 16GB DDos Protection for servers. It comes with our Bonzi Buddy antivirus software.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Gold Rank: This package offers 24/7 24GB DDos Protection for servers. It comes with our Storm Worm antivirus software. You can access to our 24/7 overs"
                        "eas tech support.   </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Diamond: This package offers 24/7 24GB DDos Protection for servers. It comes with our ILOVEYOU antivirus software. You gain access to our Diamond rank exclusive support. (not overseas)</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Products), QCoreApplication::translate("MainWindow", "Products", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:12pt; color:#24292e; background-color:#ffffff;\">Business Outcomes:</span><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:12pt; color:#24292e;\"><br />\342\200\242 iCyberSecurity offers one of the best and updated cyber security programs available in the world. Our"
                        " 24/7 support team is always available if anything goes wrong and is constantly looking for new viruses/threats every day.<br />\342\200\242 Our system is not only fast, it is accurate.<br />\342\200\242 Our system is very complex but can be installed in less than 24 hours to get you up and running while being protected at the same time.<br />Features:<br />\342\200\242 Our system keeps you updated any time any threat is detected<br />\342\200\242 Our system is completely customizable; if you don\342\200\231t like what you see, it\342\200\231s completely open for you to configure<br />\342\200\242 State of the art automatic removal of any threats detected</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:12pt; color:#24292e;\">- Can detect and "
                        "remove any threats within 500 miliseconds of being installed</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(BussinessOutcomes), QCoreApplication::translate("MainWindow", "Business Outcomes", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:8pt; color:#24292e; background-color:#ffffff;\">Bob S.</span><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:8pt; color:#24292e;\"><br />8/10/2019<br />Our company has a large IT environment that requires a very reliable security system. iCyberSecurity is constantl"
                        "y updating their systems to oppose new threats and to make the software more easier to use. We have been using iCyberSecurity for years and never had to look back.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:8pt; color:#24292e; background-color:#ffffff;\">Maria H.</span><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:8pt; color:#24292e;\"><br />7/12/2019<br />I have been only using iCyberSecurity for couple of months but I clearly see the difference in my computers performance. They have a cleanup service to remove any unnecessary cache etc. to boost up your computer performance and only once using it I have more space on my drive"
                        " and faster performance. There are other free cleanup services that I have also used before but iCyberSecurity constantly updates it to help get rid of any additional stuff and upgrade your computer's environment. I am satisfied with their service and plan to continue using their software.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:8pt; color:#24292e; background-color:#ffffff;\">Karen W.</span><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:8pt; color:#24292e;\"><br />2/20/2019<br />Our computer had recently been attacked by a virus and ended up called iCyberSecurity for help. I am glad we have chosen them because of their 24/7 he"
                        "lp service and easy to understand instructions by their IT supports. Their fast and reliable support are the best so far from our experience and we love it. Will continue to support them.</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Reviews), QCoreApplication::translate("MainWindow", "Reviews", nullptr));
        SubmitMessage->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ContactUs), QCoreApplication::translate("MainWindow", "Contact Us", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(help), QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
