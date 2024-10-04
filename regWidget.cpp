#include "regwidget.h"
#include "ui_regwidget.h"

regWidget::regWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::regWidget)
{
    ui->setupUi(this);
    this->setFixedSize(300, 450);
    ui->reg_pushbutton->setStyleSheet("QPushButton {"
                                      "   background-color: #1e1e1e;"
                                      "   border: none;"
                                      "   color: white;"
                                      "   padding: 10px;"
                                      "   font-size: 16px;"
                                      "   border-radius: 5px;"
                                      "   min-width: 100px;"
                                      "}"
                                      "QPushButton:hover {"
                                      "   background-color: #45a049;"
                                      "}"
                                      "QPushButton:pressed {"
                                      "   background-color: #3e8e41;"
                                      "}"
                                      "QPushButton:disabled {"
                                      "   background-color: #A9A9A9;"
                                      "   color: #7D7D7D;"
                                      "}");
    ui->name_lineEdit->setStyleSheet("QLineEdit { "
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

}

regWidget::~regWidget()
{
    delete ui;
}
