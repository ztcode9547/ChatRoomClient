#ifndef CHATWIDGET_H
#define CHATWIDGET_H

#include <QWidget>

namespace Ui {
class chatWidget;
}

class chatWidget : public QWidget
{
    Q_OBJECT

public:
    explicit chatWidget(QWidget *parent = nullptr);
    ~chatWidget();

private:
    Ui::chatWidget *ui;
    QString m_name;
    QString m_id;
public slots:
    void updateUserHandle(const QJsonObject& js);
private slots:
    void on_launch_pushButton_clicked();
    void groupChatHandle(const QJsonObject& js);
    void getUserName_ID(const QJsonObject& js);
    void on_picture_pushButton_clicked();
private:
    void showPicture(const QJsonObject& js);
};

#endif // CHATWIDGET_H
