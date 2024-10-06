#include "tcpWidget.h"
#include "ui_tcplogin.h"
#include<loginWidget.h>
#include "global.h"
#include <QTcpSocket>
#include "tcpclient.h"

tcpWidget::tcpWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tcplogin)
{

    ui->setupUi(this);
    this->setFixedSize(420,320);
    this->setWindowIcon(QIcon(":/image/image/QQ.png"));
    ui->IP_edit->setStyleSheet("QLineEdit { "
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
    ui->port_lineEdit->setStyleSheet("QLineEdit { "
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
    _loginWidget=new loginWidget();
    _regWidget=new regWidget();
    _chatWidget=new chatWidget();
    connect(ui->login_pushButton,&QPushButton::clicked,this,&tcpWidget::loginServer);
    connect(&tcpclient::getInstance(),&tcpclient::changeWidget,this,&tcpWidget::signalHandle);
    connect(&tcpclient::getInstance(),&tcpclient::errorOccurred,this,&tcpWidget::signalHandle);
    connect(_loginWidget,&loginWidget::loginWidget_to_regWidget,this,&tcpWidget::signalHandle);
    connect(&tcpclient::getInstance(),&tcpclient::regWidget_to_loginWidget,this,&tcpWidget::signalHandle);
    connect(_regWidget,&regWidget::backLoginWidget,this,&tcpWidget::signalHandle);
    connect(this,&tcpWidget::changeRegWidgetTip,_regWidget,&regWidget::tipLabel);
    connect(_loginWidget,&loginWidget::loginWidget_to_chatWidget,this,&tcpWidget::toChatWidget);
    connect(this,&tcpWidget::updateUserLists,_chatWidget,&chatWidget::updateUserHandle);
}

tcpWidget::~tcpWidget()
{
    delete ui;
}
void tcpWidget::loginServer()
{
    QString ip=ui->IP_edit->text();
    quint16 port=ui->port_lineEdit->text().toUShort();
    tcpclient::getInstance().connectToServer(ip,port);
}


void tcpWidget::signalHandle(const int singalType)
{
    switch (singalType)
    {
    case signal::connected_to_server_signal:
        _loginWidget->show();
        this->hide();
        break;

    case signal::fail_connected_to_server_signal:
        ui->tip_label->setText("连接服务器失败");
        break;

    case signal::loginWidget_to_regWidget:
        _regWidget->show();
        _loginWidget->hide();
        emit changeRegWidgetTip();
        break;

    case signal::reg_sucess:
        _loginWidget->show();
        _regWidget->hide();
        break;

    case signal::regWidget_back_loginWidget:
        _loginWidget->show();
        _regWidget->hide();
        break;

    default:
        // 处理未匹配的情况
        break;
    }
}

void tcpWidget::toChatWidget(const QJsonArray ret)
{
    _chatWidget->show();
    _loginWidget->hide();
    emit updateUserLists(ret);
}



















