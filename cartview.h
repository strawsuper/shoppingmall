#ifndef CARTVIEW_H
#define CARTVIEW_H

#include <QWidget>
#include <cart.h>
namespace Ui {
class CartView;
}

class CartView : public QWidget
{
    Q_OBJECT

public:
    explicit CartView(Cart *c,QWidget *parent = 0);
    ~CartView();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::CartView *ui;
    Cart *cart;
};

#endif // CARTVIEW_H
