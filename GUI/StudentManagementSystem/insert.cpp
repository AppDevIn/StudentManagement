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



    QString studentid, name, address, email, tGroup, gpa;

    studentid = ui->lineEdit_studentID->text();
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




    Constant::trie.insert(item.id, item);
    std::cout << "Inserted id " << item.id << " with name: " << Constant::trie.get(item.id).name << std::endl;




















}
