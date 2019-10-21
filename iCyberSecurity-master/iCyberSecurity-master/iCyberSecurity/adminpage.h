#ifndef ADMINPAGE_H
#define ADMINPAGE_H

#include <QDialog>

namespace Ui {
class AdminPage;
}

class AdminPage : public QDialog
{
    Q_OBJECT

public:
    explicit AdminPage(QWidget *parent = nullptr);
    ~AdminPage();

private slots:
    void on_loadCustomerData_clicked();

    void on_buttonLoadPamphlets_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AdminPage *ui;
};

#endif // ADMINPAGE_H
