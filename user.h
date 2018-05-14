#ifndef USER_H
#define USER_H

#include <shopnetwork.h>
#include <QString>
#include <QtNetwork>
class User
{
private:
    int userid;
    int password;
    QString nickname;
    bool sex;
    int age;
    ShopNetwork* sn;
public:
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
    User();
    User(int userid,int password,QString nickname="",bool sex=1,int age=0);
    void getUserFromNet();
    void sentUserToNet();
    bool login();
};

#endif // USER_H
