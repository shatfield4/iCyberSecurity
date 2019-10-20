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

    QFile file(":/data/textFiles/testimonials.txt");

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
    QFile file(":/data/textFiles/testimonials.txt");

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

    QFile ifile(":/data/textFiles/testimonials.txt");

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
