#include "cartview.h"
#include "ui_cartview.h"
#include <QDialog>
#include <QMessageBox>
CartView::CartView(Cart *c,QWidget *parent) :
    cart(c),QWidget(parent),
    ui(new Ui::CartView)
{
    //ui->listview->model()->insertRow(0);
    ui->setupUi(this);
    cart->getcart();
}

CartView::~CartView()
{
    delete ui;
}

void CartView::on_pushButton_2_clicked()
{

}

void CartView::on_pushButton_clicked()
{
    bool paysuccess=cart->pay();
    if(paysuccess){
       QMessageBox::information(NULL,tr("消息框"),tr("购买成功"),QMessageBox::Yes);
    }
    else
       QMessageBox::warning(NULL,tr("消息框"),tr("购买失败，请重试"),QMessageBox::Yes);
}
