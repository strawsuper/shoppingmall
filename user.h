#ifndef USER_H
#define USER_H

#include <shopnetwork.h>
#include <QString>
#include <QtNetwork>
#include <cart.h>
#include <urlglobal.h>
class User
{
private:
    int phone;
    int userid;
    int password;
    QString nickname;
    bool sex;
    int age;
    Cart *cart;
    int cartid;
    ShopNetwork* sn;
public:
    int getphone(){return phone;}
    int getuserid(){return userid;}
    int getpassword(){return password;}
    QString getnickname(){return nickname;}
    bool getsex(){return sex;}
    int getage(){return age;}
    void setsex(bool sex){this->sex=sex;}
    void setuserid(int userid){this->userid=userid;}
    void setpassword(int password){this->password=password;}
    void setnickname(QString nickname){this->nickname=nickname;}
    void setage(int age){this->age=age;}
    void setphone(int phone){this->phone=phone;}
    Cart* getcart(){return cart;}
    User();
    User(int userid,int password,QString nickname="",bool sex=1,int age=0);
    void getUserFromNet();
    void sentUserToNet();
    bool login();
    bool uregister();
public slots:
    void handleEndOfLoginRequest(QNetworkReply* QNR);
    void handleEndOfRegisterRequest(QNetworkReply* reply);
};

#endif // USER_H
