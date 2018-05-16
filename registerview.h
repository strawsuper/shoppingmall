#ifndef REGISTERVIEW_H
#define REGISTERVIEW_H

#include <QWidget>
#include <user.h>
namespace Ui {
class RegisterView;
}

class RegisterView : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterView(User *user,QWidget *parent = 0);
    ~RegisterView();


private slots:
    void on_pushButton_2_clicked();
    
private:
    Ui::RegisterView *ui;
    User* rvuser;
};

#endif // REGISTERVIEW_H
