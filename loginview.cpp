#include "loginview.h"
#include "ui_loginview.h"
#include <QString>
LoginView::LoginView(User *user,QWidget *parent) :
    loginuser(user),QWidget(parent),
    ui(new Ui::LoginView)
{
    ui->setupUi(this);
}

LoginView::~LoginView()
{
    delete ui;
}

void LoginView::on_pushButton_2_clicked()
{
    int phone=ui->lineEdit->text().toInt();
    int password=ui->lineEdit_2->text().toInt();
    loginuser->setphone(phone);
    loginuser->setpassword(password);
    bool loginsuccess=loginuser->login();
    if(loginsuccess){

    }
    else
    {

    }
}
