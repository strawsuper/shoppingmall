#ifndef CART_H
#define CART_H

#include <QVector>
#include <QPair>
#include <QObject>
#include <QtNetwork>
#include <urlglobal.h>
class Cart
{
private:

    int userid;
    int cartid;
    QVector< QPair<int,int> >goodidandamount;//QVector< QPair<good,int> >goodidandamount;
    int goodid;
    int amount;
    int totalPrice;
    int commodityCount;

public:
    void setcatrid(int cartid){this->cartid=cartid;}
    void setuid(int userid){this->userid=userid;}
    void setgoodid(int goodid){this->goodid=goodid;}
    void setamount(int amount){this->amount=amount;}
    int getcartid(){return cartid;}
    int getuserid(){return userid;}
    int getamount(){return amount;}
    void getcart();
//    Cart();
    Cart(int uid=0,int cartid=0);
    bool pay();
public slots:
    void handleEndOfgetCartRequest(QNetworkReply* QNR);
//    void handleEndOfRegisterRequest(QNetworkReply* reply);
};

#endif // CART_H
