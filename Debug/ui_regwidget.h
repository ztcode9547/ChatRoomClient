/********************************************************************************
** Form generated from reading UI file 'regwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGWIDGET_H
#define UI_REGWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regWidget
{
public:
    QLabel *label;
    QLabel *tip_label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *name_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *password_lineEdit;
    QPushButton *reg_pushbutton;
    QPushButton *back_pushButton;

    void setupUi(QWidget *regWidget)
    {
        if (regWidget->objectName().isEmpty())
            regWidget->setObjectName(QString::fromUtf8("regWidget"));
        regWidget->resize(300, 450);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/image/QQ.png"), QSize(), QIcon::Normal, QIcon::Off);
        regWidget->setWindowIcon(icon);
        regWidget->setStyleSheet(QString::fromUtf8("background-color: #ADD8E6;"));
        label = new QLabel(regWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 301, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        tip_label = new QLabel(regWidget);
        tip_label->setObjectName(QString::fromUtf8("tip_label"));
        tip_label->setGeometry(QRect(10, 100, 281, 91));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        tip_label->setFont(font1);
        tip_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        tip_label->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(regWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 194, 261, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setPointSize(17);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        name_lineEdit = new QLineEdit(layoutWidget);
        name_lineEdit->setObjectName(QString::fromUtf8("name_lineEdit"));
        name_lineEdit->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(name_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        password_lineEdit = new QLineEdit(layoutWidget);
        password_lineEdit->setObjectName(QString::fromUtf8("password_lineEdit"));
        password_lineEdit->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(password_lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        reg_pushbutton = new QPushButton(layoutWidget);
        reg_pushbutton->setObjectName(QString::fromUtf8("reg_pushbutton"));
        reg_pushbutton->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(reg_pushbutton);

        back_pushButton = new QPushButton(regWidget);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));
        back_pushButton->setGeometry(QRect(0, 0, 30, 30));
        back_pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/image/back.png);"));

        retranslateUi(regWidget);

        QMetaObject::connectSlotsByName(regWidget);
    } // setupUi

    void retranslateUi(QWidget *regWidget)
    {
        regWidget->setWindowTitle(QApplication::translate("regWidget", "\346\263\250\345\206\214", nullptr));
        label->setText(QApplication::translate("regWidget", "\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        tip_label->setText(QApplication::translate("regWidget", "\345\220\215\345\255\227\345\273\272\350\256\256\344\275\277\347\224\250\350\213\261\346\226\207\357\274\214\345\233\240\344\270\272\344\270\255\346\226\207json\350\247\243\346\236\220\345\217\257\350\203\275\344\274\232\345\207\272\351\224\231", nullptr));
        label_2->setText(QApplication::translate("regWidget", "\345\220\215\345\255\227\357\274\232", nullptr));
        label_3->setText(QApplication::translate("regWidget", "\345\257\206\347\240\201\357\274\232", nullptr));
        reg_pushbutton->setText(QApplication::translate("regWidget", "\346\263\250\345\206\214", nullptr));
        back_pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class regWidget: public Ui_regWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGWIDGET_H
