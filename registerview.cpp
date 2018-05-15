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

}
