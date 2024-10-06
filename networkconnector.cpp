#include "networkconnector.h"
#include <QDebug>

NetworkConnector::NetworkConnector(QObject *parent)
    : QObject{parent}
{
    // QNetworkAccessManager manager;
    // QUrl url("http://example.com/api/stream");
    // QNetworkRequest request(url);
    // request.setHeader("Accept", "application/json");


    // connect(reply, this, &QNetworkReply::readyRead, NetworkConnector::replyData);
    connect(tcpSocket, this, &QTcpSocket::readyRead, &NetworkConnector::readData);

    openSocket;
}

~NetworkConnector()
{
    tcpSocket->disconnectFromHost();
}

void NetworkConnector::openSocket()
{
    tcpSocket->connectToHost("IDKHOST.COM", 6666);


    // if (!(tcpSocket->open(QIODevice::ReadWrite)))
    // {
    //     qDebug() << "TCP Socket is close!";
    // }
}

// void NetworkConnector::replyData()
// {
//     reply = manager.get(request);
//     QByteArray data = reply->readAll();
// }


void NetworkConnector::readData()
{
    QByteArray data = tcpSocket->readAll();
    qDebug() << data;
}
