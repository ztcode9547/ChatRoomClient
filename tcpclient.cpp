#include "tcpclient.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <iostream>
#include <QDateTime>
#include <QString>
#include <QDebug>
#include <QtEndian>
tcpclient::tcpclient():m_socket(new QTcpSocket())
{
    connect(m_socket, &QTcpSocket::readyRead, this, &tcpclient::receiveData);
    connect(m_socket, &QTcpSocket::connected, this, &tcpclient::onConnected);
    connect(m_socket, &QTcpSocket::disconnected, this, &tcpclient::onDisconnected);
    connect(m_socket, QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error), this, &tcpclient::onError);
}



tcpclient::~tcpclient()
{
    if (m_socket)
    {
        m_socket->deleteLater();
    }
}

tcpclient& tcpclient::getInstance()
{
    static tcpclient instance;
    return instance;
}

void tcpclient::connectToServer(const QString& host, quint16 port)
{
    m_socket->connectToHost(host, port);
}


void tcpclient::sendMessage(const QByteArray& message)
{
    if (m_socket->state() == QAbstractSocket::ConnectedState)
    {
        m_socket->write(message);
    } else {
        emit errorOccurred(signal::fail_connected_to_server_signal);
    }
}

void tcpclient::disconnectFromServer()
{
    m_socket->disconnectFromHost();
}

void tcpclient::onConnected()
{
    emit changeWidget(signal::connected_to_server_signal);
    emit connectedToServer(signal::connected_to_server_signal);
}

void tcpclient::onDisconnected()
{

    emit disconnectedFromServer();
}

void tcpclient::onError(QAbstractSocket::SocketError socketError)
{
    Q_UNUSED(socketError);
    qDebug()<<m_socket->errorString();
    emit errorOccurred(signal::fail_connected_to_server_signal);
}
void tcpclient::sendData(const QByteArray& data)
{
    writeLogMessage(QString::fromUtf8(data));
    QByteArray dataWithLength;
    // 计算数据长度并转换为字节数组
    int length = data.size();
    writeLogMessage(("发送了:"+QString::number(length)));
    int networkLength  = qToBigEndian(length);
    dataWithLength.append(reinterpret_cast<const char*>(&networkLength ), sizeof(networkLength));
    dataWithLength.append(data);
    m_socket->write(dataWithLength); // 发送数据
}

void tcpclient::receiveData()
{
    static QByteArray buffer; // 存储接收到的数据
    while (m_socket->bytesAvailable() > 0)
    {
        buffer.append(m_socket->readAll());
        while (static_cast<quint32>(buffer.size()) >= sizeof(quint32))
        {
            // 读取前4个字节以获得数据长度
            quint32 length;
            memcpy(&length, buffer.constData(), sizeof(length));

            // 检查缓冲区是否包含完整数据包
            if (static_cast<quint32>(buffer.size()) < sizeof(quint32) + length) {
                break; // 如果不够长，则等待更多数据
            }
            writeLogMessage(("接受了:"+QString::number(length)));
            // 提取完整的数据包
            QByteArray packet = buffer.mid(sizeof(quint32), length);
            writeLogMessage(QString::fromUtf8(packet));
            // 处理数据包
            processPacket(packet);
            // 移除已处理的数据
            buffer.remove(0, sizeof(quint32) + length);
        }
    }
}

void tcpclient::processPacket(QByteArray packet)
{
    //解析json
    QJsonDocument jsonDoc = QJsonDocument::fromJson(packet);
    QJsonObject jsonObject = jsonDoc.object();
    int msgid = jsonObject["msgid"].toInt();
    if(msgid==msgid::REG_MSG_RESPONE)
    {
        QString id = jsonObject["id"].toString();
        emit UserID(id.toUtf8());
        emit regWidget_to_loginWidget(signal::reg_sucess);
    }
    else if(msgid==msgid::LOGIN_MSG_RESPONE)
    {
        emit loginRespone(jsonObject);
        QJsonObject ret;
        ret["name"]=jsonObject["name"];
        ret["id"]=jsonObject["id"];
        emit UserName_ID(ret);

    }
    else if(msgid==msgid::UPDATE_USER)
    {
        emit updateUserLists(jsonObject);
    }
    else if(msgid==msgid::GROUPCHAT_RESPONE)
    {
        emit groupChatRes(jsonObject);
    }
}

void tcpclient::writeLogMessage(const QString &logMessage) {
    // 定义日志文件的路径
    QString logFilePath = "application.log";

    // 打开文件
    QFile logFile(logFilePath);
    if (logFile.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&logFile);

        // 获取当前时间
        QString currentDateTime = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
        // 写入日志信息
        out << currentDateTime << " - " << logMessage << "\n";

        // 刷新并关闭文件
        out.flush();
        logFile.close();

        qDebug() << "Log message written to" << logFilePath;
    } else {
        qCritical() << "Failed to open log file:" << logFilePath;
    }
}

