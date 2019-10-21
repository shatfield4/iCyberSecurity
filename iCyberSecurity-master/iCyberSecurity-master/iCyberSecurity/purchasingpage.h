#ifndef PURCHASINGPAGE_H
#define PURCHASINGPAGE_H

#include <QDialog>

namespace Ui {
class purchasingPage;
}

class purchasingPage : public QDialog
{
    Q_OBJECT

public:
    explicit purchasingPage(QWidget *parent = nullptr);
    ~purchasingPage();

private slots:
    void on_pushButton_clicked();

    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

    void on_pushButton_2_clicked();

    void on_checkBoxSilver_toggled(bool checked);

    void on_checkBoxSilver_stateChanged(int arg1);

    void on_checkBoxGold_toggled(bool checked);

    void on_checkBoxDiamond_toggled(bool checked);

    void on_checkBoxCrab_toggled(bool checked);

    void on_checkBoxUnicorn_toggled(bool checked);

private:
    Ui::purchasingPage *ui;
};

#endif // PURCHASINGPAGE_H
