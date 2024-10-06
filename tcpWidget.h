#ifndef TCPWIDGET_H
#define TCPWIDGET_H

#include <QWidget>
#include "loginWidget.h"
#include "regWidget.h"
#include <chatwidget.h>
namespace Ui {
class tcplogin;
}

class tcpWidget : public QWidget
{
    Q_OBJECT

public:
    explicit tcpWidget(QWidget *parent = nullptr);
    ~tcpWidget();
private:
    Ui::tcplogin *ui;
    loginWidget* _loginWidget;
    regWidget* _regWidget;
    chatWidget* _chatWidget;

signals:
    void changeRegWidgetTip();
    void updateUserLists(const QJsonArray& ret);
private slots:
    void loginServer();
    void signalHandle(const int singalType);
    void toChatWidget(const QJsonArray ret);
};

#endif
