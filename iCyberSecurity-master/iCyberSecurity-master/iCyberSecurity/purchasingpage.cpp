#include "purchasingpage.h"
#include "ui_purchasingpage.h"

#include <QMessageBox>

purchasingPage::purchasingPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::purchasingPage)
{
    ui->setupUi(this);
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

}


