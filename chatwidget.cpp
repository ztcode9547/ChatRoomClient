#include "chatwidget.h"
#include "ui_chatwidget.h"
#include "tcpclient.h"
#include "QJsonArray"
#include "QJsonObject"
#include <QDateTime>
#include <QMessageBox>
#include <QFileDialog>
chatWidget::chatWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chatWidget)
{
    ui->setupUi(this);
    this->setFixedSize(840,632);
    QFont font("Arial", 15);
    ui->user_textEdit->setFont(font);
    QFont font1("Arial", 14);
    ui->chat_textEdit->setFont(font1);
    ui->write_textEdit->setFont(font1);
    // 设置加粗
    ui->user_textEdit->setFontWeight(QFont::Bold);
    connect(&tcpclient::getInstance(),&tcpclient::updateUserLists,this,&chatWidget::updateUserHandle);
    connect(&tcpclient::getInstance(),&tcpclient::groupChatRes,this,&chatWidget::groupChatHandle);
    connect(&tcpclient::getInstance(),&tcpclient::UserName_ID,this,&chatWidget::getUserName_ID);
}

chatWidget::~chatWidget()
{
    delete ui;
}


void chatWidget::updateUserHandle(const QJsonObject& js)
{
    ui->user_textEdit->clear();
    QJsonArray onlineUsers=js["onlineuser"].toArray();
    for(auto onlineUser: onlineUsers)
    {
        QJsonObject user=onlineUser.toObject();
        QString name=user["name"].toString();
        QString id=user["id"].toString();
        QString name_id=name+QString("(")+id+QString(")");
        ui->user_textEdit->append(name_id);
    }
}


void chatWidget::on_launch_pushButton_clicked()
{
    if(ui->write_textEdit->toPlainText() != "") {
        QJsonObject jsonObject;
        jsonObject["msgid"] = msgid::GROUPCHAT;
        jsonObject["time"]=QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
        jsonObject["fromid"] =m_id;
        jsonObject["from"]=m_name;
        jsonObject["type"]="plain";
        jsonObject["message"]=ui->write_textEdit->toPlainText();
        QJsonDocument jsonDocument(jsonObject);
        QString jsonString = jsonDocument.toJson(QJsonDocument::Compact);
        QByteArray byteArray = jsonString.toUtf8();
        tcpclient::getInstance().sendData(byteArray);
        ui->write_textEdit->setText("");
        QString format = "[%1] %2\n%3";
        ui->chat_textEdit->append(format.arg(jsonObject["time"].toString("yyyy-MM-dd hh:mm:ss")).arg(QString("我")).arg(jsonObject["message"].toString()));
    }
    else
    {
        QMessageBox::critical(NULL, "聊天室", "请输入要发送的消息！");
    }
}

void chatWidget::groupChatHandle(const QJsonObject& js)
{
    if(js["type"].toString() == "plain")
    {
        QString format = "[%1] %2\n%3";
        ui->chat_textEdit->append(format.arg(js["time"].toString("yyyy-MM-dd hh:mm:ss")).arg(js["from"].toString()).arg(js["message"].toString()));
    }
    else if(js["type"].toString() == "picture")
    {
        QString format = "[%1] %2\n";
        ui->chat_textEdit->append(format.arg(js["time"].toString("yyyy-MM-dd hh:mm:ss")).arg(js["from"].toString()));
        QPixmap imagePixmap;
        if (imagePixmap.loadFromData(QByteArray::fromBase64(js["message"].toString().toUtf8()))) {
            QImage image = imagePixmap.toImage();
            QTextDocument *textDocument = ui->chat_textEdit->document();
            textDocument->addResource(QTextDocument::ImageResource, QUrl("[图片]"), QVariant(image));

            QTextCursor cursor = ui->chat_textEdit->textCursor();
            QTextImageFormat imageFormat;

            // 动态调整大小
            int maxWidth = ui->chat_textEdit->width() - 20; // 留出一些边距
            double scaleFactor = qMin(0.5, static_cast<double>(maxWidth) / image.width());

            imageFormat.setWidth(image.width() * scaleFactor);
            imageFormat.setHeight(image.height() * scaleFactor);
            imageFormat.setName("[图片]");
            cursor.insertImage(imageFormat);
        } else
        {
            ui->chat_textEdit->append("[图片] 无法加载");
        }
    }
}


void chatWidget::getUserName_ID(const QJsonObject& js)
{
    m_name=js["name"].toString();
    m_id=js["id"].toString();
}


void chatWidget::on_picture_pushButton_clicked()
{
    QString arg = "";
    QString picturePath = QFileDialog::getOpenFileName(this, "Open File", "", "Images(*.png *.jpg *.jpeg *.bmp *.gif);", &arg);
    if(picturePath != "")
    {
        QFile file(picturePath);
        if(!file.open(QIODevice::ReadOnly | QIODevice::Truncate))
        {
            return;
        }
        QByteArray fileValue = file.readAll();
        file.close();
        QString fileBase64 = QString(fileValue.toBase64());
        QJsonObject jsonObject;
        jsonObject["msgid"] = msgid::GROUPCHAT;
        jsonObject["time"]=QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
        jsonObject["fromid"] =m_id;
        jsonObject["from"]=m_name;
        jsonObject["type"]="picture";
        jsonObject["message"]=fileBase64;
        QJsonDocument jsonDocument(jsonObject);
        QString jsonString = jsonDocument.toJson(QJsonDocument::Compact);
        QByteArray byteArray = jsonString.toUtf8();
        tcpclient::getInstance().sendData(byteArray);
        showPicture(jsonObject);
    }
}

void chatWidget::showPicture(const QJsonObject& js)
{
    QString format = "[%1] %2\n";
    ui->chat_textEdit->append(format.arg(js["time"].toString("yyyy-MM-dd hh:mm:ss")).arg(QString("我")));
    QPixmap imagePixmap;
    if (imagePixmap.loadFromData(QByteArray::fromBase64(js["message"].toString().toUtf8()))) {
        QImage image = imagePixmap.toImage();
        QTextDocument *textDocument = ui->chat_textEdit->document();
        textDocument->addResource(QTextDocument::ImageResource, QUrl("[图片]"), QVariant(image));

        QTextCursor cursor = ui->chat_textEdit->textCursor();
        QTextImageFormat imageFormat;

        // 动态调整大小
        int maxWidth = ui->chat_textEdit->width() - 20; // 留出一些边距
        double scaleFactor = qMin(0.5, static_cast<double>(maxWidth) / image.width());

        imageFormat.setWidth(image.width() * scaleFactor);
        imageFormat.setHeight(image.height() * scaleFactor);
        imageFormat.setName("[图片]");
        cursor.insertImage(imageFormat);
    } else
    {
        ui->chat_textEdit->append("[图片] 无法加载");
    }
}

