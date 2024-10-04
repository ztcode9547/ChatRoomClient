#include "tcplogin.h"
#include "ui_tcplogin.h"

tcplogin::tcplogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tcplogin)
{
    ui->setupUi(this);
}

tcplogin::~tcplogin()
{
    delete ui;
}
