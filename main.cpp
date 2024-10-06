#include "loginWidget.h"

#include <QApplication>
#include <QIcon>
#include <tcpWidget.h>
#include <chatwidget.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //chatWidget w;
    tcpWidget w;
    w.show();
    return a.exec();
}

