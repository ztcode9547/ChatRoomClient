#include "widget.h"

#include <QApplication>
#include <QIcon>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setStyleSheet("background-color: #ADD8E6;");
    w.setFixedSize(300, 450); // 设置窗口的固定大小
    w.setWindowIcon(QIcon(":/image/image/QQ.png"));
    w.show();

    return a.exec();
}
