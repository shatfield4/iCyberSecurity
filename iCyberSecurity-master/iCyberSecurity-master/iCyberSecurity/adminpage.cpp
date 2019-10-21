#include "adminpage.h"
#include "ui_adminpage.h"
#include "Customer.h"
#include "readAndWriteFunctions.h"
#include "sorting.h"
#include "readAndWriteFunctions.h"

#include <QFile>
#include<QStandardPaths>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>



AdminPage::AdminPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminPage)
{
    ui->setupUi(this);


}

AdminPage::~AdminPage()
{
    delete ui;
}

void AdminPage::on_loadCustomerData_clicked()
{
    ui->customerTable->setColumnCount(5);
    ui->customerTable->setHorizontalHeaderItem(0, new QTableWidgetItem("Name"));
    ui->customerTable->setHorizontalHeaderItem(1, new QTableWidgetItem("Address Line 1"));
    ui->customerTable->setHorizontalHeaderItem(2, new QTableWidgetItem("Address Line 2"));
    ui->customerTable->setHorizontalHeaderItem(3, new QTableWidgetItem("Interest Level"));
    ui->customerTable->setHorizontalHeaderItem(4, new QTableWidgetItem("Key"));

    ui->pamphletTable->setColumnCount(2);
    ui->pamphletTable->setHorizontalHeaderItem(0, new QTableWidgetItem("Name"));
    ui->pamphletTable->setHorizontalHeaderItem(1, new QTableWidgetItem("Email"));


    Customer customerArr[500];
    int count = 0;

    int column = 0;
    //int row = 0;

    ui->customerTable->setRowCount(0);

    readInCustomerData(customerArr, //array of customer that will be updated with the data txt file
                                    500,                  //the array size of customerArr[]
                                    count); //total number of customers from the data

    for (int i = 0; i < count; i++)
    {
        //CREATING THE TABLE FOR CUSTOMER LIST AND OUTPUT DATA

        //Create new rows
        int row  = ui->customerTable->rowCount();
        ui->customerTable->insertRow(row);

        //Set Name
        QTableWidgetItem *item = ui->customerTable->item(row, column);
        item = new QTableWidgetItem();
        item->setText(QString::fromStdString(customerArr[i].getName()));
        ui->customerTable->setItem(row, column, item);

        //Set Address 1
        item = new QTableWidgetItem();
        ui->customerTable->item(row,column + 1);
        ui->customerTable->setItem(row,column + 1, item);
        item->setText(QString::fromStdString(customerArr[i].getAddress1()));

        //Set Address 2
        item = new QTableWidgetItem();
        ui->customerTable->item(row,column + 2);
        ui->customerTable->setItem(row,column + 2, item);
        item->setText(QString::fromStdString(customerArr[i].getAddress2()));

        //Set Interest Level
        item = new QTableWidgetItem();
        ui->customerTable->item(row,column + 3);
        ui->customerTable->setItem(row,column + 3, item);
        item->setText(QString::fromStdString(customerArr[i].getInterest()));

        //Set Key
        item = new QTableWidgetItem();
        ui->customerTable->item(row,column + 4);
        ui->customerTable->setItem(row,column + 4, item);
        item->setText(QString::fromStdString(customerArr[i].getKey()));

        row += 1;
        column = 0;

    }//END for loop

    ui->customerTable->resizeColumnsToContents();


}

void AdminPage::on_buttonLoadPamphlets_clicked()
{
    QFile file("C:/Users/Sean Hatfield/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/textFiles/pamphletsubmissions.txt");

    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Error", "File not open for reading. pamphletsubmissions.txt.");
    }
    else
    {
        QTextStream txtStream(&file);

        for (int i = 0; !txtStream.atEnd(); i++)
        {
            ui->pamphletTable->insertRow(i);
            //QMessageBox::warning(this, "Hi", "Hi");
            QString tempName = txtStream.readLine();
            QString tempEmail = txtStream.readLine();

            ui->pamphletTable->setItem(i, 0, new QTableWidgetItem(tempName));
            ui->pamphletTable->setItem(i, 1, new QTableWidgetItem(tempEmail));
        }
    }

    ui->pamphletTable->resizeColumnsToContents();
    file.close();

} //END void AdminPage::on_loadCustomerData_clicked()


void AdminPage::on_pushButton_clicked()
{
    ui->customerTable->setColumnCount(5);
    ui->customerTable->setHorizontalHeaderItem(0, new QTableWidgetItem("Name"));
    ui->customerTable->setHorizontalHeaderItem(1, new QTableWidgetItem("Address Line 1"));
    ui->customerTable->setHorizontalHeaderItem(2, new QTableWidgetItem("Address Line 2"));
    ui->customerTable->setHorizontalHeaderItem(3, new QTableWidgetItem("Interest Level"));
    ui->customerTable->setHorizontalHeaderItem(4, new QTableWidgetItem("Key"));

    ui->pamphletTable->setColumnCount(2);
    ui->pamphletTable->setHorizontalHeaderItem(0, new QTableWidgetItem("Name"));
    ui->pamphletTable->setHorizontalHeaderItem(1, new QTableWidgetItem("Email"));


    Customer unsorted[500];
    Customer sortName[500];
    Customer sortKey[500];
    int count = 0;
    int keyCount = 0;

    int column = 0;

    ui->customerTable->setRowCount(0);

    readInCustomerData(unsorted, //array of customer that will be updated with the data txt file
                                    500,                  //the array size of customerArr[]
                                    count); //total number of customers from the data

    sortCustomers(unsorted, sortName, sortKey, count, keyCount);

    for (int i = 0; i < count; i++)
    {
        //CREATING THE TABLE FOR CUSTOMER LIST AND OUTPUT DATA

        //Create new rows
        int row  = ui->customerTable->rowCount();
        ui->customerTable->insertRow(row);

        //Set Name
        QTableWidgetItem *item = ui->customerTable->item(row, column);
        item = new QTableWidgetItem();
        item->setText(QString::fromStdString(sortName[i].getName()));
        ui->customerTable->setItem(row, column, item);

        //Set Address 1
        item = new QTableWidgetItem();
        ui->customerTable->item(row,column + 1);
        ui->customerTable->setItem(row,column + 1, item);
        item->setText(QString::fromStdString(sortName[i].getAddress1()));

        //Set Address 2
        item = new QTableWidgetItem();
        ui->customerTable->item(row,column + 2);
        ui->customerTable->setItem(row,column + 2, item);
        item->setText(QString::fromStdString(sortName[i].getAddress2()));

        //Set Interest Level
        item = new QTableWidgetItem();
        ui->customerTable->item(row,column + 3);
        ui->customerTable->setItem(row,column + 3, item);
        item->setText(QString::fromStdString(sortName[i].getInterest()));

        //Set Key
        item = new QTableWidgetItem();
        ui->customerTable->item(row,column + 4);
        ui->customerTable->setItem(row,column + 4, item);
        item->setText(QString::fromStdString(sortName[i].getKey()));

        row += 1;
        column = 0;

    }//END for loop

    ui->customerTable->resizeColumnsToContents();


}

void AdminPage::on_pushButton_2_clicked()
{
    ui->customerTable->setColumnCount(5);
    ui->customerTable->setHorizontalHeaderItem(0, new QTableWidgetItem("Name"));
    ui->customerTable->setHorizontalHeaderItem(1, new QTableWidgetItem("Address Line 1"));
    ui->customerTable->setHorizontalHeaderItem(2, new QTableWidgetItem("Address Line 2"));
    ui->customerTable->setHorizontalHeaderItem(3, new QTableWidgetItem("Interest Level"));
    ui->customerTable->setHorizontalHeaderItem(4, new QTableWidgetItem("Key"));

    ui->pamphletTable->setColumnCount(2);
    ui->pamphletTable->setHorizontalHeaderItem(0, new QTableWidgetItem("Name"));
    ui->pamphletTable->setHorizontalHeaderItem(1, new QTableWidgetItem("Email"));


    Customer unsorted[500];
    Customer sortName[500];
    Customer sortKey[500];
    int count = 0;
    int keyCount = 0;

    int column = 0;

    ui->customerTable->setRowCount(0);

    readInCustomerData(unsorted, //array of customer that will be updated with the data txt file
                                    500,                  //the array size of customerArr[]
                                    count); //total number of customers from the data

    sortCustomers(unsorted, sortName, sortKey, count, keyCount);

    for (int i = 0; i < keyCount; i++)
    {
        //CREATING THE TABLE FOR CUSTOMER LIST AND OUTPUT DATA

        //Create new rows
        int row  = ui->customerTable->rowCount();
        ui->customerTable->insertRow(row);

        //Set Name
        QTableWidgetItem *item = ui->customerTable->item(row, column);
        item = new QTableWidgetItem();
        item->setText(QString::fromStdString(sortKey[i].getName()));
        ui->customerTable->setItem(row, column, item);

        //Set Address 1
        item = new QTableWidgetItem();
        ui->customerTable->item(row,column + 1);
        ui->customerTable->setItem(row,column + 1, item);
        item->setText(QString::fromStdString(sortKey[i].getAddress1()));

        //Set Address 2
        item = new QTableWidgetItem();
        ui->customerTable->item(row,column + 2);
        ui->customerTable->setItem(row,column + 2, item);
        item->setText(QString::fromStdString(sortKey[i].getAddress2()));

        //Set Interest Level
        item = new QTableWidgetItem();
        ui->customerTable->item(row,column + 3);
        ui->customerTable->setItem(row,column + 3, item);
        item->setText(QString::fromStdString(sortKey[i].getInterest()));

        //Set Key
        item = new QTableWidgetItem();
        ui->customerTable->item(row,column + 4);
        ui->customerTable->setItem(row,column + 4, item);
        item->setText(QString::fromStdString(sortKey[i].getKey()));

        row += 1;
        column = 0;

    }//END for loop

    ui->customerTable->resizeColumnsToContents();
}
