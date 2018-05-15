#ifndef USER_H
#define USER_H

#include <shopnetwork.h>
#include <QString>
#include <QtNetwork>
class User:public QObject
{
private:
    int phone;
    int userid;
    int password;
    QString nickname;
    bool sex;
    int age;
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
    User();
    User(int userid,int password,QString nickname="",bool sex=1,int age=0);
    void getUserFromNet();
    void sentUserToNet();
    void login();
    void uregister();
public slots:
    void handleEndOfLoginRequest(QNetworkReply* QNR);
    void handleEndOfRegisterRequest(QNetworkReply* reply);
};

#endif // USER_H
