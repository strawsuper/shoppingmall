#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginview.h"
//#include "ui_loginview.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_triggered()
{
    loginview=new LoginView();
    loginview->show();
}

void MainWindow::on_action_3_triggered()
{

}
