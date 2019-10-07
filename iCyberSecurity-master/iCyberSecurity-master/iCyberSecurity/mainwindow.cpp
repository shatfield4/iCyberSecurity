#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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
}
