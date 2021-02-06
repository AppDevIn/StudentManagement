#include "viewstudent.h"
#include "ui_viewstudent.h"
#include "globals.h"

ViewStudent::ViewStudent(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ViewStudent)
{
    ui->setupUi(this);
}

ViewStudent::~ViewStudent()
{
    delete ui;
}

void ViewStudent::on_btn_Search_clicked()
{

}
