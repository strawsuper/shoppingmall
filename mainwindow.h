#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <loginview.h>
#include <userview.h>
#include <user.h>
#include <registerview.h>
#include <cart.h>
#include <cartview.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_triggered();

    void on_action_3_triggered();

    void on_action_4_triggered();

    void on_action_2_triggered();

private:
    Ui::MainWindow *ui;
    LoginView *loginview;
    userview* uv;
    User *user;
    RegisterView* rv;
//    Cart *cart;
    CartView * cv;
};

#endif // MAINWINDOW_H
