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
    QTabWidget *tabsCustomer;
    QWidget *tabCOO;
    QTextBrowser *textBrowserCOO;
    QWidget *tabProducts;
    QTextBrowser *textBrowserEnvironments;
    QTabWidget *tabsProduct;
    QWidget *tabSilver;
    QTextBrowser *textSilver;
    QWidget *tabGold;
    QTextBrowser *textGold;
    QWidget *tabDiamond;
    QTextBrowser *textDiamond;
    QTabWidget *tabsPlans;
    QWidget *tabCrab;
    QTextBrowser *textCrab;
    QWidget *tabUnicorn;
    QTextBrowser *textUnicorn;
    QWidget *tabBusinessOutcomes;
    QTextBrowser *textBrowserBusinessOutcomes;
    QWidget *tabReviews;
    QTextBrowser *textBrowserReviews;
    QWidget *tabContact;
    QPushButton *buttonContact;
    QWidget *tabHelp;
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
        tabsCustomer = new QTabWidget(centralwidget);
        tabsCustomer->setObjectName(QString::fromUtf8("tabsCustomer"));
        tabCOO = new QWidget();
        tabCOO->setObjectName(QString::fromUtf8("tabCOO"));
        textBrowserCOO = new QTextBrowser(tabCOO);
        textBrowserCOO->setObjectName(QString::fromUtf8("textBrowserCOO"));
        textBrowserCOO->setGeometry(QRect(10, 70, 871, 191));
        tabsCustomer->addTab(tabCOO, QString());
        tabProducts = new QWidget();
        tabProducts->setObjectName(QString::fromUtf8("tabProducts"));
        textBrowserEnvironments = new QTextBrowser(tabProducts);
        textBrowserEnvironments->setObjectName(QString::fromUtf8("textBrowserEnvironments"));
        textBrowserEnvironments->setGeometry(QRect(10, 10, 871, 91));
        tabsProduct = new QTabWidget(tabProducts);
        tabsProduct->setObjectName(QString::fromUtf8("tabsProduct"));
        tabsProduct->setGeometry(QRect(10, 120, 871, 171));
        tabSilver = new QWidget();
        tabSilver->setObjectName(QString::fromUtf8("tabSilver"));
        textSilver = new QTextBrowser(tabSilver);
        textSilver->setObjectName(QString::fromUtf8("textSilver"));
        textSilver->setGeometry(QRect(10, 10, 841, 121));
        tabsProduct->addTab(tabSilver, QString());
        tabGold = new QWidget();
        tabGold->setObjectName(QString::fromUtf8("tabGold"));
        textGold = new QTextBrowser(tabGold);
        textGold->setObjectName(QString::fromUtf8("textGold"));
        textGold->setGeometry(QRect(10, 10, 841, 121));
        tabsProduct->addTab(tabGold, QString());
        tabDiamond = new QWidget();
        tabDiamond->setObjectName(QString::fromUtf8("tabDiamond"));
        textDiamond = new QTextBrowser(tabDiamond);
        textDiamond->setObjectName(QString::fromUtf8("textDiamond"));
        textDiamond->setGeometry(QRect(10, 10, 841, 121));
        tabsProduct->addTab(tabDiamond, QString());
        tabsPlans = new QTabWidget(tabProducts);
        tabsPlans->setObjectName(QString::fromUtf8("tabsPlans"));
        tabsPlans->setGeometry(QRect(10, 310, 871, 171));
        tabCrab = new QWidget();
        tabCrab->setObjectName(QString::fromUtf8("tabCrab"));
        textCrab = new QTextBrowser(tabCrab);
        textCrab->setObjectName(QString::fromUtf8("textCrab"));
        textCrab->setGeometry(QRect(10, 10, 841, 121));
        tabsPlans->addTab(tabCrab, QString());
        tabUnicorn = new QWidget();
        tabUnicorn->setObjectName(QString::fromUtf8("tabUnicorn"));
        textUnicorn = new QTextBrowser(tabUnicorn);
        textUnicorn->setObjectName(QString::fromUtf8("textUnicorn"));
        textUnicorn->setGeometry(QRect(10, 10, 841, 121));
        tabsPlans->addTab(tabUnicorn, QString());
        tabsCustomer->addTab(tabProducts, QString());
        tabBusinessOutcomes = new QWidget();
        tabBusinessOutcomes->setObjectName(QString::fromUtf8("tabBusinessOutcomes"));
        textBrowserBusinessOutcomes = new QTextBrowser(tabBusinessOutcomes);
        textBrowserBusinessOutcomes->setObjectName(QString::fromUtf8("textBrowserBusinessOutcomes"));
        textBrowserBusinessOutcomes->setGeometry(QRect(0, 0, 891, 581));
        tabsCustomer->addTab(tabBusinessOutcomes, QString());
        tabReviews = new QWidget();
        tabReviews->setObjectName(QString::fromUtf8("tabReviews"));
        textBrowserReviews = new QTextBrowser(tabReviews);
        textBrowserReviews->setObjectName(QString::fromUtf8("textBrowserReviews"));
        textBrowserReviews->setGeometry(QRect(0, 0, 891, 581));
        tabsCustomer->addTab(tabReviews, QString());
        tabContact = new QWidget();
        tabContact->setObjectName(QString::fromUtf8("tabContact"));
        buttonContact = new QPushButton(tabContact);
        buttonContact->setObjectName(QString::fromUtf8("buttonContact"));
        buttonContact->setGeometry(QRect(380, 420, 121, 41));
        tabsCustomer->addTab(tabContact, QString());
        tabHelp = new QWidget();
        tabHelp->setObjectName(QString::fromUtf8("tabHelp"));
        tabsCustomer->addTab(tabHelp, QString());

        horizontalLayout->addWidget(tabsCustomer);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 916, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabsCustomer->setCurrentIndex(1);
        tabsProduct->setCurrentIndex(2);
        tabsPlans->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textBrowserCOO->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">What is iCyberSecurity?<br />iCyberSecurity is a global antivirus platform. With over 17 trillion users worldwide, we are the planet's LEADING antivirus experts. Our goal is to eliminate all viruses that can infect any type of system by using our state of the art cyberantibiotics. By ordering our products, we can guarantee the safety and privacy of your systems anytime, anywhere.</span></p></body></html>", nullptr));
        tabsCustomer->setTabText(tabsCustomer->indexOf(tabCOO), QCoreApplication::translate("MainWindow", "iCyberSecurity", nullptr));
        textBrowserEnvironments->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">iCyberSecurity currently supports these environments:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Windows, MacOS, Linux, WiFi and Bluetooth connections, iOS11, Android, Home Systems, and Amazon Rainforests.</span></p></body></html>", nullptr));
        textSilver->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Silver Protection Plan:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\342\200\242 This package offers 24/7 16GB DDos Protection for servers. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\342\200\242 It comes with our Bonzi Buddy antivirus software.</span></p></body></html>", nullptr));
        tabsProduct->setTabText(tabsProduct->indexOf(tabSilver), QCoreApplication::translate("MainWindow", "Silver", nullptr));
        textGold->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Gold Protection Plan:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\342\200\242 This package offers 24/7 24GB DDos Protection for servers. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\342\200\242 It comes with our Storm Worm antivirus software. </span></p>\n"
"<p style=\" margi"
                        "n-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\342\200\242 Grants Access to our 24/7 overseas tech support. </span></p></body></html>", nullptr));
        tabsProduct->setTabText(tabsProduct->indexOf(tabGold), QCoreApplication::translate("MainWindow", "Gold", nullptr));
        textDiamond->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Diamond: </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\342\200\242 This package offers 24/7 24GB DDos Protection for servers.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\342\200\242 It comes with our ILOVEYOU antivirus software. </span></p>\n"
"<p style=\" margin-top:0px; marg"
                        "in-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\342\200\242 You gain access to our Diamond rank exclusive support. (not overseas)</span></p></body></html>", nullptr));
        tabsProduct->setTabText(tabsProduct->indexOf(tabDiamond), QCoreApplication::translate("MainWindow", "Diamond", nullptr));
        textCrab->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Crab Package:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Lifetime service with 34/8 hours a day live chat support.<br />Crab dinner every other Tuesday delivered to your house.</span></p></body></html>", nullptr));
        tabsPlans->setTabText(tabsPlans->indexOf(tabCrab), QCoreApplication::translate("MainWindow", "Crab Package", nullptr));
        textUnicorn->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Unicorn Plan:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Unlimited service with no regards to time and space. Instanteous service technician digitally transported to your location to diagnose and repair your system.<br />We will ship a Unicorn to your house that you can ride at your leisure.</span></p></body></html>", nullptr));
        tabsPlans->setTabText(tabsPlans->indexOf(tabUnicorn), QCoreApplication::translate("MainWindow", "Unicorn Plan", nullptr));
        tabsCustomer->setTabText(tabsCustomer->indexOf(tabProducts), QCoreApplication::translate("MainWindow", "Products", nullptr));
        textBrowserBusinessOutcomes->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:12pt; color:#24292e; background-color:#ffffff;\">Business Outcomes:</span><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:12pt; color:#24292e;\"><br />\342\200\242 iCyberSecurity offers one of the best and updated cyber security programs available in the world. Our "
                        "24/7 support team is always available if anything goes wrong and is constantly looking for new viruses/threats every day.<br />\342\200\242 Our system is not only fast, it is accurate.<br />\342\200\242 Our system is very complex but can be installed in less than 24 hours to get you up and running while being protected at the same time.<br />Features:<br />\342\200\242 Our system keeps you updated any time any threat is detected<br />\342\200\242 Our system is completely customizable; if you don\342\200\231t like what you see, it\342\200\231s completely open for you to configure<br />\342\200\242 State of the art automatic removal of any threats detected</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:12pt; color:#24292e;\">- Can detect and r"
                        "emove any threats within 500 miliseconds of being installed</span></p></body></html>", nullptr));
        tabsCustomer->setTabText(tabsCustomer->indexOf(tabBusinessOutcomes), QCoreApplication::translate("MainWindow", "Business Outcomes", nullptr));
        textBrowserReviews->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:12pt; color:#24292e; background-color:#ffffff;\">Bob S.</span><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:12pt; color:#24292e;\"><br />8/10/2019<br />Our company has a large IT environment that requires a very reliable security system. iCyberSecurity is constant"
                        "ly updating their systems to oppose new threats and to make the software more easier to use. We have been using iCyberSecurity for years and never had to look back.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:12pt; color:#24292e; background-color:#ffffff;\">Maria H.</span><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:12pt; color:#24292e;\"><br />7/12/2019<br />I have been only using iCyberSecurity for couple of months but I clearly see the difference in my computers performance. They have a cleanup service to remove any unnecessary cache etc. to boost up your computer performance and only once using it I have more space on my dr"
                        "ive and faster performance. There are other free cleanup services that I have also used before but iCyberSecurity constantly updates it to help get rid of any additional stuff and upgrade your computer's environment. I am satisfied with their service and plan to continue using their software.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:12pt; color:#24292e; background-color:#ffffff;\">Karen W.</span><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:12pt; color:#24292e;\"><br />2/20/2019<br />Our computer had recently been attacked by a virus and ended up called iCyberSecurity for help. I am glad we have chosen them because of their 24"
                        "/7 help service and easy to understand instructions by their IT supports. Their fast and reliable support are the best so far from our experience and we love it. Will continue to support them.</span></p></body></html>", nullptr));
        tabsCustomer->setTabText(tabsCustomer->indexOf(tabReviews), QCoreApplication::translate("MainWindow", "Reviews", nullptr));
        buttonContact->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        tabsCustomer->setTabText(tabsCustomer->indexOf(tabContact), QCoreApplication::translate("MainWindow", "Contact Us", nullptr));
        tabsCustomer->setTabText(tabsCustomer->indexOf(tabHelp), QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
