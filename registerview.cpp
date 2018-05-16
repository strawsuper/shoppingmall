#include "registerview.h"
#include "ui_registerview.h"

RegisterView::RegisterView(User *user,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegisterView)
{
    rvuser=user;
    ui->setupUi(this);
}

RegisterView::~RegisterView()
{
    delete ui;
}



void RegisterView::on_pushButton_2_clicked()
{
    int phone=ui->lineEdit->text().toInt();
    int password=ui->lineEdit_2->text().toInt();
    rvuser->setphone(phone);
    rvuser->setpassword(password);
    rvuser->uregister();
}
