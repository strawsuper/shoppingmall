#ifndef CARTVIEW_H
#define CARTVIEW_H

#include <QWidget>

namespace Ui {
class CartView;
}

class CartView : public QWidget
{
    Q_OBJECT

public:
    explicit CartView(QWidget *parent = 0);
    ~CartView();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::CartView *ui;
};

#endif // CARTVIEW_H
