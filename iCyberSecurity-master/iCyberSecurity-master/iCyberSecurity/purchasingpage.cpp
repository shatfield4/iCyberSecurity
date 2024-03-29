#include "purchasingpage.h"
#include "ui_purchasingpage.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adminpage.h"
#include "ui_adminpage.h"
#include "Customer.h"
#include "sorting.h"
#include "readAndWriteFunctions.h"

#include <QFile>
#include <QStandardPaths>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

int ARRAYCOUNT;


purchasingPage::purchasingPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::purchasingPage)
{
    ui->setupUi(this);

    //Update combo box with existing customers
    Customer customerArr[500];
    int count = 0;

    readInCustomerData(customerArr,500,count);

    for(int index = 0; index <= count; index++)
    {
        ui->existingComboBox->addItem(QString::fromStdString(customerArr[index].getName()));
    }

    //Add item for not a previous customer
    ui->existingComboBox->addItem("Not a previous customer");

    ARRAYCOUNT = count;
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

//OK button
//NOT WORKING NEED TO BE FIXED
void purchasingPage::on_buttonBox_accepted()
{
    Customer unsorted[500];
    Customer sortName[500];
    Customer sortKey[500];
    int comboBoxIndex;
    int count = 0;
    int keyCount = 0;

    readInCustomerData(unsorted, //array of customer that will be updated with the data txt file
                                    500,                  //the array size of customerArr[]
                                    count); //total number of customers from the data

    sortCustomers(unsorted, sortName, sortKey, count, keyCount);
    qDebug() << "Count: " << count;

    comboBoxIndex = ui->existingComboBox->currentIndex();

    if (comboBoxIndex != count)
    {
        if(ui->silverPrice->text().toDouble() > 0)
        {
            unsorted[comboBoxIndex].getCustomerOrder().setnumber_of_product_one(1);
        }
        if(ui->goldPrice->text().toDouble() > 0)
        {
            unsorted[comboBoxIndex].getCustomerOrder().setnumber_of_product_two(unsorted[comboBoxIndex].getCustomerOrder().getnumber_of_product_two() + 1);
        }
        if(ui->diamondPrice->text().toDouble() > 0)
        {
            unsorted[comboBoxIndex].getCustomerOrder().setnumber_of_product_three(unsorted[comboBoxIndex].getCustomerOrder().getnumber_of_product_three() + 1);
        }
        if(ui->crabPrice->text().toDouble() > 0)
        {
            unsorted[comboBoxIndex].getCustomerOrder().setserviceplan_one(true);
        }
        if(ui->unicornPrice->text().toDouble() > 0)
        {
            unsorted[comboBoxIndex].getCustomerOrder().setserviceplan_two(true);
        }
        qDebug() << "Index: " << comboBoxIndex;

    }


    qDebug() << "Index: " << comboBoxIndex;
    qDebug() << "Expression: " << (ui->silverPrice->text().toDouble() > 0);

    qDebug() << "Number of Product one: "   << unsorted[comboBoxIndex].getCustomerOrder().getnumber_of_product_one();
    qDebug() << "Number of Product two: "   << unsorted[comboBoxIndex].getCustomerOrder().getnumber_of_product_two();
    qDebug() << "Number of Product three: " << unsorted[comboBoxIndex].getCustomerOrder().getnumber_of_product_three();



    QMessageBox::information(this,tr("Order Accepted"), tr("Your order has been accepted.\nThank you for your purchase.\nGoing back to product page."));

}
