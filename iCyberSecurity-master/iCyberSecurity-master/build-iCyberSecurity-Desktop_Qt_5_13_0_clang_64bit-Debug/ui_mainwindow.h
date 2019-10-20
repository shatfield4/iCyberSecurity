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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *tabBusinessOutcomes;
    QTextBrowser *textBrowserBusinessOutcomes;
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
    QWidget *tabReviews;
    QTextBrowser *textReviews;
    QLabel *labelName;
    QLabel *labelStars;
    QLabel *labelReviews;
    QPlainTextEdit *editName;
    QPlainTextEdit *editStars;
    QPlainTextEdit *editReviews;
    QPushButton *pushSubmit;
    QWidget *tabContact;
    QPushButton *pampletSubmitButton;
    QPlainTextEdit *guranteePolicyText;
    QPlainTextEdit *contactInfoText;
    QPlainTextEdit *pampletSubmitText;
    QLineEdit *pampletNameInput;
    QLineEdit *pampletAddressInput;
    QLabel *pampletNameLabel;
    QLabel *pampletAddressLabel;
    QWidget *tabHelp;
    QWidget *tabAdmin;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *customerTable;
    QPushButton *loadCustomerData;
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
        pushButton = new QPushButton(tabCOO);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 450, 201, 28));
        pushButton_2 = new QPushButton(tabCOO);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 350, 113, 32));
        tabsCustomer->addTab(tabCOO, QString());
        tabBusinessOutcomes = new QWidget();
        tabBusinessOutcomes->setObjectName(QString::fromUtf8("tabBusinessOutcomes"));
        textBrowserBusinessOutcomes = new QTextBrowser(tabBusinessOutcomes);
        textBrowserBusinessOutcomes->setObjectName(QString::fromUtf8("textBrowserBusinessOutcomes"));
        textBrowserBusinessOutcomes->setGeometry(QRect(0, 0, 891, 581));
        tabsCustomer->addTab(tabBusinessOutcomes, QString());
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
        tabReviews = new QWidget();
        tabReviews->setObjectName(QString::fromUtf8("tabReviews"));
        textReviews = new QTextBrowser(tabReviews);
        textReviews->setObjectName(QString::fromUtf8("textReviews"));
        textReviews->setGeometry(QRect(10, 20, 501, 521));
        labelName = new QLabel(tabReviews);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setGeometry(QRect(540, 140, 55, 16));
        labelStars = new QLabel(tabReviews);
        labelStars->setObjectName(QString::fromUtf8("labelStars"));
        labelStars->setGeometry(QRect(540, 200, 55, 16));
        labelReviews = new QLabel(tabReviews);
        labelReviews->setObjectName(QString::fromUtf8("labelReviews"));
        labelReviews->setGeometry(QRect(540, 270, 55, 16));
        editName = new QPlainTextEdit(tabReviews);
        editName->setObjectName(QString::fromUtf8("editName"));
        editName->setGeometry(QRect(610, 140, 191, 31));
        editStars = new QPlainTextEdit(tabReviews);
        editStars->setObjectName(QString::fromUtf8("editStars"));
        editStars->setGeometry(QRect(610, 200, 191, 31));
        editReviews = new QPlainTextEdit(tabReviews);
        editReviews->setObjectName(QString::fromUtf8("editReviews"));
        editReviews->setGeometry(QRect(610, 270, 261, 221));
        pushSubmit = new QPushButton(tabReviews);
        pushSubmit->setObjectName(QString::fromUtf8("pushSubmit"));
        pushSubmit->setGeometry(QRect(700, 510, 93, 28));
        tabsCustomer->addTab(tabReviews, QString());
        tabContact = new QWidget();
        tabContact->setObjectName(QString::fromUtf8("tabContact"));
        pampletSubmitButton = new QPushButton(tabContact);
        pampletSubmitButton->setObjectName(QString::fromUtf8("pampletSubmitButton"));
        pampletSubmitButton->setGeometry(QRect(540, 500, 121, 41));
        guranteePolicyText = new QPlainTextEdit(tabContact);
        guranteePolicyText->setObjectName(QString::fromUtf8("guranteePolicyText"));
        guranteePolicyText->setGeometry(QRect(10, 10, 861, 271));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        guranteePolicyText->setFont(font);
        contactInfoText = new QPlainTextEdit(tabContact);
        contactInfoText->setObjectName(QString::fromUtf8("contactInfoText"));
        contactInfoText->setGeometry(QRect(13, 296, 321, 261));
        contactInfoText->setFont(font);
        pampletSubmitText = new QPlainTextEdit(tabContact);
        pampletSubmitText->setObjectName(QString::fromUtf8("pampletSubmitText"));
        pampletSubmitText->setGeometry(QRect(350, 300, 521, 61));
        pampletSubmitText->setFont(font);
        pampletNameInput = new QLineEdit(tabContact);
        pampletNameInput->setObjectName(QString::fromUtf8("pampletNameInput"));
        pampletNameInput->setGeometry(QRect(520, 390, 321, 31));
        pampletNameInput->setFont(font);
        pampletAddressInput = new QLineEdit(tabContact);
        pampletAddressInput->setObjectName(QString::fromUtf8("pampletAddressInput"));
        pampletAddressInput->setGeometry(QRect(520, 450, 321, 31));
        pampletAddressInput->setFont(font);
        pampletNameLabel = new QLabel(tabContact);
        pampletNameLabel->setObjectName(QString::fromUtf8("pampletNameLabel"));
        pampletNameLabel->setGeometry(QRect(440, 390, 61, 21));
        pampletNameLabel->setFont(font);
        pampletAddressLabel = new QLabel(tabContact);
        pampletAddressLabel->setObjectName(QString::fromUtf8("pampletAddressLabel"));
        pampletAddressLabel->setGeometry(QRect(370, 450, 131, 21));
        pampletAddressLabel->setFont(font);
        tabsCustomer->addTab(tabContact, QString());
        tabHelp = new QWidget();
        tabHelp->setObjectName(QString::fromUtf8("tabHelp"));
        tabsCustomer->addTab(tabHelp, QString());
        tabAdmin = new QWidget();
        tabAdmin->setObjectName(QString::fromUtf8("tabAdmin"));
        layoutWidget = new QWidget(tabAdmin);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 881, 561));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        customerTable = new QTableWidget(layoutWidget);
        customerTable->setObjectName(QString::fromUtf8("customerTable"));

        verticalLayout->addWidget(customerTable);

        loadCustomerData = new QPushButton(layoutWidget);
        loadCustomerData->setObjectName(QString::fromUtf8("loadCustomerData"));

        verticalLayout->addWidget(loadCustomerData);

        tabsCustomer->addTab(tabAdmin, QString());

        horizontalLayout->addWidget(tabsCustomer);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 916, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabsCustomer->setCurrentIndex(0);
        tabsProduct->setCurrentIndex(0);
        tabsPlans->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textBrowserCOO->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt;\">What is iCyberSecurity?<br />iCyberSecurity is a global antivirus platform. With over 17 trillion users worldwide, we are the planet's LEADING antivirus experts. Our goal is to eliminate all viruses that can infect any type of system by using our state of the art cyberantibiotics. By ordering our products, we can guarantee the safety and privacy of your systems anytime, anywhere.</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "TempPurchasingPage", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        tabsCustomer->setTabText(tabsCustomer->indexOf(tabCOO), QCoreApplication::translate("MainWindow", "iCyberSecurity", nullptr));
        textBrowserBusinessOutcomes->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:12pt; color:#24292e; background-color:#ffffff;\">Business Outcomes:</span><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:12pt; color:#24292e;\"><br />\342\200\242 iCyberSecurity offers one of the best and updated cyber security programs available in the world. Our 24/7"
                        " support team is always available if anything goes wrong and is constantly looking for new viruses/threats every day.<br />\342\200\242 Our system is not only fast, it is accurate.<br />\342\200\242 Our system is very complex but can be installed in less than 24 hours to get you up and running while being protected at the same time.<br />Features:<br />\342\200\242 Our system keeps you updated any time any threat is detected<br />\342\200\242 Our system is completely customizable; if you don\342\200\231t like what you see, it\342\200\231s completely open for you to configure<br />\342\200\242 State of the art automatic removal of any threats detected</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol'; font-size:12pt; color:#24292e;\">- Can detect and remov"
                        "e any threats within 500 miliseconds of being installed</span></p></body></html>", nullptr));
        tabsCustomer->setTabText(tabsCustomer->indexOf(tabBusinessOutcomes), QCoreApplication::translate("MainWindow", "Business Outcomes", nullptr));
        textBrowserEnvironments->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">iCyberSecurity currently supports these environments:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">Windows, MacOS, Linux, WiFi and Bluetooth connections, iOS11, Android, Home Systems, and Amazon Rainforests.</span></p></body></html>", nullptr));
        textSilver->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">Silver Protection Plan:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">\342\200\242 This package offers 24/7 16GB DDos Protection for servers. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">\342\200"
                        "\242 It comes with our Bonzi Buddy antivirus software.</span></p></body></html>", nullptr));
        tabsProduct->setTabText(tabsProduct->indexOf(tabSilver), QCoreApplication::translate("MainWindow", "Silver", nullptr));
        textGold->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">Gold Protection Plan:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">\342\200\242 This package offers 24/7 24GB DDos Protection for servers. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">\342\200\242"
                        " It comes with our Storm Worm antivirus software. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">\342\200\242 Grants Access to our 24/7 overseas tech support. </span></p></body></html>", nullptr));
        tabsProduct->setTabText(tabsProduct->indexOf(tabGold), QCoreApplication::translate("MainWindow", "Gold", nullptr));
        textDiamond->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">Diamond Protection Plan: </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">\342\200\242 This package offers 24/7 24GB DDos Protection for servers.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">\342\200"
                        "\242 It comes with our ILOVEYOU antivirus software. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">\342\200\242 You gain access to our Diamond rank exclusive support. (not overseas)</span></p></body></html>", nullptr));
        tabsProduct->setTabText(tabsProduct->indexOf(tabDiamond), QCoreApplication::translate("MainWindow", "Diamond", nullptr));
        textCrab->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">Crab Package:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">Lifetime service with 34/8 hours a day live chat support.<br />Crab dinner every other Tuesday delivered to your house.</span></p></body></html>", nullptr));
        tabsPlans->setTabText(tabsPlans->indexOf(tabCrab), QCoreApplication::translate("MainWindow", "Crab Package", nullptr));
        textUnicorn->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">Unicorn Plan:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">Unlimited service with no regards to time and space. Instanteous service technician digitally transported to your location to diagnose and repair your system.<br />We will ship a Unicorn to your house that you can ride at your leisure.</span></p></body></html>", nullptr));
        tabsPlans->setTabText(tabsPlans->indexOf(tabUnicorn), QCoreApplication::translate("MainWindow", "Unicorn Plan", nullptr));
        tabsCustomer->setTabText(tabsCustomer->indexOf(tabProducts), QCoreApplication::translate("MainWindow", "Products", nullptr));
        labelName->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        labelStars->setText(QCoreApplication::translate("MainWindow", "Stars", nullptr));
        labelReviews->setText(QCoreApplication::translate("MainWindow", "Review", nullptr));
        pushSubmit->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        tabsCustomer->setTabText(tabsCustomer->indexOf(tabReviews), QCoreApplication::translate("MainWindow", "Reviews", nullptr));
        pampletSubmitButton->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        guranteePolicyText->setPlainText(QCoreApplication::translate("MainWindow", "Gurantee Policy\n"
"\n"
"All of iCyberSecurity products have an unconditional 60 day money back guarantee. If for any reason within this timeframe you would like to return the product, you will receive a full refund of the purchase price. Please note that refund process may take up to approximately 6 to 8 weeks in total.\n"
"\n"
"If you have purchased your order from our site, you have 60 days to cancel your order from your purchase date. To request your order to be cancelled, please go to the myorders.com/iCyberSecurity page and fill out your form there. \n"
"\n"
"We will need the following information to find your order.\n"
"\n"
"-order number\n"
"-last 4 digits of your credit card you used to make the purchase\n"
"\n"
"Once you have found your order, click on the return product tab and fill in the form. After you have submitted your request, it will take approximately up to 2-3 weeks to have it accepted. Once accepted, please allow us another 3-4 weeks to refund your amount to the same card you have used to"
                        " make the original order. If your card is not avaliable, we will contact you for a complete postal mail address to send you a check instead of your card.", nullptr));
        contactInfoText->setPlainText(QCoreApplication::translate("MainWindow", "Contact Information\n"
"\n"
"Billing Address\n"
"8456 Central Ave\n"
"Queensland, NY 11735\n"
"\n"
"Call Us                  Support\n"
"(516) 714-2800     (516) 719-2701", nullptr));
        pampletSubmitText->setPlainText(QCoreApplication::translate("MainWindow", "To request a copy of our online pamphlet please fill out the form below and click submit.", nullptr));
        pampletNameInput->setText(QString());
        pampletAddressInput->setText(QString());
        pampletNameLabel->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        pampletAddressLabel->setText(QCoreApplication::translate("MainWindow", "Email Address", nullptr));
        tabsCustomer->setTabText(tabsCustomer->indexOf(tabContact), QCoreApplication::translate("MainWindow", "Contact Us", nullptr));
        tabsCustomer->setTabText(tabsCustomer->indexOf(tabHelp), QCoreApplication::translate("MainWindow", "Help", nullptr));
        loadCustomerData->setText(QCoreApplication::translate("MainWindow", "Load Customer Data", nullptr));
        tabsCustomer->setTabText(tabsCustomer->indexOf(tabAdmin), QCoreApplication::translate("MainWindow", "Admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
