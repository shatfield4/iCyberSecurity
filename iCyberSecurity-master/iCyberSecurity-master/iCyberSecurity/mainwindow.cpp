#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Customer.h"
#include "purchasingpage.h"


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
    ui->customerTable->setColumnCount(5);
    ui->customerTable->setHorizontalHeaderItem(0, new QTableWidgetItem("Name"));
    ui->customerTable->setHorizontalHeaderItem(1, new QTableWidgetItem("Address Line 1"));
    ui->customerTable->setHorizontalHeaderItem(2, new QTableWidgetItem("Address Line 2"));
    ui->customerTable->setHorizontalHeaderItem(3, new QTableWidgetItem("Interest Level"));
    ui->customerTable->setHorizontalHeaderItem(4, new QTableWidgetItem("Key"));

    QFile file("testimonials.txt");

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
    QMessageBox::information(this,tr("THE title"), tr("You have submitted it. Thank you."));
}

void MainWindow::on_pushSubmit_clicked()
{
    QFile file("testimonials.txt");

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

    QFile ifile("testimonials.txt");

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
        Customer customerArr[500];
        int count = 0;

        int column = 0;
        //int row = 0;

        QString tempName;
        QString tempAddress1;
        QString tempAddress2;
        QString tempInterest;
        QString tempKey;

        //QString path = QStandardPaths::AppLocalDataLocation;
        //path.append("/customers.txt");

       // QString documentLocation = QStandardPaths::locate(QStandardPaths::DocumentsLocation, "customers.txt", QStandardPaths::LocateDirectory);

        QFile file("iCyberSecurity/customers.txt");
        if(!file.open(QFile::ReadOnly | QFile::Text))
        {
            QMessageBox::warning(this, "title", "file not open");
        }
        QTextStream in(&file);



        for (int i = 0; !in.atEnd(); i++)
        {
            tempName = in.readLine();
            tempAddress1 = in.readLine();
            tempAddress2 = in.readLine();
            tempInterest = in.readLine();
            tempKey = in.readLine();

            qDebug() << "Name: " << tempName;
            qDebug() << "Address 1: " << tempAddress1;
            qDebug() << "Address 2: " << tempAddress2;
            qDebug() << "Interest: " << tempInterest;
            qDebug() << "Key: " << tempKey;

            customerArr[i].setname(tempName.toUtf8().constData());
            customerArr[i].setaddress1(tempAddress1.toUtf8().constData());
            customerArr[i].setaddress2(tempAddress2.toUtf8().constData());
            customerArr[i].setInterest(tempInterest.toUtf8().constData());
            customerArr[i].setkey(tempKey.toUtf8().constData());

            count = i;

            //Create new rows
            int row  = ui->customerTable->rowCount();
            ui->customerTable->insertRow(row);

            //Set Name
            QTableWidgetItem *item = ui->customerTable->item(row, column);
            item = new QTableWidgetItem();
            item->setText(QString::fromStdString(customerArr[i].getname()));
            ui->customerTable->setItem(row, column, item);

            //Set Address 1
            item = new QTableWidgetItem();
            ui->customerTable->item(row,column + 1);
            ui->customerTable->setItem(row,column + 1, item);
            item->setText(QString::fromStdString(customerArr[i].getaddress1()));

            //Set Address 2
            item = new QTableWidgetItem();
            ui->customerTable->item(row,column + 2);
            ui->customerTable->setItem(row,column + 2, item);
            item->setText(QString::fromStdString(customerArr[i].getaddress2()));

            //Set Interest Level
            item = new QTableWidgetItem();
            ui->customerTable->item(row,column + 3);
            ui->customerTable->setItem(row,column + 3, item);
            item->setText(QString::fromStdString(customerArr[i].getInterest()));

            //Set Key
            item = new QTableWidgetItem();
            ui->customerTable->item(row,column + 4);
            ui->customerTable->setItem(row,column + 4, item);
            item->setText(QString::fromStdString(customerArr[i].getkey()));

            row += 1;
            column = 0;

        }

        ui->customerTable->resizeColumnsToContents();

}

//Temporary button to get to the purchasing page
void MainWindow::on_pushButton_clicked()
{
    purchasingPage* page = new purchasingPage;
    page -> show();
}
