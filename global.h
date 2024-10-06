#ifndef GLOBAL_H
#define GLOBAL_H
#include "QString"
#include "QDebug"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
enum signal
{
    connected_to_server_signal=1,
    fail_connected_to_server_signal,
    reg_sucess,
    loginWidget_to_regWidget,
    regWidget_back_loginWidget,
    login_sucess,
    loginWidget_to_chatWidget
};

enum msgid
{
    LOGIN_MSG=1,
    LOGIN_MSG_RESPONE,
    REG_MSG,
    REG_MSG_RESPONE,
    GROUPCHAT,
    GROUPCHAT_RESPONE,
    UPDATE_USER,
};




#endif // GLOBAL_H


