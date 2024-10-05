#include "chatwidget.h"
#include "ui_chatwidget.h"

chatWidget::chatWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chatWidget)
{
    ui->setupUi(this);
}

chatWidget::~chatWidget()
{
    delete ui;
}
