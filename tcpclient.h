#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include "global.h"
#include <QFile>
#include <QTextStream>
class tcpclient:public QObject
{
    Q_OBJECT
public:

    tcpclient();
    ~tcpclient();
    static tcpclient& getInstance();
    void connectToServer(const QString& host, quint16 port);
    void sendMessage(const QByteArray& message);
    void disconnectFromServer();
    void sendData(const QByteArray& data);//加入粘包的处理的发送函数，基于长度前缀协议
signals:
    void UserID(const QByteArray userid);
    void connectedToServer(const int singalType);
    void changeWidget(const int singalType);
    void regWidget_to_loginWidget(const int singalType);
    void loginRespone(const QJsonObject loginMessage);
    void disconnectedFromServer();
    void errorOccurred(const int singalType);
    void updateUserLists(const QJsonObject& js);
    void groupChatRes(const QJsonObject js);
    void UserName_ID(const QJsonObject js);
private slots:
    void receiveData();//加入粘包的处理的接收函数，基于长度前缀协议
    void onConnected();
    void onDisconnected();
    void onError(QAbstractSocket::SocketError socketError);
private:
    QTcpSocket* m_socket;
    void processPacket(QByteArray packet);
    void writeLogMessage(const QString &logMessage);
};

#endif // TCPCLIENT_H
