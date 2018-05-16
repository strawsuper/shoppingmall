#include "urlglobal.h"

QString urlglobal::address="http://interface.cjtellyou.xyz/shopping";
QString urlglobal::addCart=address+"/cart/addCommodityToCart";
QString urlglobal::getCart=address+"/cart/getCarts";
QUrl urlglobal::url_address=QUrl("http://interface.cjtellyou.xyz/shopping");
QUrl urlglobal::url_addCart=QUrl(address+"/cart/addCommodityToCart");
QUrl urlglobal::url_getCart=QUrl(address+"/cart/getCarts");

QUrl urlglobal::url_pay=QUrl(address+"");//??????????????
