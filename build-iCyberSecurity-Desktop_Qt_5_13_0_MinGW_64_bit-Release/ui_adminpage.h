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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
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
    QPushButton *pushButton_2;
    QPushButton *loadCustomerData;
    QTableWidget *customerTable;
    QPushButton *pushButton;
    QWidget *tab_2;
    QTableWidget *pamphletTable;
    QPushButton *buttonLoadPamphlets;

    void setupUi(QDialog *AdminPage)
    {
        if (AdminPage->objectName().isEmpty())
            AdminPage->setObjectName(QString::fromUtf8("AdminPage"));
        AdminPage->resize(965, 619);
        tabWidget = new QTabWidget(AdminPage);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 941, 601));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(490, 540, 171, 23));
        loadCustomerData = new QPushButton(tab);
        loadCustomerData->setObjectName(QString::fromUtf8("loadCustomerData"));
        loadCustomerData->setGeometry(QRect(20, 540, 241, 23));
        customerTable = new QTableWidget(tab);
        customerTable->setObjectName(QString::fromUtf8("customerTable"));
        customerTable->setGeometry(QRect(10, 10, 911, 511));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 540, 171, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pamphletTable = new QTableWidget(tab_2);
        if (pamphletTable->columnCount() < 2)
            pamphletTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        pamphletTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        pamphletTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        pamphletTable->setObjectName(QString::fromUtf8("pamphletTable"));
        pamphletTable->setGeometry(QRect(10, 10, 281, 551));
        pamphletTable->setColumnCount(2);
        buttonLoadPamphlets = new QPushButton(tab_2);
        buttonLoadPamphlets->setObjectName(QString::fromUtf8("buttonLoadPamphlets"));
        buttonLoadPamphlets->setGeometry(QRect(310, 20, 201, 101));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(AdminPage);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AdminPage);
    } // setupUi

    void retranslateUi(QDialog *AdminPage)
    {
        AdminPage->setWindowTitle(QCoreApplication::translate("AdminPage", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AdminPage", "Sort By Key", nullptr));
        loadCustomerData->setText(QCoreApplication::translate("AdminPage", "Load Customer Data From File", nullptr));
        pushButton->setText(QCoreApplication::translate("AdminPage", "Sort By Customer Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("AdminPage", "Customer Listing", nullptr));
        QTableWidgetItem *___qtablewidgetitem = pamphletTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AdminPage", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = pamphletTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AdminPage", "Email", nullptr));
        buttonLoadPamphlets->setText(QCoreApplication::translate("AdminPage", "Load Pamphlet Submissions", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("AdminPage", "Pamphlet Requests", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminPage: public Ui_AdminPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H
