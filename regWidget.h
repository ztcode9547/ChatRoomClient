#ifndef REGWIDGET_H
#define REGWIDGET_H

#include <QWidget>

namespace Ui {
class regWidget;
}

class regWidget : public QWidget
{
    Q_OBJECT

public:
    explicit regWidget(QWidget *parent = nullptr);
    ~regWidget();
signals:
    void backLoginWidget(const int singalType);
private:
    Ui::regWidget *ui;
private slots:
    void regHandle();
    void showIDHandle(const QByteArray userid);
    void returmLogin();
public slots:
    void tipLabel();
};

#endif // REGWIDGET_H
