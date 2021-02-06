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

    string id = ui->lineEdit_input->text().toStdString();

    cout << "ID searched: " << id << endl;

    Student student = Constant::trie.get(id);

    std::cout << "Information recieved from id " << id << " with name "  <<  student.name << std::endl;

    ui->label_name->setText(QString::fromStdString(student.name));
    ui->label_email->setText(QString::fromStdString(student.email));
    ui->label_gpa->setText(QString::number(student.gpa));
    ui->label_address->setText(QString::fromStdString(student.address));
    ui->label_class->setText(QString::fromStdString(student.tGroup));

}
