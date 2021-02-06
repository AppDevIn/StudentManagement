#include "saerch.h"
#include "ui_saerch.h"

Saerch::Saerch(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Saerch)
{
    ui->setupUi(this);
}

Saerch::~Saerch()
{
    delete ui;
}
