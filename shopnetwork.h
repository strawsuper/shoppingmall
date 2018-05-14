#ifndef SHOPNETWORK_H
#define SHOPNETWORK_H

#include <QtNetwork/QtNetwork>
class ShopNetwork
{
public:
    ShopNetwork();
private:
    QNetworkAccessManager *manager;
    QNetworkRequest *req;
};

#endif // SHOPNETWORK_H
