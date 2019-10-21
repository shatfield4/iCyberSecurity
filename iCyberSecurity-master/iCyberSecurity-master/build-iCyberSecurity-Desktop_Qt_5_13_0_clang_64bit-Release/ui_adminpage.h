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
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminPage
{
public:
    QPushButton *loadCustomerData;
    QTableWidget *customerTable;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AdminPage)
    {
        if (AdminPage->objectName().isEmpty())
            AdminPage->setObjectName(QString::fromUtf8("AdminPage"));
        AdminPage->resize(965, 619);
        loadCustomerData = new QPushButton(AdminPage);
        loadCustomerData->setObjectName(QString::fromUtf8("loadCustomerData"));
        loadCustomerData->setGeometry(QRect(40, 576, 241, 23));
        customerTable = new QTableWidget(AdminPage);
        customerTable->setObjectName(QString::fromUtf8("customerTable"));
        customerTable->setGeometry(QRect(40, 40, 879, 530));
        pushButton = new QPushButton(AdminPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 580, 171, 23));
        pushButton_2 = new QPushButton(AdminPage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 580, 171, 23));

        retranslateUi(AdminPage);

        QMetaObject::connectSlotsByName(AdminPage);
    } // setupUi

    void retranslateUi(QDialog *AdminPage)
    {
        AdminPage->setWindowTitle(QCoreApplication::translate("AdminPage", "Dialog", nullptr));
        loadCustomerData->setText(QCoreApplication::translate("AdminPage", "Load Customer Data From File", nullptr));
        pushButton->setText(QCoreApplication::translate("AdminPage", "Sort By Customer Name", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AdminPage", "Sort By Key", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminPage: public Ui_AdminPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H
