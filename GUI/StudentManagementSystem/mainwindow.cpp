#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "globals.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_insert_clicked()
{
    Student tempStudent;

    tempStudent.id = "123x";
    tempStudent.name = "Jeya";
    tempStudent.email = "jeya@gmail.com";
    tempStudent.tGroup = "t01";
    tempStudent.gpa = 3.1;

    MyClass::s_count.insert("123x", tempStudent);


    std::cout << MyClass::s_count.get("123x") << std::endl;

    insert = new Insert(this);
    insert->show();
    std::cout << "Insert is clicked" << std::endl;
}
