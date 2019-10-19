/********************************************************************************
** Form generated from reading UI file 'purchasingpage.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASINGPAGE_H
#define UI_PURCHASINGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_purchasingPage
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_protectionPlan;
    QLabel *label_3;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QCheckBox *checkBox_4;
    QLabel *label_8;
    QCheckBox *checkBox_5;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_25;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QWidget *widget2;
    QGridLayout *gridLayout_3;
    QLabel *label_14;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_13;
    QComboBox *comboBox;
    QLabel *label_12;
    QLabel *label_11;
    QWidget *widget3;
    QGridLayout *gridLayout_4;
    QLabel *label_19;
    QLabel *label_17;
    QLabel *label_20;
    QLabel *label_15;
    QLabel *label_22;
    QLabel *label_21;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_16;
    QLabel *label_9;
    QLabel *label_18;

    void setupUi(QDialog *purchasingPage)
    {
        if (purchasingPage->objectName().isEmpty())
            purchasingPage->setObjectName(QString::fromUtf8("purchasingPage"));
        purchasingPage->resize(1257, 795);
        purchasingPage->setLayoutDirection(Qt::LeftToRight);
        buttonBox = new QDialogButtonBox(purchasingPage);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(490, 720, 201, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(purchasingPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(500, 20, 291, 42));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        label_protectionPlan = new QLabel(purchasingPage);
        label_protectionPlan->setObjectName(QString::fromUtf8("label_protectionPlan"));
        label_protectionPlan->setGeometry(QRect(10, 90, 361, 31));
        QFont font1;
        font1.setPointSize(18);
        label_protectionPlan->setFont(font1);
        label_3 = new QLabel(purchasingPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 470, 191, 31));
        label_3->setFont(font1);
        widget = new QWidget(purchasingPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 520, 721, 131));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(100);
        gridLayout_2->setVerticalSpacing(10);
        gridLayout_2->setContentsMargins(10, 10, 10, 10);
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font2;
        font2.setPointSize(12);
        label_7->setFont(font2);

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        checkBox_4 = new QCheckBox(widget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        gridLayout_2->addWidget(checkBox_4, 0, 1, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font2);

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        checkBox_5 = new QCheckBox(widget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        gridLayout_2->addWidget(checkBox_5, 1, 1, 1, 1);

        label_2 = new QLabel(purchasingPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(960, 470, 96, 30));
        label_2->setFont(font1);
        label_10 = new QLabel(purchasingPage);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(910, 90, 177, 30));
        label_10->setFont(font1);
        label_25 = new QLabel(purchasingPage);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(40, 710, 405, 40));
        label_25->setFont(font2);
        widget1 = new QWidget(purchasingPage);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 140, 721, 301));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(30);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        checkBox = new QCheckBox(widget1);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        QFont font3;
        font3.setPointSize(12);
        font3.setUnderline(false);
        checkBox->setFont(font3);
        checkBox->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(checkBox, 0, 1, 1, 1);

        checkBox_2 = new QCheckBox(widget1);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setFont(font2);

        gridLayout->addWidget(checkBox_2, 1, 1, 1, 1);

        checkBox_3 = new QCheckBox(widget1);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setFont(font2);

        gridLayout->addWidget(checkBox_3, 2, 1, 1, 1);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        widget2 = new QWidget(purchasingPage);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(780, 140, 461, 291));
        gridLayout_3 = new QGridLayout(widget2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(widget2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QFont font4;
        font4.setPointSize(11);
        label_14->setFont(font4);

        gridLayout_3->addWidget(label_14, 4, 0, 1, 1);

        lineEdit = new QLineEdit(widget2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font5;
        font5.setPointSize(10);
        lineEdit->setFont(font5);

        gridLayout_3->addWidget(lineEdit, 3, 1, 1, 1);

        lineEdit_2 = new QLineEdit(widget2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font5);

        gridLayout_3->addWidget(lineEdit_2, 4, 1, 1, 1);

        label_13 = new QLabel(widget2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font4);

        gridLayout_3->addWidget(label_13, 3, 0, 1, 1);

        comboBox = new QComboBox(widget2);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font5);

        gridLayout_3->addWidget(comboBox, 1, 1, 1, 1);

        label_12 = new QLabel(widget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font4);

        gridLayout_3->addWidget(label_12, 2, 0, 1, 2);

        label_11 = new QLabel(widget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font4);

        gridLayout_3->addWidget(label_11, 0, 0, 1, 2);

        widget3 = new QWidget(purchasingPage);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(810, 530, 401, 211));
        gridLayout_4 = new QGridLayout(widget3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(widget3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font2);

        gridLayout_4->addWidget(label_19, 2, 1, 1, 1);

        label_17 = new QLabel(widget3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font2);

        gridLayout_4->addWidget(label_17, 3, 0, 1, 1);

        label_20 = new QLabel(widget3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font2);

        gridLayout_4->addWidget(label_20, 3, 1, 1, 1);

        label_15 = new QLabel(widget3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font2);

        gridLayout_4->addWidget(label_15, 4, 0, 1, 1);

        label_22 = new QLabel(widget3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font2);

        gridLayout_4->addWidget(label_22, 4, 1, 1, 1);

        label_21 = new QLabel(widget3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font2);

        gridLayout_4->addWidget(label_21, 5, 0, 1, 1);

        label_26 = new QLabel(widget3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFont(font2);

        gridLayout_4->addWidget(label_26, 5, 1, 1, 1);

        label_27 = new QLabel(widget3);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        QFont font6;
        font6.setPointSize(2);
        label_27->setFont(font6);

        gridLayout_4->addWidget(label_27, 6, 0, 1, 1);

        label_23 = new QLabel(widget3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font2);

        gridLayout_4->addWidget(label_23, 7, 0, 1, 1);

        label_24 = new QLabel(widget3);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font2);

        gridLayout_4->addWidget(label_24, 7, 1, 1, 1);

        label_16 = new QLabel(widget3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font2);

        gridLayout_4->addWidget(label_16, 2, 0, 1, 1);

        label_9 = new QLabel(widget3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        label_18 = new QLabel(widget3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font2);

        gridLayout_4->addWidget(label_18, 1, 1, 1, 1);


        retranslateUi(purchasingPage);
        QObject::connect(buttonBox, SIGNAL(accepted()), purchasingPage, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), purchasingPage, SLOT(reject()));

        QMetaObject::connectSlotsByName(purchasingPage);
    } // setupUi

    void retranslateUi(QDialog *purchasingPage)
    {
        purchasingPage->setWindowTitle(QCoreApplication::translate("purchasingPage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("purchasingPage", "Purchasing Page", nullptr));
        label_protectionPlan->setText(QCoreApplication::translate("purchasingPage", "Service/Protection Plans", nullptr));
        label_3->setText(QCoreApplication::translate("purchasingPage", "Maintance Plan", nullptr));
        label_7->setText(QCoreApplication::translate("purchasingPage", "rgsers", nullptr));
        checkBox_4->setText(QCoreApplication::translate("purchasingPage", "$50", nullptr));
        label_8->setText(QCoreApplication::translate("purchasingPage", "TextLabel", nullptr));
        checkBox_5->setText(QCoreApplication::translate("purchasingPage", "$80", nullptr));
        label_2->setText(QCoreApplication::translate("purchasingPage", "Reciept", nullptr));
        label_10->setText(QCoreApplication::translate("purchasingPage", "Customer Info", nullptr));
        label_25->setText(QCoreApplication::translate("purchasingPage", "If all information is correct please click OK.\n"
"If you would like to cancel the order click Cancel", nullptr));
        checkBox->setText(QCoreApplication::translate("purchasingPage", "$100", nullptr));
        checkBox_2->setText(QCoreApplication::translate("purchasingPage", "$200", nullptr));
        checkBox_3->setText(QCoreApplication::translate("purchasingPage", "$300", nullptr));
        label_6->setText(QCoreApplication::translate("purchasingPage", "Diamond Protection Plan: \n"
"\342\200\242 This package offers 24/7 24GB DDos Protection for servers.\n"
"\342\200\242 It comes with our ILOVEYOU antivirus software. \n"
"\342\200\242 You gain access to our Diamond rank exclusive support. (not overseas)", nullptr));
        label_5->setText(QCoreApplication::translate("purchasingPage", "Gold Protection Plan:\n"
"\342\200\242 This package offers 24/7 24GB DDos Protection for servers. \n"
"\342\200\242 It comes with our Storm Worm antivirus software. \n"
"\342\200\242 Grants Access to our 24/7 overseas tech support. ", nullptr));
        label_4->setText(QCoreApplication::translate("purchasingPage", "Silver Protection Plan:\n"
"\342\200\242 This package offers 24/7 16GB DDos Protection for servers. \n"
"\342\200\242 It comes with our Bonzi Buddy antivirus software.", nullptr));
        label_14->setText(QCoreApplication::translate("purchasingPage", "Address:", nullptr));
        lineEdit_2->setText(QString());
        label_13->setText(QCoreApplication::translate("purchasingPage", "Name:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("purchasingPage", "Not Selected", nullptr));

        label_12->setText(QCoreApplication::translate("purchasingPage", "New Customers (Please fill in information below)", nullptr));
        label_11->setText(QCoreApplication::translate("purchasingPage", "Existing Customer (Please select from drop down)", nullptr));
        label_19->setText(QCoreApplication::translate("purchasingPage", "TextLabel", nullptr));
        label_17->setText(QCoreApplication::translate("purchasingPage", "Diamond", nullptr));
        label_20->setText(QCoreApplication::translate("purchasingPage", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("purchasingPage", "Crab", nullptr));
        label_22->setText(QCoreApplication::translate("purchasingPage", "TextLabel", nullptr));
        label_21->setText(QCoreApplication::translate("purchasingPage", "Unicorn", nullptr));
        label_26->setText(QCoreApplication::translate("purchasingPage", "TextLabel", nullptr));
        label_27->setText(QString());
        label_23->setText(QCoreApplication::translate("purchasingPage", "Grand  Total:", nullptr));
        label_24->setText(QCoreApplication::translate("purchasingPage", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("purchasingPage", "Gold", nullptr));
        label_9->setText(QCoreApplication::translate("purchasingPage", "Silver", nullptr));
        label_18->setText(QCoreApplication::translate("purchasingPage", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class purchasingPage: public Ui_purchasingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASINGPAGE_H
