#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginview.h"
//#include "ui_loginview.h"
#include "registerview.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    user=new User();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_triggered()
{
    loginview=new LoginView(user);
    loginview->show();

}

void MainWindow::on_action_3_triggered()
{

}

void MainWindow::on_action_4_triggered()
{
    uv=new userview(user);
    uv->show();
}

void MainWindow::on_action_2_triggered()
{
    rv=new RegisterView(user);
    rv->show();
}
