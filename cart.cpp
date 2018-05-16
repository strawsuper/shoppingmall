#include "cart.h"

//Cart::Cart()
//{

//}

Cart::Cart(int uid, int cid):
    userid(uid),cartid(cid)
{
}



bool Cart::pay(){
    QNetworkRequest request(urlglobal::url_pay);
    QUrlQuery params;
    params.addQueryItem("cartid",QString::number(cartid));
    params.addQueryItem("userid",QString::number(userid));
    QNetworkAccessManager* manager = new QNetworkAccessManager();
    //QObject::connect(manager, SIGNAL(finished(QNetworkReply*)), this , SLOT(handleEndOfPayRequest(QNetworkReply*)));
    //Force Content-Type header
    request.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");
    QNetworkReply* reply=manager->post(request, params.query(QUrl::FullyEncoded).toUtf8());
    while(!reply->isFinished())
    {
        qApp->processEvents();
    }
}
void Cart::handleEndOfgetCartRequest(QNetworkReply* reply){

}

void Cart::getcart(){
    QNetworkRequest request(urlglobal::url_getCart);
    QUrlQuery params;
//    params.addQueryItem("cartid",QString::number(cartid));
    //params.addQueryItem("userId",QString::number(userid));
    params.addQueryItem("userId","5");
    QNetworkAccessManager* manager = new QNetworkAccessManager();
    //QObject::connect(manager, SIGNAL(finished(QNetworkReply*)), this , SLOT(handleEndOfgetCartRequest(QNetworkReply*)));
    //Force Content-Type header
    request.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");
    QNetworkReply* reply=manager->post(request, params.query(QUrl::FullyEncoded).toUtf8());
    while(!reply->isFinished())
    {
        qApp->processEvents();
    }
    QByteArray response_data = reply->readAll();
    QJsonParseError error;
    QJsonDocument jsonDocument = QJsonDocument::fromJson(response_data, &error);
    if (error.error == QJsonParseError::NoError) {
        if (jsonDocument.isObject()) {
            QJsonObject result=jsonDocument.object();
            QJsonValue data=result.value(QString("data"));
            qDebug()<<data;
        }
    } else {
        qFatal(error.errorString().toUtf8().constData());
        exit(1);
    }
}
