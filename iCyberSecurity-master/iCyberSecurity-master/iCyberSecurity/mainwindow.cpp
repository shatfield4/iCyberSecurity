#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Customer.h"
#include "purchasingpage.h"
#include "adminpage.h"

#include <QFile>
#include<QStandardPaths>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qDebug("Program Started");
//    ui->customerTable->setColumnCount(5);
//    ui->customerTable->setHorizontalHeaderItem(0, new QTableWidgetItem("Name"));
//    ui->customerTable->setHorizontalHeaderItem(1, new QTableWidgetItem("Address Line 1"));
//    ui->customerTable->setHorizontalHeaderItem(2, new QTableWidgetItem("Address Line 2"));
//    ui->customerTable->setHorizontalHeaderItem(3, new QTableWidgetItem("Interest Level"));
//    ui->customerTable->setHorizontalHeaderItem(4, new QTableWidgetItem("Key"));

    QFile file("C:/Users/Sean Hatfield/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/testimonials.txt");

    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"Error","File not open");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textReviews->setPlainText(text);
    file.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pampletSubmitButton_clicked()
{
    //QMessageBox::information(this,tr("THE title"), tr("You have submitted it. Thank you."));
}

void MainWindow::on_pushSubmit_clicked()
{
    QFile file("C:/Users/Sean Hatfield/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/testimonials.txt");

    if (!file.open(QFile::WriteOnly | QFile::Text | QFile::Append))
    {
        QMessageBox::warning(this,"Error","File not open");
    }
    QTextStream out(&file);
    QString name = ui->editName->toPlainText();
    QString stars = ui->editStars->toPlainText();
    QString review = ui->editReviews->toPlainText();

    out << name << endl << stars << " stars" << endl << review << endl << endl;
    file.flush();
    file.close();
    ui->editName->setPlainText("");
    ui->editStars->setPlainText("");
    ui->editReviews->setPlainText("");

    ui->setupUi(this);

    QFile ifile("C:/Users/Sean Hatfield/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/testimonials.txt");

    if (!ifile.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"Error","File not open");
    }
    QTextStream in(&ifile);
    QString text = in.readAll();
    ui->textReviews->setPlainText(text);
    ifile.close();
}

void MainWindow::on_loadCustomerData_clicked()
{
//        Customer customerArr[500];
//        int count = 0;

//        int column = 0;


//        QFile file("C:/Users/Sean Hatfield/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/customers.txt");

//        if(!file.open(QFile::ReadOnly | QFile::Text))
//        {
//            QMessageBox::warning(this, "title", "file not open");
//        }
//        QTextStream in(&file);

//        for (int i = 0; !in.atEnd(); i++)
//        {
//           QString tempName = in.readLine();
//           QString tempAddress1 = in.readLine();
//           QString tempAddress2 = in.readLine();
//           QString tempInterest = in.readLine();
//           QString tempKey = in.readLine();

//            qDebug() << "Name: " << tempName;
//            qDebug() << "Address 1: " << tempAddress1;
//            qDebug() << "Address 2: " << tempAddress2;
//            qDebug() << "Interest: " << tempInterest;
//            qDebug() << "Key: " << tempKey;

//            customerArr[i].setname(tempName.toUtf8().constData());
//            customerArr[i].setaddress1(tempAddress1.toUtf8().constData());
//            customerArr[i].setaddress2(tempAddress2.toUtf8().constData());
//            customerArr[i].setinterest(tempInterest.toUtf8().constData());
//            customerArr[i].setkey(tempKey.toUtf8().constData());

//            count = i;

//            //Create new rows
//            int row  = ui->customerTable->rowCount();
//            ui->customerTable->insertRow(row);

//            //Set Name
//            QTableWidgetItem *item = ui->customerTable->item(row, column);
//            item = new QTableWidgetItem();
//            item->setText(QString::fromStdString(customerArr[i].getname()));
//            ui->customerTable->setItem(row, column, item);

//            //Set Address 1
//            item = new QTableWidgetItem();
//            ui->customerTable->item(row,column + 1);
//            ui->customerTable->setItem(row,column + 1, item);
//            item->setText(QString::fromStdString(customerArr[i].getaddress1()));

//            //Set Address 2
//            item = new QTableWidgetItem();
//            ui->customerTable->item(row,column + 2);
//            ui->customerTable->setItem(row,column + 2, item);
//            item->setText(QString::fromStdString(customerArr[i].getaddress2()));

//            //Set Interest Level
//            item = new QTableWidgetItem();
//            ui->customerTable->item(row,column + 3);
//            ui->customerTable->setItem(row,column + 3, item);
//            item->setText(QString::fromStdString(customerArr[i].getinterest()));

//            //Set Key
//            item = new QTableWidgetItem();
//            ui->customerTable->item(row,column + 4);
//            ui->customerTable->setItem(row,column + 4, item);
//            item->setText(QString::fromStdString(customerArr[i].getkey()));

//            row += 1;
//            column = 0;
//        }

//        ui->customerTable->resizeColumnsToContents();
//        file.close();

}

//Temporary button to get to the purchasing page
void MainWindow::on_pushButton_clicked()
{
    purchasingPage* page = new purchasingPage;
    page -> show();
}

void MainWindow::on_buttonLogin_clicked()
{
    AdminPage *adminPagePtr = new AdminPage;

    const QString USERNAME = "A";
    const QString PASSWORD = "A";

    if (ui->lineEditUsername->text() != USERNAME && ui->lineEditPassword->text() != PASSWORD)
    {
        QMessageBox::warning(this, "Invalid", "Invalid input. Try again bitch.");
        ui->lineEditUsername->setText("");
        ui->lineEditPassword->setText("");
    }
    else
    {
        adminPagePtr->show();
        ui->lineEditUsername->setText("");
        ui->lineEditPassword->setText("");
    }
}
