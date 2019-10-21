#include "Customer.h"
#include "order.h"

#include <QFile>
#include<QStandardPaths>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>


void readInCustomerData(Customer customerArr[], //array of customer that will be updated with the data txt file
                                        int arraySize,                  //the array size of customerArr[]
                                        int& totalNumCustomers) //total number of customers from the data
{
    QFile fileCustomer(":/data/textFiles/customers.txt");
    QFile fileOrder(":/data/textFiles/orders.txt");

    //Error message for when the file dont open
    if(!fileCustomer.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(nullptr, "title", "customer file not open");   //switched this to nullptr - ayako
    }

    if(!fileOrder.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(nullptr, "title", "order file not open");   //switched this to nullptr - ayako
    }

    QTextStream inCustomer(&fileCustomer);
    QTextStream inOrder(&fileOrder);

    //Each for loop will input the data for each customer from the text file
    for (int i = 0; !inCustomer.atEnd(); i++)
    {
       //GETTING DATA FROM CUSTOMER FILE
       QString tempName      = inCustomer.readLine();
       QString tempAddress1 = inCustomer.readLine();
       QString tempAddress2 = inCustomer.readLine();
       QString tempInterest    = inCustomer.readLine();
       QString tempKey         = inCustomer.readLine();

        /*
        qDebug() << "Name: "       << tempName;
        qDebug() << "Address 1: " << tempAddress1;
        qDebug() << "Address 2: " << tempAddress2;
        qDebug() << "Interest: "     << tempInterest;
        qDebug() << "Key: "          << tempKey;
        */
        customerArr[i].setName(tempName.toUtf8().constData());
        customerArr[i].setAddress1(tempAddress1.toUtf8().constData());
        customerArr[i].setAddress2(tempAddress2.toUtf8().constData());
        customerArr[i].setInterest(tempInterest.toUtf8().constData());
        customerArr[i].setKey(tempKey.toUtf8().constData());

        //GETTING DATA FROM ORDER FILE
        QString tempProduct1 = inOrder.readLine();
        QString tempProduct2 = inOrder.readLine();
        QString tempProduct3 = inOrder.readLine();
        QString tempService1  = inOrder.readLine();
        QString tempService2  = inOrder.readLine();
        QString tempTax          = inOrder.readLine();

         qDebug() << "p1: "       << tempProduct1;
         qDebug() << "p2: " << tempProduct2;
         qDebug() << "p3: " << tempProduct3;
         qDebug() << "s1: "     << tempService1;
         qDebug() << "s2: "          << tempService2;
         qDebug() << "tax: "     << tempTax;

         customerArr[i].getCustomerOrder().setnumber_of_product_one(tempProduct1.toInt());
         customerArr[i].getCustomerOrder().setnumber_of_product_two(tempProduct2.toInt());
         customerArr[i].getCustomerOrder().setnumber_of_product_three(tempProduct3.toInt());
         customerArr[i].getCustomerOrder().setserviceplan_one(tempService1.toInt());
         customerArr[i].getCustomerOrder().setserviceplan_two(tempService2.toInt());
         customerArr[i].getCustomerOrder().settax(tempTax.toInt());
         customerArr[i].getCustomerOrder().update_total();

        totalNumCustomers = i + 1; //Added one to the index for the exact number of customer

    }//END for loop

    fileCustomer.close();
    fileOrder.close();
}
