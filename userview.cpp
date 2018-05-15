#include "userview.h"
#include "ui_userview.h"

userview::userview(User *user,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::userview)
{


    ui->setupUi(this);
    ui->lineEdit->setEnabled(false);
}

userview::~userview()
{
    delete ui;
}
