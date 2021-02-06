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

    Constant::trie.insert("123x", tempStudent);


    std::cout << Constant::trie.get("123x") << std::endl;

    insert = new Insert(this);
    insert->show();
    std::cout << "Insert is clicked" << std::endl;
}

//View student click
void MainWindow::on_insert_5_clicked()
{
    vs = new ViewStudent(this);
    vs->show();
}
