/********************************************************************************
** Form generated from reading UI file 'adminpage.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPAGE_H
#define UI_ADMINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminPage
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *customerTable;
    QPushButton *pushButton_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *loadCustomerData;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *tabAddCustomer;
    QPushButton *buttonAddCustomer;
    QPushButton *pushButton_5;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditName;
    QLabel *label_2;
    QLineEdit *lineEditAddress;
    QLabel *label_3;
    QLineEdit *lineEdditAddress2;
    QLabel *label_4;
    QComboBox *comboInterest;
    QLabel *label_5;
    QComboBox *comboKey;
    QWidget *tab_2;
    QTableWidget *pamphletTable;
    QPushButton *buttonLoadPamphlets;
    QPushButton *pushButton_4;

    void setupUi(QDialog *AdminPage)
    {
        if (AdminPage->objectName().isEmpty())
            AdminPage->setObjectName(QString::fromUtf8("AdminPage"));
        AdminPage->resize(965, 619);
        tabWidget = new QTabWidget(AdminPage);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 941, 601));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        customerTable = new QTableWidget(tab);
        customerTable->setObjectName(QString::fromUtf8("customerTable"));
        customerTable->setGeometry(QRect(10, 10, 911, 511));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(840, 540, 91, 28));
        QFont font;
        font.setPointSize(12);
        pushButton_3->setFont(font);
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 530, 701, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        loadCustomerData = new QPushButton(widget);
        loadCustomerData->setObjectName(QString::fromUtf8("loadCustomerData"));
        loadCustomerData->setFont(font);

        horizontalLayout->addWidget(loadCustomerData);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        horizontalLayout->addWidget(pushButton_2);

        tabWidget->addTab(tab, QString());
        tabAddCustomer = new QWidget();
        tabAddCustomer->setObjectName(QString::fromUtf8("tabAddCustomer"));
        buttonAddCustomer = new QPushButton(tabAddCustomer);
        buttonAddCustomer->setObjectName(QString::fromUtf8("buttonAddCustomer"));
        buttonAddCustomer->setGeometry(QRect(420, 410, 129, 29));
        buttonAddCustomer->setFont(font);
        pushButton_5 = new QPushButton(tabAddCustomer);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(830, 527, 91, 31));
        pushButton_5->setFont(font);
        widget1 = new QWidget(tabAddCustomer);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(160, 70, 611, 291));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(50);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditName = new QLineEdit(widget1);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setFont(font);

        gridLayout->addWidget(lineEditName, 0, 1, 1, 1);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditAddress = new QLineEdit(widget1);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));
        lineEditAddress->setFont(font);

        gridLayout->addWidget(lineEditAddress, 1, 1, 1, 1);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdditAddress2 = new QLineEdit(widget1);
        lineEdditAddress2->setObjectName(QString::fromUtf8("lineEdditAddress2"));
        lineEdditAddress2->setFont(font);

        gridLayout->addWidget(lineEdditAddress2, 2, 1, 1, 1);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        comboInterest = new QComboBox(widget1);
        comboInterest->addItem(QString());
        comboInterest->addItem(QString());
        comboInterest->addItem(QString());
        comboInterest->addItem(QString());
        comboInterest->addItem(QString());
        comboInterest->setObjectName(QString::fromUtf8("comboInterest"));
        comboInterest->setFont(font);

        gridLayout->addWidget(comboInterest, 3, 1, 1, 1);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        comboKey = new QComboBox(widget1);
        comboKey->addItem(QString());
        comboKey->addItem(QString());
        comboKey->addItem(QString());
        comboKey->setObjectName(QString::fromUtf8("comboKey"));
        comboKey->setFont(font);

        gridLayout->addWidget(comboKey, 4, 1, 1, 1);

        tabWidget->addTab(tabAddCustomer, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pamphletTable = new QTableWidget(tab_2);
        if (pamphletTable->columnCount() < 2)
            pamphletTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        pamphletTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        pamphletTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        pamphletTable->setObjectName(QString::fromUtf8("pamphletTable"));
        pamphletTable->setGeometry(QRect(10, 10, 461, 551));
        pamphletTable->setFont(font);
        pamphletTable->setColumnCount(2);
        buttonLoadPamphlets = new QPushButton(tab_2);
        buttonLoadPamphlets->setObjectName(QString::fromUtf8("buttonLoadPamphlets"));
        buttonLoadPamphlets->setGeometry(QRect(490, 20, 301, 111));
        buttonLoadPamphlets->setFont(font);
        buttonLoadPamphlets->setLayoutDirection(Qt::LeftToRight);
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(872, 540, 51, 28));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(AdminPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminPage);
    } // setupUi

    void retranslateUi(QDialog *AdminPage)
    {
        AdminPage->setWindowTitle(QCoreApplication::translate("AdminPage", "Dialog", nullptr));
        pushButton_3->setText(QCoreApplication::translate("AdminPage", "Help", nullptr));
        loadCustomerData->setText(QCoreApplication::translate("AdminPage", "Load Customer Data From File", nullptr));
        pushButton->setText(QCoreApplication::translate("AdminPage", "Sort By Customer Name", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AdminPage", "Sort By Key", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("AdminPage", "Customer Listing", nullptr));
        buttonAddCustomer->setText(QCoreApplication::translate("AdminPage", "Add Customer", nullptr));
        pushButton_5->setText(QCoreApplication::translate("AdminPage", "Help", nullptr));
        label->setText(QCoreApplication::translate("AdminPage", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("AdminPage", "Address", nullptr));
        label_3->setText(QCoreApplication::translate("AdminPage", "City, State, Zip", nullptr));
        label_4->setText(QCoreApplication::translate("AdminPage", "Interest Levels", nullptr));
        comboInterest->setItemText(0, QString());
        comboInterest->setItemText(1, QCoreApplication::translate("AdminPage", "very interested", nullptr));
        comboInterest->setItemText(2, QCoreApplication::translate("AdminPage", "somewhat interested", nullptr));
        comboInterest->setItemText(3, QCoreApplication::translate("AdminPage", "not interested", nullptr));
        comboInterest->setItemText(4, QCoreApplication::translate("AdminPage", "never call again", nullptr));

        label_5->setText(QCoreApplication::translate("AdminPage", "Key", nullptr));
        comboKey->setItemText(0, QString());
        comboKey->setItemText(1, QCoreApplication::translate("AdminPage", "key", nullptr));
        comboKey->setItemText(2, QCoreApplication::translate("AdminPage", "nice to have", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tabAddCustomer), QCoreApplication::translate("AdminPage", "Add customer", nullptr));
        QTableWidgetItem *___qtablewidgetitem = pamphletTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AdminPage", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = pamphletTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AdminPage", "Email", nullptr));
        buttonLoadPamphlets->setText(QCoreApplication::translate("AdminPage", "Load Pamphlet Submissions", nullptr));
        pushButton_4->setText(QCoreApplication::translate("AdminPage", "Help", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("AdminPage", "Pamphlet Requests", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminPage: public Ui_AdminPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H
