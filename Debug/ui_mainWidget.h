/********************************************************************************
** Form generated from reading UI file 'mainWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tcplogin
{
public:
    QPushButton *login_pushButton;
    QLabel *tip_label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *IP_edit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *port_lineEdit;

    void setupUi(QWidget *tcplogin)
    {
        if (tcplogin->objectName().isEmpty())
            tcplogin->setObjectName(QString::fromUtf8("tcplogin"));
        tcplogin->resize(420, 320);
        tcplogin->setStyleSheet(QString::fromUtf8("background-color:#ADD8E6;"));
        login_pushButton = new QPushButton(tcplogin);
        login_pushButton->setObjectName(QString::fromUtf8("login_pushButton"));
        login_pushButton->setGeometry(QRect(100, 250, 241, 51));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        login_pushButton->setFont(font);
        tip_label = new QLabel(tcplogin);
        tip_label->setObjectName(QString::fromUtf8("tip_label"));
        tip_label->setGeometry(QRect(100, 190, 201, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        tip_label->setFont(font1);
        tip_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        tip_label->setAlignment(Qt::AlignCenter);
        widget = new QWidget(tcplogin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 20, 281, 71));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        IP_edit = new QLineEdit(widget);
        IP_edit->setObjectName(QString::fromUtf8("IP_edit"));
        IP_edit->setMinimumSize(QSize(40, 40));
        IP_edit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border: 1px solid gray;//\350\276\271\346\241\206\n"
"border-radius: 4px;//\350\276\271\346\241\206\345\234\206\350\247\222\n"
"padding: 0 8px;//\345\206\205\345\256\271\344\270\216\350\276\271\346\241\206\350\267\235\347\246\273\n"
"background: white;//\350\203\214\346\231\257\351\242\234\350\211\262\n"
"selection-background-color: darkgray;//\346\211\200\351\200\211\345\206\205\345\256\271\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\n"
"}\n"
"QTextEdit, QListView\n"
"{\n"
"background-color: white;\n"
"background-image: url(draft.png);\n"
"background-attachment: fixed;//\350\203\214\346\231\257\345\233\276\347\211\207\347\233\270\345\257\271\350\247\206\345\217\243\346\230\257\345\233\272\345\256\232\347\232\204\350\277\230\346\230\257\346\273\232\345\212\250\347\232\204\n"
"}\n"
"\n"
"QLineEdit[echoMode=\342\200\2342\342\200\235] //\345\261\236\346\200\247\351\200\211\346\213\251\345\231\250\357\274\214\345\217\252\345\257\271echoMode=2\347\232\204\345\257\271\350\261\241\346"
                        "\211\215\346\234\211\344\275\234\347\224\250\n"
"{\n"
"lineedit-password-character: 9679;\n"
"}\n"
"QLineEdit:read-only //\345\217\252\350\257\273\347\212\266\346\200\201\n"
"{\n"
"background: lightblue;\n"
"}\n"
""));

        horizontalLayout->addWidget(IP_edit);

        widget1 = new QWidget(tcplogin);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(80, 110, 281, 61));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        port_lineEdit = new QLineEdit(widget1);
        port_lineEdit->setObjectName(QString::fromUtf8("port_lineEdit"));
        port_lineEdit->setMinimumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(port_lineEdit);


        retranslateUi(tcplogin);

        QMetaObject::connectSlotsByName(tcplogin);
    } // setupUi

    void retranslateUi(QWidget *tcplogin)
    {
        tcplogin->setWindowTitle(QApplication::translate("tcplogin", "\347\231\273\345\275\225\346\234\215\345\212\241\345\231\250", nullptr));
        login_pushButton->setText(QApplication::translate("tcplogin", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
        tip_label->setText(QString());
        label->setText(QApplication::translate("tcplogin", "IP\357\274\232", nullptr));
        label_2->setText(QApplication::translate("tcplogin", "\347\253\257\345\217\243\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tcplogin: public Ui_tcplogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
