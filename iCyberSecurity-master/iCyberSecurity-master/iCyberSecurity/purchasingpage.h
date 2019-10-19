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

private:
    Ui::purchasingPage *ui;
};

#endif // PURCHASINGPAGE_H
