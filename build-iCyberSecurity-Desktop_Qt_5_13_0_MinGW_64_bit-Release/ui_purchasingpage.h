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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_purchasingPage
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_protectionPlan;
    QLabel *maintancePlanTitle;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QCheckBox *checkBoxCrab;
    QLabel *label_8;
    QCheckBox *checkBoxUnicorn;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_25;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QCheckBox *checkBoxSilver;
    QCheckBox *checkBoxGold;
    QCheckBox *checkBoxDiamond;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QLabel *label_12;
    QLabel *label_11;
    QComboBox *existingComboBox;
    QLineEdit *lineEdit_2;
    QLabel *label_28;
    QLineEdit *lineEdit;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_4;
    QLabel *totalPrice;
    QLabel *silverPrice;
    QLabel *unicornPrice;
    QLabel *label_21;
    QLabel *label_23;
    QLabel *crabPrice;
    QLabel *label_16;
    QLabel *diamondPrice;
    QLabel *goldPrice;
    QLabel *label_15;
    QLabel *label_9;
    QLabel *label_17;
    QLabel *subtotalPrice;
    QLabel *label_22;

    void setupUi(QDialog *purchasingPage)
    {
        if (purchasingPage->objectName().isEmpty())
            purchasingPage->setObjectName(QString::fromUtf8("purchasingPage"));
        purchasingPage->resize(1267, 805);
        purchasingPage->setLayoutDirection(Qt::LeftToRight);
        buttonBox = new QDialogButtonBox(purchasingPage);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(490, 750, 201, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(purchasingPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(490, 20, 291, 42));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        label_protectionPlan = new QLabel(purchasingPage);
        label_protectionPlan->setObjectName(QString::fromUtf8("label_protectionPlan"));
        label_protectionPlan->setGeometry(QRect(10, 90, 361, 31));
        QFont font1;
        font1.setPointSize(18);
        label_protectionPlan->setFont(font1);
        maintancePlanTitle = new QLabel(purchasingPage);
        maintancePlanTitle->setObjectName(QString::fromUtf8("maintancePlanTitle"));
        maintancePlanTitle->setGeometry(QRect(10, 480, 211, 31));
        maintancePlanTitle->setFont(font1);
        layoutWidget = new QWidget(purchasingPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 520, 762, 190));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(50);
        gridLayout_2->setVerticalSpacing(10);
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font2;
        font2.setPointSize(12);
        label_7->setFont(font2);

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        checkBoxCrab = new QCheckBox(layoutWidget);
        checkBoxCrab->setObjectName(QString::fromUtf8("checkBoxCrab"));
        checkBoxCrab->setFont(font2);

        gridLayout_2->addWidget(checkBoxCrab, 0, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font2);

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        checkBoxUnicorn = new QCheckBox(layoutWidget);
        checkBoxUnicorn->setObjectName(QString::fromUtf8("checkBoxUnicorn"));
        checkBoxUnicorn->setFont(font2);

        gridLayout_2->addWidget(checkBoxUnicorn, 1, 1, 1, 1);

        label_2 = new QLabel(purchasingPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(990, 480, 101, 30));
        label_2->setFont(font1);
        label_10 = new QLabel(purchasingPage);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(940, 90, 177, 30));
        label_10->setFont(font1);
        label_25 = new QLabel(purchasingPage);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(21, 740, 441, 51));
        label_25->setFont(font2);
        pushButton = new QPushButton(purchasingPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 20, 81, 31));
        QFont font3;
        font3.setPointSize(13);
        pushButton->setFont(font3);
        layoutWidget1 = new QWidget(purchasingPage);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 140, 760, 301));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(30);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        checkBoxSilver = new QCheckBox(layoutWidget1);
        checkBoxSilver->setObjectName(QString::fromUtf8("checkBoxSilver"));
        QFont font4;
        font4.setPointSize(12);
        font4.setUnderline(false);
        checkBoxSilver->setFont(font4);
        checkBoxSilver->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(checkBoxSilver, 0, 1, 1, 1);

        checkBoxGold = new QCheckBox(layoutWidget1);
        checkBoxGold->setObjectName(QString::fromUtf8("checkBoxGold"));
        checkBoxGold->setFont(font2);

        gridLayout->addWidget(checkBoxGold, 1, 1, 1, 1);

        checkBoxDiamond = new QCheckBox(layoutWidget1);
        checkBoxDiamond->setObjectName(QString::fromUtf8("checkBoxDiamond"));
        checkBoxDiamond->setFont(font2);

        gridLayout->addWidget(checkBoxDiamond, 2, 1, 1, 1);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        layoutWidget2 = new QWidget(purchasingPage);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(790, 140, 461, 291));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font5;
        font5.setPointSize(11);
        label_12->setFont(font5);

        gridLayout_3->addWidget(label_12, 4, 0, 1, 3);

        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font5);

        gridLayout_3->addWidget(label_11, 0, 0, 1, 3);

        existingComboBox = new QComboBox(layoutWidget2);
        existingComboBox->setObjectName(QString::fromUtf8("existingComboBox"));
        QFont font6;
        font6.setPointSize(10);
        existingComboBox->setFont(font6);

        gridLayout_3->addWidget(existingComboBox, 1, 0, 1, 3);

        lineEdit_2 = new QLineEdit(layoutWidget2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font6);

        gridLayout_3->addWidget(lineEdit_2, 6, 2, 1, 1);

        label_28 = new QLabel(layoutWidget2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setFont(font5);

        gridLayout_3->addWidget(label_28, 7, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font6);

        gridLayout_3->addWidget(lineEdit, 5, 2, 1, 1);

        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font5);

        gridLayout_3->addWidget(label_13, 5, 0, 1, 1);

        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font5);

        gridLayout_3->addWidget(label_14, 6, 0, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setFont(font6);

        gridLayout_3->addWidget(lineEdit_3, 7, 2, 1, 1);

        layoutWidget3 = new QWidget(purchasingPage);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(830, 520, 401, 211));
        gridLayout_4 = new QGridLayout(layoutWidget3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        totalPrice = new QLabel(layoutWidget3);
        totalPrice->setObjectName(QString::fromUtf8("totalPrice"));
        totalPrice->setFont(font2);

        gridLayout_4->addWidget(totalPrice, 10, 1, 1, 1);

        silverPrice = new QLabel(layoutWidget3);
        silverPrice->setObjectName(QString::fromUtf8("silverPrice"));
        silverPrice->setFont(font2);

        gridLayout_4->addWidget(silverPrice, 1, 1, 1, 1);

        unicornPrice = new QLabel(layoutWidget3);
        unicornPrice->setObjectName(QString::fromUtf8("unicornPrice"));
        unicornPrice->setFont(font2);

        gridLayout_4->addWidget(unicornPrice, 5, 1, 1, 1);

        label_21 = new QLabel(layoutWidget3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font2);

        gridLayout_4->addWidget(label_21, 5, 0, 1, 1);

        label_23 = new QLabel(layoutWidget3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font2);

        gridLayout_4->addWidget(label_23, 10, 0, 1, 1);

        crabPrice = new QLabel(layoutWidget3);
        crabPrice->setObjectName(QString::fromUtf8("crabPrice"));
        crabPrice->setFont(font2);

        gridLayout_4->addWidget(crabPrice, 4, 1, 1, 1);

        label_16 = new QLabel(layoutWidget3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font2);

        gridLayout_4->addWidget(label_16, 2, 0, 1, 1);

        diamondPrice = new QLabel(layoutWidget3);
        diamondPrice->setObjectName(QString::fromUtf8("diamondPrice"));
        diamondPrice->setFont(font2);

        gridLayout_4->addWidget(diamondPrice, 3, 1, 1, 1);

        goldPrice = new QLabel(layoutWidget3);
        goldPrice->setObjectName(QString::fromUtf8("goldPrice"));
        goldPrice->setFont(font2);

        gridLayout_4->addWidget(goldPrice, 2, 1, 1, 1);

        label_15 = new QLabel(layoutWidget3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font2);

        gridLayout_4->addWidget(label_15, 4, 0, 1, 1);

        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        label_17 = new QLabel(layoutWidget3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font2);

        gridLayout_4->addWidget(label_17, 3, 0, 1, 1);

        subtotalPrice = new QLabel(layoutWidget3);
        subtotalPrice->setObjectName(QString::fromUtf8("subtotalPrice"));
        subtotalPrice->setFont(font2);

        gridLayout_4->addWidget(subtotalPrice, 8, 1, 1, 1);

        label_22 = new QLabel(layoutWidget3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font2);

        gridLayout_4->addWidget(label_22, 8, 0, 1, 1);


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
        maintancePlanTitle->setText(QCoreApplication::translate("purchasingPage", "Maintance Plan", nullptr));
        label_7->setText(QCoreApplication::translate("purchasingPage", "Crab Plan\n"
"Lifetime service with 34/8 hours a day live chat support.\n"
"Crab dinner every other Tuesday delivered to your house.", nullptr));
        checkBoxCrab->setText(QCoreApplication::translate("purchasingPage", "$50", nullptr));
        label_8->setText(QCoreApplication::translate("purchasingPage", "Unicorn Plan\n"
"Unlimited service with no regards to time and space.\n"
"Instanteous service technician digitally transported to your location to\n"
"diagnose and repair your system.\n"
"We will ship a Unicorn to your house that you can ride at your leisure.", nullptr));
        checkBoxUnicorn->setText(QCoreApplication::translate("purchasingPage", "$80", nullptr));
        label_2->setText(QCoreApplication::translate("purchasingPage", "Reciept", nullptr));
        label_10->setText(QCoreApplication::translate("purchasingPage", "Customer Info", nullptr));
        label_25->setText(QCoreApplication::translate("purchasingPage", "If all information is correct please click OK.\n"
"If you would like to cancel the order click CANCEL", nullptr));
        pushButton->setText(QCoreApplication::translate("purchasingPage", "Help", nullptr));
        checkBoxSilver->setText(QCoreApplication::translate("purchasingPage", "$100", nullptr));
        checkBoxGold->setText(QCoreApplication::translate("purchasingPage", "$200", nullptr));
        checkBoxDiamond->setText(QCoreApplication::translate("purchasingPage", "$300", nullptr));
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
        label_12->setText(QCoreApplication::translate("purchasingPage", "New Customers (Please fill in information below)", nullptr));
        label_11->setText(QCoreApplication::translate("purchasingPage", "Existing Customer (Please select from drop down)", nullptr));
        lineEdit_2->setText(QString());
        label_28->setText(QCoreApplication::translate("purchasingPage", "Address 2:", nullptr));
        label_13->setText(QCoreApplication::translate("purchasingPage", "Name:", nullptr));
        label_14->setText(QCoreApplication::translate("purchasingPage", "Address 1:", nullptr));
        lineEdit_3->setText(QString());
        totalPrice->setText(QCoreApplication::translate("purchasingPage", "0", nullptr));
        silverPrice->setText(QCoreApplication::translate("purchasingPage", "0", nullptr));
        unicornPrice->setText(QCoreApplication::translate("purchasingPage", "0", nullptr));
        label_21->setText(QCoreApplication::translate("purchasingPage", "Unicorn", nullptr));
        label_23->setText(QCoreApplication::translate("purchasingPage", "Grand  Total:", nullptr));
        crabPrice->setText(QCoreApplication::translate("purchasingPage", "0", nullptr));
        label_16->setText(QCoreApplication::translate("purchasingPage", "Gold", nullptr));
        diamondPrice->setText(QCoreApplication::translate("purchasingPage", "0", nullptr));
        goldPrice->setText(QCoreApplication::translate("purchasingPage", "0", nullptr));
        label_15->setText(QCoreApplication::translate("purchasingPage", "Crab", nullptr));
        label_9->setText(QCoreApplication::translate("purchasingPage", "Silver", nullptr));
        label_17->setText(QCoreApplication::translate("purchasingPage", "Diamond", nullptr));
        subtotalPrice->setText(QCoreApplication::translate("purchasingPage", "0", nullptr));
        label_22->setText(QCoreApplication::translate("purchasingPage", "Subtotal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class purchasingPage: public Ui_purchasingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASINGPAGE_H
