#ifndef ORDER_H
#define ORDER_H

#include <QString>
#include <QDate>
#include <urlglobal.h>
class Order
{
private:
    int orderid;
    int uid;
    QString from_address;
    QString to_address;
    int totalprice;
    bool state;
    QDate order_date;

public:
    Order();
    void setorderid(int orderid){this->orderid=orderid;}
    void setuid(int uid){this->uid=uid;}
    void setfrom_address(QString from_address){this->from_address=from_address;}
    void setto_address(QString to_address){this->to_address=to_address;}
    void settotalprice(int totalprice){this->totalprice=totalprice;}
    void setstate(bool state){this->state=state;}
    void setorder_date(QDate order_date){this->order_date=order_date;}
    int getorderid(){return orderid;}
    int getuid(){return uid;}
    QString getfrom_address(){return from_address;}
    QString getto_address(){return to_address;}
    int gettotalprice(){return totalprice;}
    bool getstate(){return state;}
    QDate getorder_date(){return order_date;}
};

#endif // ORDER_H
