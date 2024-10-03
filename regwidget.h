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

private:
    Ui::regWidget *ui;
};

#endif // REGWIDGET_H
