#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include "global.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class loginWidget : public QWidget
{
    Q_OBJECT

public:
    loginWidget(QWidget *parent = nullptr);
    ~loginWidget();
signals:
    void loginWidget_to_regWidget(const int singalType);
    void loginWidget_to_chatWidget(const QJsonObject js);
private:
    Ui::Widget *ui;
private slots:
    void toRegWidget();
    void showTipLabel(const int singalType);
    void launchLogin();
    void loginHandle(const QJsonObject loginMessage);
};
#endif // WIDGET_H
