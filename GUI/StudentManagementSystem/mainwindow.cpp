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

void MainWindow::on_insert_2_clicked()
{
    search = new Search(this);
    search->show();
}

void MainWindow::on_insert_3_clicked()
{
    d = new Delete(this);
    d->show();
}

void MainWindow::on_insert_4_clicked()
{
    viewAllStudent = new ViewAllStudent();
    viewAllStudent->show();
}

void MainWindow::on_insert_6_clicked()
{
    searchHaspmap = new SearchStudentByHashmap();
    searchHaspmap->show();
}
