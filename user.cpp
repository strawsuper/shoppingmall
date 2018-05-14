#include "user.h"

User::User()
{
}
User::User(int userid,int password,QString nickname,bool sex,int age):
    userid(userid),password(password),nickname(nickname),sex(sex),age(age)
{
}

bool User::login()
{
    QNetworkRequest request(QUrl("http://example.com/exampleapi"));
    QUrl params;
    params.addQueryItem("uid",uid);
    params.addQueryItem("password",password);
    QNetworkAccessManager* manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(handleEndOfRequest(QNetworkReply*)));
    //Force Content-Type header
    request.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");
    manager->post(request, params.encodedQuery());
    while(!reply->isFinished())
    {
        qApp->processEvents();
    }
    QByteArray response_data = reply->readAll();
    QJsonDocument jsond = QJsonDocument::fromJson(response_data);

    if(jsond==1)
    {
        reply->deleteLater();
        return 1;
    }
    else{
        reply->deleteLater();
        return 0;
    }

}
