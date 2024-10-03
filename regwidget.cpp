#include "regwidget.h"
#include "ui_regwidget.h"

regWidget::regWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::regWidget)
{
    ui->setupUi(this);
    this->setFixedSize(300, 450);
}

regWidget::~regWidget()
{
    delete ui;
}
