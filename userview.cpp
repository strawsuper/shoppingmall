#include "userview.h"
#include "ui_userview.h"

userview::userview(User *user,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::userview)
{


    ui->setupUi(this);
    ui->lineEdit->setEnabled(false);
    ui->lineEdit_2->setEnabled(false);
    ui->lineEdit_4->setEnabled(false);
    ui->lineEdit_5->setEnabled(false);
//    ui->lineEdit->setEnabled(false);
}

userview::~userview()
{
    delete ui;
}

void userview::on_pushButton_2_clicked()
{
    ui->lineEdit->setEnabled(true);
    ui->lineEdit_2->setEnabled(true);
    ui->lineEdit_4->setEnabled(true);
    ui->lineEdit_5->setEnabled(true);
}
