#include "user.h"

User::User()
{
}
User::User(int userid,int password,QString nickname,bool sex,int age):
    userid(userid),password(password),nickname(nickname),sex(sex),age(age)
{
}

void User::handleEndOfLoginRequest(QNetworkReply* reply){
    QByteArray response_data = reply->readAll();
    QJsonDocument jsond = QJsonDocument::fromJson(response_data);

}

void User::handleEndOfRegisterRequest(QNetworkReply* reply){
    QByteArray response_data = reply->readAll();
    QJsonDocument jsond = QJsonDocument::fromJson(response_data);
    cart=new Cart(userid,cartid);//new a cart to user;
}

bool User::login()
{
    QNetworkRequest request(QUrl("http://example.com/exampleapi"));
    QUrlQuery params;
    params.addQueryItem("phone",QString::number(phone));
    params.addQueryItem("password",QString::number(password));
    QNetworkAccessManager* manager = new QNetworkAccessManager();
    //QObject::connect(manager, SIGNAL(finished(QNetworkReply*)), this , SLOT(handleEndOfLoginRequest(QNetworkReply*)));
    //Force Content-Type header
    request.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");
    QNetworkReply* reply=manager->post(request, params.query(QUrl::FullyEncoded).toUtf8());
    while(!reply->isFinished())
    {
        qApp->processEvents();
    }
}

bool User::uregister(){
    QNetworkRequest request(QUrl("http://example.com/exampleapi"));
    QUrlQuery params;
    params.addQueryItem("phone",QString::number(phone));
    params.addQueryItem("password",QString::number(password));
    QNetworkAccessManager* manager = new QNetworkAccessManager();
    //QObject::connect(manager, SIGNAL(finished(QNetworkReply*)), this , SLOT(handleEndOfRegisterRequest(QNetworkReply*)));
    //Force Content-Type header
    request.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");
    manager->post(request, params.query(QUrl::FullyEncoded).toUtf8());
//    while(!reply->isFinished())
//    {
//        qApp->processEvents();
//    }
}

