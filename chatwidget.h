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
};

#endif // CHATWIDGET_H
