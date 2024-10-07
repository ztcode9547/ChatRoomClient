#include "loginWidget.h"
#include "ui_widget.h"
#include <QPixmap>
#include <QSize>
#include <QLabel>
#include <regWidget.h>
#include <tcpclient.h>
#include <QDebug>
loginWidget::loginWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->password_lineEdit->setEchoMode(QLineEdit::Password);
    ui->password_lineEdit->setStyleSheet("QLineEdit { "
                                         "    background-color: #E6F7FF; "        // 背景颜色
                                         "    border: 2px solid #6495ED; "          // 边框样式和颜色
                                         "    border-radius: 10px; "                // 圆角边框
                                         "    padding: 5px; "                        // 内边距
                                         "    font-size: 16px; "                    // 字体大小
                                         "    color: #333; "                         // 字体颜色
                                         "} "
                                         "QLineEdit:focus { "                        // 获取焦点时的样式
                                         "    border: 2px solid #007BFF; "          // 获取焦点时边框颜色
                                         "    background-color: #FFFFFF; "          // 获取焦点时背景颜色
                                         "} "
                                         "QLineEdit::placeholder { "                 // 占位文本样式
                                         "    color: #999; "                         // 占位文本颜色
                                         "}");
    ui->id_lineEdit->setStyleSheet("QLineEdit { "
                                   "    background-color: #E6F7FF; "        // 背景颜色
                                   "    border: 2px solid #6495ED; "          // 边框样式和颜色
                                   "    border-radius: 10px; "                // 圆角边框
                                   "    padding: 5px; "                        // 内边距
                                   "    font-size: 16px; "                    // 字体大小
                                   "    color: #333; "                         // 字体颜色
                                   "} "
                                   "QLineEdit:focus { "                        // 获取焦点时的样式
                                   "    border: 2px solid #007BFF; "          // 获取焦点时边框颜色
                                   "    background-color: #FFFFFF; "          // 获取焦点时背景颜色
                                   "} "
                                   "QLineEdit::placeholder { "                 // 占位文本样式
                                   "    color: #999; "                         // 占位文本颜色
                                   "}");
    ui->reg_pushButton->setStyleSheet("QPushButton {"
                                       "   background-color: #1e1e1e;"
                                       "   border: none;"
                                       "   color: white;"
                                       "   padding: 10px;"
                                       "   font-size: 16px;"
                                       "   border-radius: 5px;"
                                       "   min-width: 100px;"
                                       "}"
                                       "QPushButton:hover {"
                                       "   background-color: #45a049;"
                                       "}"
                                       "QPushButton:pressed {"
                                       "   background-color: #3e8e41;"
                                       "}"
                                       "QPushButton:disabled {"
                                       "   background-color: #A9A9A9;"
                                       "   color: #7D7D7D;"
                                       "}");
    ui->login_pushButton->setStyleSheet("QPushButton {"
                                       "   background-color: #1e1e1e;"
                                       "   border: none;"
                                       "   color: white;"
                                       "   padding: 10px;"
                                       "   font-size: 16px;"
                                       "   border-radius: 5px;"
                                       "   min-width: 100px;"
                                       "}"
                                       "QPushButton:hover {"
                                       "   background-color: #45a049;"
                                       "}"
                                       "QPushButton:pressed {"
                                       "   background-color: #3e8e41;"
                                       "}"
                                       "QPushButton:disabled {"
                                       "   background-color: #A9A9A9;"
                                       "   color: #7D7D7D;"
                                       "}");
    ui->tip_label->setStyleSheet("QLabel { color : red; font-size: 18px; }");
    this->setStyleSheet("background-color: #ADD8E6;");
    this->setFixedSize(300, 450); // 设置窗口的固定大小
    this->setWindowIcon(QIcon(":/image/image/QQ.png"));
    connect(ui->reg_pushButton,&QPushButton::clicked,this,&loginWidget::toRegWidget);
    connect(&tcpclient::getInstance(),&tcpclient::connectedToServer,this,&loginWidget::showTipLabel);
    connect(&tcpclient::getInstance(),&tcpclient::regWidget_to_loginWidget,this,&loginWidget::showTipLabel);
    connect(ui->login_pushButton,&QPushButton::clicked,this,&loginWidget::launchLogin);
    connect(&tcpclient::getInstance(),&tcpclient::loginRespone,this,&loginWidget::loginHandle);
}
loginWidget::~loginWidget()
{
    delete ui;
}
void loginWidget::toRegWidget()
{
    emit loginWidget_to_regWidget(signal::loginWidget_to_regWidget);
}
void loginWidget::showTipLabel(const int singalType)
{
    if(singalType==signal::connected_to_server_signal)
    {
        ui->tip_label->setText("成功连接服务器");
    }
    else if(singalType==signal::reg_sucess)
    {
        ui->tip_label->setText("注册成功");
    }
}

void loginWidget::launchLogin()
{
    if(ui->password_lineEdit->text().isEmpty()||ui->id_lineEdit->text().isEmpty())
    {
        ui->tip_label->setText("id或密码不能为空");
        return ;
    }
    QString id=ui->id_lineEdit->text();
    QString password=ui->password_lineEdit->text();
    //组成成json，然后发送
    QJsonObject jsonObject;
    jsonObject["msgid"] = msgid::LOGIN_MSG;
    jsonObject["id"] =id ;
    jsonObject["password"] = password;
    QJsonDocument jsonDocument(jsonObject);
    QString jsonString = jsonDocument.toJson(QJsonDocument::Compact);
    QByteArray byteArray = jsonString.toUtf8();
    tcpclient::getInstance().sendData(byteArray);
}
void loginWidget::loginHandle(const QJsonObject loginMessage)
{
    int erro = loginMessage["error"].toInt();
    if(erro==0)
    {
        emit loginWidget_to_chatWidget(loginMessage);
    }
    else if(erro==1)
    {
        QString erroMessage = loginMessage["errormsg"].toString();
        ui->tip_label->setText(erroMessage);
    }
}





































