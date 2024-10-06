#include "chatwidget.h"
#include "ui_chatwidget.h"
#include "tcpclient.h"
#include "QJsonArray"
#include "QJsonObject"
chatWidget::chatWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chatWidget)
{
    ui->setupUi(this);
    this->setFixedSize(840,632);
    QFont font("Arial", 15);
    ui->user_textEdit->setFont(font);
    // 设置加粗
    ui->user_textEdit->setFontWeight(QFont::Bold);
    connect(&tcpclient::getInstance(),&tcpclient::updateUserLists,this,&chatWidget::updateUserHandle);

}

chatWidget::~chatWidget()
{
    delete ui;
}


void chatWidget::updateUserHandle(const QJsonArray& ret)
{
    ui->user_textEdit->clear();
    QJsonArray onlineUsers=ret;
    for(auto onlineUser: onlineUsers)
    {
        QJsonObject user=onlineUser.toObject();
        QString name=user["name"].toString();
        QString id=user["id"].toString();
        QString name_id=name+QString("(")+id+QString(")");
        ui->user_textEdit->append(name_id);
    }
}
