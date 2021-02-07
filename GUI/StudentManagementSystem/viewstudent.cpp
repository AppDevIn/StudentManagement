#include "viewstudent.h"
#include "ui_viewstudent.h"
#include "globals.h"
#include "QMessageBox.h"

Student* student = NULL;
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

     student = Constant::trie.get(id);

    if(student != NULL){

        ui->lineEdit_name->setText(QString::fromStdString(student->name));
        ui->lineEdit_email->setText(QString::fromStdString(student->email));
        ui->lineEdit_gpa->setText(QString::number(student->gpa));
        ui->lineEdit_address->setText(QString::fromStdString(student->address));
        ui->lineEdit_class->setText(QString::fromStdString(student->tGroup));


    } else {
        QMessageBox messageBox(QMessageBox::Warning,
        tr("Warning"),
        tr("No such student ID"),
        QMessageBox::Ok,
        NULL);

        messageBox.exec();
    }
}

void ViewStudent::on_pushButton_edit_clicked()
{
    if (student){
        student->name =  ui->lineEdit_name->text().toStdString();
        student->email =  ui->lineEdit_email->text().toStdString();
        student->gpa =  ui->lineEdit_gpa->text().toDouble();
        student->address =  ui->lineEdit_email->text().toStdString();
        student->tGroup =  ui->lineEdit_class->text().toStdString();
    }
}
