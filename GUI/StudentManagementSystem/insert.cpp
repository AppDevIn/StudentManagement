#include "insert.h"
#include "ui_insert.h"
#include "mainwindow.h"
#include <iostream>
#include "globals.h"





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

    std::cout << MyClass::s_count.get("123x") << std::endl;

    QString studentid, name, address, email, tGroup, gpa;

    studentid = ui->lineEdit_name->text();
    name = ui->lineEdit_name->text();
    address = ui->lineEdit_Address->text();
    email = ui->lineEdit_email->text();
    tGroup = ui->lineEdit_class->text();
    gpa = ui->lineEdit_gpa->text();

    ItemType item;
    item.id = studentid.toStdString();
    item.name = name.toStdString();
    item.address = address.toStdString();
    item.email = email.toStdString();
    item.tGroup = tGroup.toStdString();
    item.gpa = gpa.toDouble();




    MyClass::s_count.insert(item.id, item);

    std::cout << MyClass::s_count.get(item.id) << std::endl;
    std::cout << MyClass::s_count.get("123x") << std::endl;
















}
