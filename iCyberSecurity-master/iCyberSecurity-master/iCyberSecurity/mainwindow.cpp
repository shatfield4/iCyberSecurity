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

    //QFile file("C:/Users/Sean Hatfield/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/textFiles/testimonials.txt");
    QFile file("C:/Users/Nicholas/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/testimonials.txt");
    //QFile file("C:\\Users\\kaito\\Desktop\\testimonials.txt");

    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Error", "File not open for reading data on program execution.");
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

    QMessageBox::information(this, tr("Submitted"), tr("You've submitted it to the big homies. Word up dog."));


    //QFile file ("C:\\Users\\kaito\\Desktop\\pamphletsubmissions.txt");
    QFile file("C:/Users/Nicholas/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/pamphletsubmissions.txt");
    //QFile file ("C:/Users/Sean Hatfield/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/textFiles/pamphletsubmissions.txt");


    if (!file.open(QFile::WriteOnly | QFile::Text | QFile::Append))
    {
        QMessageBox::warning(this, "Error", "File not open for appending data.");
    }
    else
    {
        QTextStream out(&file);
        QString name = ui->pampletNameInput->text();
        QString email = ui->pampletAddressInput->text();

        out << name << endl << email << endl;
        file.flush();
        file.close();
    }
    ui->pampletNameInput->setText("");
    ui->pampletAddressInput->setText("");

}

void MainWindow::on_pushSubmit_clicked()
{
    //QFile file("C:/Users/Sean Hatfield/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/textFiles/testimonials.txt");
    QFile file("C:/Users/Nicholas/Documents/GitHub/iCyberSecurity/iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/testimonials.txt");
    //QFile file("C:\\Users\\kaito\\Desktop\\testimonials.txt");

    if (!file.open(QFile::WriteOnly | QFile::Text | QFile::Append))
    {
        QMessageBox::warning(this, "Error", "File not open for appending data.");
    }
    else
    {
        QTextStream out(&file);
        QString name = ui->editName->toPlainText();
        QString stars = ui->editStars->toPlainText() + " stars";
        QString review = ui->editReviews->toPlainText();

        out << name << endl << stars << endl << review << endl << endl;
        QMessageBox::warning(this, "Submitted", "Thanks for your submission, dog.");
        file.flush();
        file.close();
    }

    ui->editName->setPlainText("");
    ui->editStars->setPlainText("");
    ui->editReviews->setPlainText("");

    file.open(QFile::ReadOnly | QFile::Text);

    QTextStream in(&file);
    QString text = in.readAll();
    ui->textReviews->setPlainText(text);
    file.close();
}

void MainWindow::on_loadCustomerData_clicked()
{


}

//Temporary button to get to the purchasing page
void MainWindow::on_pushButton_clicked()
{
    QMessageBox::warning(this, "Help", "To submit a review, please enter your name, number of stars, and review on the boxes below. After submitting, the review will display on the left.");
}

void MainWindow::on_buttonLogin_clicked()
{
    AdminPage *adminPagePtr = new AdminPage;

    const QString USERNAME = "A";
    const QString PASSWORD = "A";

    if (ui->lineEditUsername->text() != USERNAME && ui->lineEditPassword->text() != PASSWORD)
    {
        QMessageBox::warning(this, "Invalid", "Invalid credentials. Try again idiot.");
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

void MainWindow::on_pushButton_2_clicked()
{
    purchasingPage *newPage = new purchasingPage;
    newPage->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::warning(this, "Help", "To request a pamphlet, please enter your name and email address. The pamphlet will be processed and sent shortly.");
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::warning(this, "Help", "Enter username and password. Why do you need help with this.");
}
