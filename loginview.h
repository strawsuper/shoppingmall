#ifndef LOGINVIEW_H
#define LOGINVIEW_H

#include <QWidget>
#include "user.h"
namespace Ui {
class LoginView;
}

class LoginView : public QWidget
{
    Q_OBJECT

public:
    explicit LoginView(QWidget *parent = 0);
    ~LoginView();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::LoginView *ui;
    User* loginuser;
};

#endif // LOGINVIEW_H
