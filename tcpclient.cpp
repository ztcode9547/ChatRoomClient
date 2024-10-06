#include "tcpclient.h"

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
    QByteArray dataWithLength;
    // 计算数据长度并转换为字节数组
    quint32 length = data.size();
    dataWithLength.append(reinterpret_cast<const char*>(&length), sizeof(length));
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

            // 提取完整的数据包
            QByteArray packet = buffer.mid(sizeof(quint32), length);
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
    }
    else if(msgid==msgid::UPDATE_USER)
    {
        QJsonArray ret=jsonObject["onlineuser"].toArray();
        emit updateUserLists(ret);
    }
}






