#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

//public slots:

private slots:
    void on_pampletSubmitButton_clicked();

    void on_pushSubmit_clicked();

    void on_loadCustomerData_clicked();

    void on_pushButton_clicked();

    void on_buttonLogin_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
