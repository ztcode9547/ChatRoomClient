#include "widget.h"
#include "ui_widget.h"
#include <QPixmap>
#include <QSize>
#include <QLabel>
#include <regwidget.h>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->password_lineEdit->setEchoMode(QLineEdit::Password);
    ui->password_lineEdit->setStyleSheet("QLineEdit { "
                                         "    background-color: #E6F7FF; "        // 背景颜色
                                         "    border: 2px solid #6495ED; "          // 边框样式和颜色
                                         "    border-radius: 10px; "                // 圆角边框
                                         "    padding: 5px; "                        // 内边距
                                         "    font-size: 16px; "                    // 字体大小
                                         "    color: #333; "                         // 字体颜色
                                         "} "
                                         "QLineEdit:focus { "                        // 获取焦点时的样式
                                         "    border: 2px solid #007BFF; "          // 获取焦点时边框颜色
                                         "    background-color: #FFFFFF; "          // 获取焦点时背景颜色
                                         "} "
                                         "QLineEdit::placeholder { "                 // 占位文本样式
                                         "    color: #999; "                         // 占位文本颜色
                                         "}");
    ui->id_lineEdit->setStyleSheet("QLineEdit { "
                                   "    background-color: #E6F7FF; "        // 背景颜色
                                   "    border: 2px solid #6495ED; "          // 边框样式和颜色
                                   "    border-radius: 10px; "                // 圆角边框
                                   "    padding: 5px; "                        // 内边距
                                   "    font-size: 16px; "                    // 字体大小
                                   "    color: #333; "                         // 字体颜色
                                   "} "
                                   "QLineEdit:focus { "                        // 获取焦点时的样式
                                   "    border: 2px solid #007BFF; "          // 获取焦点时边框颜色
                                   "    background-color: #FFFFFF; "          // 获取焦点时背景颜色
                                   "} "
                                   "QLineEdit::placeholder { "                 // 占位文本样式
                                   "    color: #999; "                         // 占位文本颜色
                                   "}");
    ui->tip_label->setStyleSheet("QLabel { color : red; font-size: 18px; }");
    connect(ui->reg_pushButton,&QPushButton::clicked,this,&Widget::toRegWidget);
}
Widget::~Widget()
{
    delete ui;
}

void Widget::toRegWidget()
{
    regWidget* reg=new regWidget();
    this->hide();
    reg->show();
}

