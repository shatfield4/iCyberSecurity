#include "Customer.h"
#include "order.h"
#include "readAndWriteFunctions.h"

#include <QFile>
#include<QStandardPaths>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QString>


void readInCustomerData(Customer customerArr[], //array of customer that will be updated with the data txt file
                                        int arraySize,                  //the array size of customerArr[]
                                        int& totalNumCustomers) //total number of customers from the data
{

    //QFile fileCustomer("C:\\Users\\kaito\\Desktop\\customers.txt");
    //QFile fileOrder("C:\\Users\\kaito\\Desktop\\orders.txt");
    QFile fileCustomer("C:/Users/Nicholas/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/customers.txt");
    QFile fileOrder("C:/Users/Nicholas/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/orders.txt");
    //QFile fileCustomer("C:/Users/Sean Hatfield/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/textFiles/customers.txt");
    //QFile fileOrder("C:/Users/Sean Hatfield/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/textFiles/orders.txt");


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
        /*
         qDebug() << "p1: "       << tempProduct1;
         qDebug() << "p2: " << tempProduct2;
         qDebug() << "p3: " << tempProduct3;
         qDebug() << "s1: "     << tempService1;
         qDebug() << "s2: "          << tempService2;
         qDebug() << "tax: "     << tempTax;
        */
         customerArr[i].getCustomerOrder().setnumber_of_product_one(tempProduct1.toInt());
         customerArr[i].getCustomerOrder().setnumber_of_product_two(tempProduct2.toInt());
         customerArr[i].getCustomerOrder().setnumber_of_product_three(tempProduct3.toInt());
         customerArr[i].getCustomerOrder().setserviceplan_one(tempService1.toInt());
         customerArr[i].getCustomerOrder().setserviceplan_two(tempService2.toInt());
         customerArr[i].getCustomerOrder().settax(tempTax.toInt());
         customerArr[i].getCustomerOrder().update_total();

        totalNumCustomers = i; //index for the last number of customer

    }//END for loop

    fileCustomer.close();
    fileOrder.close();
}

void writeInCustomerData(Customer customerArr[], //array of customer that will be updated with the data txt file
                                        int arraySize,                  //the array size of customerArr[]
                                        int& totalNumCustomers) //total number of customers from the data
{

    //QFile fileCustomer("C:\\Users\\kaito\\Desktop\\customers.txt");
    //QFile fileOrder("C:\\Users\\kaito\\Desktop\\orders.txt");
    QFile fileCustomer("C:/Users/Nicholas/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/customers.txt");
    QFile fileOrder("C:/Users/Nicholas/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/orders.txt");
    //QFile fileCustomer("C:/Users/Sean Hatfield/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/textFiles/customers.txt");
    //QFile fileOrder("C:/Users/Sean Hatfield/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/textFiles/orders.txt");


    //Error message for when the file dont open
    if(!fileCustomer.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(nullptr, "title", "customer file not open");   //switched this to nullptr - ayako
    }

    if(!fileOrder.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(nullptr, "title", "order file not open");   //switched this to nullptr - ayako
    }

    QTextStream outCustomer(&fileCustomer);
    QTextStream outOrder(&fileOrder);

    //Each for loop will input the data for each customer from the text file
    for (int i = 0; i < totalNumCustomers; i++)
    {
       //GETTING DATA FROM CUSTOMER FILE
       QString tempName      = QString::fromStdString(customerArr[i].getName());
       QString tempAddress1 = QString::fromStdString(customerArr[i].getAddress1());
       QString tempAddress2 = QString::fromStdString(customerArr[i].getAddress2());
       QString tempInterest    = QString::fromStdString(customerArr[i].getInterest());
       QString tempKey         = QString::fromStdString(customerArr[i].getKey());

        /*
        qDebug() << "Name: "       << tempName;
        qDebug() << "Address 1: " << tempAddress1;
        qDebug() << "Address 2: " << tempAddress2;
        qDebug() << "Interest: "     << tempInterest;
        qDebug() << "Key: "          << tempKey;
        */

        outCustomer << tempName << endl;
        outCustomer << tempAddress1 << endl;
        outCustomer << tempAddress2 << endl;
        outCustomer << tempInterest << endl;
        outCustomer << tempKey << endl;

        //GETTING DATA FROM ORDER FILE
        QString tempProduct1 =QString::number(customerArr[i].getCustomerOrder().getnumber_of_product_one());
        QString tempProduct2 = QString::number(customerArr[i].getCustomerOrder().getnumber_of_product_two());
        QString tempProduct3 =QString::number(customerArr[i].getCustomerOrder().getnumber_of_product_three());
        QString tempService1  = QString::number(customerArr[i].getCustomerOrder().getserviceplan_one());
        QString tempService2  = QString::number(customerArr[i].getCustomerOrder().getserviceplan_two());
        QString tempTax          = QString::number(customerArr[i].getCustomerOrder().gettax());
        /*
         qDebug() << "p1: "  << tempProduct1;
         qDebug() << "p2: "  << tempProduct2;
         qDebug() << "p3: "  << tempProduct3;
         qDebug() << "s1: "  << tempService1;
         qDebug() << "s2: "  << tempService2;
         qDebug() << "tax: " << tempTax;
        */
         outOrder << tempProduct1 << endl;
         outOrder << tempProduct2 << endl;
         outOrder << tempProduct3 << endl;
         outOrder << tempService1 << endl;
         outOrder << tempService2 << endl;
         outOrder << tempTax << endl;

    }//END for loop

    outCustomer.flush();
    outOrder.flush();

    fileCustomer.close();
    fileOrder.close();
}
