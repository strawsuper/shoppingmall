#ifndef CART_H
#define CART_H


class Cart
{
private:
    int cartid;
    int uid;
    int goodid;
    int amount;

public:
    void setcatrid(int cartid){this->cartid=cartid;}
    void setuid(int uid){this->uid=uid;}
    void setgoodid(int goodid){this->goodid=goodid;}
    void setamount(int amount){this->amount=amount;}
    int getcartid(){return cartid;}
    int getuid(){return uid;}
    int getamount(){return amount;}
    Cart();
};

#endif // CART_H
