/********************************************************************************
** Form generated from reading UI file 'chatwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWIDGET_H
#define UI_CHATWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatWidget
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QTextEdit *write_textEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *launch_pushButton;
    QTextEdit *chat_textEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *picture_pushButton;
    QPushButton *file_pushButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *file_textEdit;
    QLabel *label_2;
    QTextEdit *user_textEdit;

    void setupUi(QWidget *chatWidget)
    {
        if (chatWidget->objectName().isEmpty())
            chatWidget->setObjectName(QString::fromUtf8("chatWidget"));
        chatWidget->resize(840, 638);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/image/QQ.png"), QSize(), QIcon::Normal, QIcon::Off);
        chatWidget->setWindowIcon(icon);
        chatWidget->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(chatWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 581, 631));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        write_textEdit = new QTextEdit(widget);
        write_textEdit->setObjectName(QString::fromUtf8("write_textEdit"));
        write_textEdit->setMaximumSize(QSize(16777215, 150));

        gridLayout->addWidget(write_textEdit, 2, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        launch_pushButton = new QPushButton(widget);
        launch_pushButton->setObjectName(QString::fromUtf8("launch_pushButton"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        launch_pushButton->setFont(font);

        horizontalLayout_2->addWidget(launch_pushButton);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        chat_textEdit = new QTextEdit(widget);
        chat_textEdit->setObjectName(QString::fromUtf8("chat_textEdit"));

        gridLayout->addWidget(chat_textEdit, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        picture_pushButton = new QPushButton(widget);
        picture_pushButton->setObjectName(QString::fromUtf8("picture_pushButton"));
        picture_pushButton->setFont(font);

        horizontalLayout->addWidget(picture_pushButton);

        file_pushButton = new QPushButton(widget);
        file_pushButton->setObjectName(QString::fromUtf8("file_pushButton"));
        file_pushButton->setFont(font);

        horizontalLayout->addWidget(file_pushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        widget1 = new QWidget(chatWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(580, 0, 261, 631));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 0, 10, 10);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        file_textEdit = new QTextEdit(widget1);
        file_textEdit->setObjectName(QString::fromUtf8("file_textEdit"));

        verticalLayout->addWidget(file_textEdit);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        user_textEdit = new QTextEdit(widget1);
        user_textEdit->setObjectName(QString::fromUtf8("user_textEdit"));

        verticalLayout->addWidget(user_textEdit);


        retranslateUi(chatWidget);

        QMetaObject::connectSlotsByName(chatWidget);
    } // setupUi

    void retranslateUi(QWidget *chatWidget)
    {
        chatWidget->setWindowTitle(QApplication::translate("chatWidget", "\350\201\212\345\244\251\345\256\244", nullptr));
        launch_pushButton->setText(QApplication::translate("chatWidget", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        picture_pushButton->setText(QApplication::translate("chatWidget", "\345\217\221\351\200\201\345\233\276\347\211\207", nullptr));
        file_pushButton->setText(QApplication::translate("chatWidget", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        label->setText(QApplication::translate("chatWidget", "\346\226\207\344\273\266\344\274\240\350\276\223", nullptr));
        label_2->setText(QApplication::translate("chatWidget", "\345\234\250\347\272\277\347\224\250\346\210\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chatWidget: public Ui_chatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWIDGET_H
