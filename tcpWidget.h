#ifndef TCPLOGIN_H
#define TCPLOGIN_H

#include <QWidget>

namespace Ui {
class tcplogin;
}

class tcplogin : public QWidget
{
    Q_OBJECT

public:
    explicit tcplogin(QWidget *parent = nullptr);
    ~tcplogin();

private:
    Ui::tcplogin *ui;
};

#endif // TCPLOGIN_H
