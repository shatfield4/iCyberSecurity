#include "purchasingpage.h"
#include "ui_purchasingpage.h"
#include "Customer.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "purchasingpage.h"
#include "adminpage.h"

#include <QFile>
#include <QStandardPaths>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QDebug>

#include <QMessageBox>

int ARRAYCOUNT;


purchasingPage::purchasingPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::purchasingPage)
{
    ui->setupUi(this);


    //Update combo box with existing customers
            Customer customerArr[500];
            int count = 0;


            QFile file(":/data/textFiles/customers.txt");

            if(!file.open(QFile::ReadOnly | QFile::Text))
            {
                QMessageBox::warning(this, "title", "file not open");
            }
            QTextStream in(&file);

            for (int i = 0; !in.atEnd(); i++)
            {
               QString tempName = in.readLine();
               QString tempAddress1 = in.readLine();
               QString tempAddress2 = in.readLine();
               QString tempInterest = in.readLine();
               QString tempKey = in.readLine();

                qDebug() << "Name: " << tempName;
                qDebug() << "Address 1: " << tempAddress1;
                qDebug() << "Address 2: " << tempAddress2;
                qDebug() << "Interest: " << tempInterest;
                qDebug() << "Key: " << tempKey;

                customerArr[i].setName(tempName.toUtf8().constData());
                customerArr[i].setAddress1(tempAddress1.toUtf8().constData());
                customerArr[i].setAddress2(tempAddress2.toUtf8().constData());
                customerArr[i].setInterest(tempInterest.toUtf8().constData());
                customerArr[i].setKey(tempKey.toUtf8().constData());

                count = i;
            }

            for(int index = 0; index <= count; index++)
            {
                ui->existingComboBox->addItem(QString::fromStdString(customerArr[index].getName()));
            }

            //Add item for not a previous customer
            ui->existingComboBox->addItem("Not a previous customer");



            ARRAYCOUNT = count;


            file.close();


}

purchasingPage::~purchasingPage()
{
    delete ui;
}

//Help Button
void purchasingPage::on_pushButton_clicked()
{
    QMessageBox::information(this,tr("Purchasing Page Help"),
                                                   tr("In order to purchase the products we will need the following information\n\n"
                                                      "1. At least one check box for ordering products\n"
                                                      "2. At lease one check box for the Maintance Plan\n"
                                                      "3. Customer Information - either selecting from the existing customer list or adding in new customer information\n\n"
                                                      "Once you have filled in all the information please check your order from the"
                                                      "receipt that is on the right bottom of the page and click OK.\n"
                                                      "If you would like to cancel your order please click Cancel and you will be"
                                                      "taken back to the products page."));
}

//OK button
void purchasingPage::on_buttonBox_accepted()
{
    QMessageBox::information(this,tr("Order Accepted"), tr("Your order has been accepted.\nThank you for your purchase.\nGoing back to product page."));
}

//Cancel button
void purchasingPage::on_buttonBox_rejected()
{
   QMessageBox::information(this,tr("Order Canceled"), tr("Your order has been canceled.\nGoing back to product page."));
    /*

    QMessageBox msgBox;
    msgBox.setText("You are canceling a order.");
    msgBox.setInformativeText("Are you sure you would like to cancel your order?\nAll information entered will be deleted.");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    int ret = msgBox.exec();


    switch (ret) {
      case QMessageBox::Yes:
          // Yes was clicked - exit the purchasing ui
         QMessageBox::information(this,tr("Canceling"), tr("Your order have been canceled.\nGoing back to product page."));
         close();
         break;
      case QMessageBox::No:
          // No was clicked - return to purchasing page
          break;
      default:
          // should never be reached
          break;
    }

    */

}



void purchasingPage::on_pushButton_2_clicked()
{

//    int tempIndex = ui->existingComboBox->currentIndex();

//        if (tempIndex == ARRAYCOUNT + 1)
//        {
//            QMessageBox::information(this, "title", "not a returning customer");
//        }

  //

    //FIX THISSS

    //QMessageBox::information(this, "title", ui->checkBoxSilver->checkState());
}

void purchasingPage::on_checkBoxSilver_toggled(bool checked)
{
    if(checked)
    {
        ui->silverPrice->setNum(100.00);
    } else {
        ui->silverPrice->setNum(0.00);
    }

    double tempSubtotal = (ui->silverPrice->text()).toDouble() + (ui->goldPrice->text()).toDouble() + (ui->diamondPrice->text()).toDouble() +( ui->crabPrice->text()).toDouble() + (ui->unicornPrice->text()).toDouble();

    ui->subtotalPrice->setNum(tempSubtotal);

    QString tempTotal = QString::number(tempSubtotal*1.0775, 'f', 2);

    ui->totalPrice->setText(tempTotal);
}

void purchasingPage::on_checkBoxGold_toggled(bool checked)
{

   if(checked)
   {
       ui->goldPrice->setNum(200.00);
   } else {
       ui->goldPrice->setNum(0.00);
   }

   double tempSubtotal = (ui->silverPrice->text()).toDouble() + (ui->goldPrice->text()).toDouble() + (ui->diamondPrice->text()).toDouble() +( ui->crabPrice->text()).toDouble() + (ui->unicornPrice->text()).toDouble();

   ui->subtotalPrice->setNum(tempSubtotal);

   QString tempTotal = QString::number(tempSubtotal*1.0775, 'f', 2);

   ui->totalPrice->setText(tempTotal);



//   //convert qstring to double
//   QString stings = ui->goldPrice->text();
//   double doubleString = stings.toDouble();

//   //convert double to qstring
//   QString stingsz1 = QString::number(doubleString);

}

void purchasingPage::on_checkBoxSilver_stateChanged(int arg1)
{

}



void purchasingPage::on_checkBoxDiamond_toggled(bool checked)
{
    if(checked)
    {
        ui->diamondPrice->setNum(300.00);
    } else {
        ui->diamondPrice->setNum(0.00);
    }

    double tempSubtotal = (ui->silverPrice->text()).toDouble() + (ui->goldPrice->text()).toDouble() + (ui->diamondPrice->text()).toDouble() +( ui->crabPrice->text()).toDouble() + (ui->unicornPrice->text()).toDouble();

    ui->subtotalPrice->setNum(tempSubtotal);

    QString tempTotal = QString::number(tempSubtotal*1.0775, 'f', 2);

    ui->totalPrice->setText(tempTotal);
}

void purchasingPage::on_checkBoxCrab_toggled(bool checked)
{
    if(checked)
    {
        ui->crabPrice->setNum(50.00);
    } else {
        ui->crabPrice->setNum(0.00);
    }

    double tempSubtotal = (ui->silverPrice->text()).toDouble() + (ui->goldPrice->text()).toDouble() + (ui->diamondPrice->text()).toDouble() +( ui->crabPrice->text()).toDouble() + (ui->unicornPrice->text()).toDouble();

    ui->subtotalPrice->setNum(tempSubtotal);

    QString tempTotal = QString::number(tempSubtotal*1.0775, 'f', 2);

    ui->totalPrice->setText(tempTotal);
}

void purchasingPage::on_checkBoxUnicorn_toggled(bool checked)
{
    if(checked)
    {
        ui->unicornPrice->setNum(80.00);
    } else {
        ui->unicornPrice->setNum(0.00);
    }

    double tempSubtotal = (ui->silverPrice->text()).toDouble() + (ui->goldPrice->text()).toDouble() + (ui->diamondPrice->text()).toDouble() +( ui->crabPrice->text()).toDouble() + (ui->unicornPrice->text()).toDouble();
    ui->subtotalPrice->setNum(tempSubtotal);

    QString tempTotal = QString::number(tempSubtotal*1.0775, 'f', 2);

    ui->totalPrice->setText(tempTotal);
}
