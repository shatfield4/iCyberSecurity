/********************************************************************************
** Form generated from reading UI file 'adminpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPAGE_H
#define UI_ADMINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AdminPage
{
public:
    QLabel *label;

    void setupUi(QDialog *AdminPage)
    {
        if (AdminPage->objectName().isEmpty())
            AdminPage->setObjectName(QString::fromUtf8("AdminPage"));
        AdminPage->resize(400, 300);
        label = new QLabel(AdminPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 130, 47, 13));

        retranslateUi(AdminPage);

        QMetaObject::connectSlotsByName(AdminPage);
    } // setupUi

    void retranslateUi(QDialog *AdminPage)
    {
        AdminPage->setWindowTitle(QApplication::translate("AdminPage", "Dialog", nullptr));
        label->setText(QApplication::translate("AdminPage", "hi homie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminPage: public Ui_AdminPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H
