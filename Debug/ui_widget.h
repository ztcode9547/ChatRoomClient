/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *image_label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QLabel *tip_label;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QLabel *id_label;
    QLineEdit *id_lineEdit;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *password_label;
    QLineEdit *password_lineEdit;
    QSpacerItem *verticalSpacer_2;
    QPushButton *login_pushButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_7;
    QPushButton *reg_pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(300, 450);
        image_label = new QLabel(Widget);
        image_label->setObjectName(QString::fromUtf8("image_label"));
        image_label->setGeometry(QRect(50, 10, 200, 140));
        image_label->setStyleSheet(QString::fromUtf8("border-image: url(:/image/image/123.png);"));
        image_label->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 170, 301, 287));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        tip_label = new QLabel(layoutWidget);
        tip_label->setObjectName(QString::fromUtf8("tip_label"));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        tip_label->setFont(font);
        tip_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(tip_label);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        id_label = new QLabel(layoutWidget);
        id_label->setObjectName(QString::fromUtf8("id_label"));
        id_label->setFont(font);
        id_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(id_label);

        id_lineEdit = new QLineEdit(layoutWidget);
        id_lineEdit->setObjectName(QString::fromUtf8("id_lineEdit"));
        id_lineEdit->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(id_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        password_label = new QLabel(layoutWidget);
        password_label->setObjectName(QString::fromUtf8("password_label"));
        password_label->setFont(font);

        horizontalLayout_2->addWidget(password_label);

        password_lineEdit = new QLineEdit(layoutWidget);
        password_lineEdit->setObjectName(QString::fromUtf8("password_lineEdit"));
        password_lineEdit->setMinimumSize(QSize(50, 30));

        horizontalLayout_2->addWidget(password_lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        login_pushButton = new QPushButton(layoutWidget);
        login_pushButton->setObjectName(QString::fromUtf8("login_pushButton"));
        login_pushButton->setFont(font);
        login_pushButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(login_pushButton);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        reg_pushButton = new QPushButton(layoutWidget);
        reg_pushButton->setObjectName(QString::fromUtf8("reg_pushButton"));
        reg_pushButton->setFont(font);

        verticalLayout->addWidget(reg_pushButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Qchat", nullptr));
        image_label->setText(QString());
        tip_label->setText(QString());
        id_label->setText(QApplication::translate("Widget", "\350\264\246\345\217\267\357\274\232", nullptr));
        password_label->setText(QApplication::translate("Widget", "\345\257\206\347\240\201\357\274\232", nullptr));
        login_pushButton->setText(QApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        reg_pushButton->setText(QApplication::translate("Widget", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
