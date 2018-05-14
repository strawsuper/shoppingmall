#include "cartview.h"
#include "ui_cartview.h"

CartView::CartView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CartView)
{
    ui->setupUi(this);
}

CartView::~CartView()
{
    delete ui;
}

void CartView::on_pushButton_2_clicked()
{

}
