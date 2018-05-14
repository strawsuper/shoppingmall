#include "loginview.h"
#include "ui_loginview.h"
#include <QString>
LoginView::LoginView(QWidget *parent) :
    QWidget(parent),
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
    int userid=ui->lineEdit->text();
    int password=ui->lineEdit_2->text();
    loginuser=new user(userid,password);
    loginuser->login();
}
