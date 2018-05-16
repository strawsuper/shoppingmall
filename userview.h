#ifndef USERVIEW_H
#define USERVIEW_H

#include <QWidget>
#include <user.h>
namespace Ui {
class userview;
}

class userview : public QWidget
{
    Q_OBJECT

public:
    explicit userview(User *user,QWidget *parent = 0);
    ~userview();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::userview *ui;
};

#endif // USERVIEW_H
