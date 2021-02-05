#include "insert.h"
#include "ui_insert.h"

Insert::Insert(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Insert)
{
    ui->setupUi(this);
}

Insert::~Insert()
{
    delete ui;
}

void Insert::on_btn_submit_clicked()
{
    QString studentid, name, address, email, tGroup;



}
