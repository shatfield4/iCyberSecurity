#include "purchasingpage.h"
#include "ui_purchasingpage.h"

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
