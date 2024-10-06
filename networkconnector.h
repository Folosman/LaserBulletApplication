#ifndef NETWORKCONNECTOR_H
#define NETWORKCONNECTOR_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

#include <QTcpSocket>

class NetworkConnector : public QObject
{
    Q_OBJECT
public:
    explicit NetworkConnector(QObject *parent = nullptr);
    // void replyData();
    void readData();
    ~NetworkConnector();
private:
    QTcpSocket *tcpSocket;
    QNetworkReply *reply;

    void openSocket();
signals:
};

#endif // NETWORKCONNECTOR_H
