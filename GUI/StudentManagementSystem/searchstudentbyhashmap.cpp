#include "searchstudentbyhashmap.h"
#include "ui_searchstudentbyhashmap.h"
#include "globals.h"
#include <chrono>


List dictWords;
SearchStudentByHashmap::SearchStudentByHashmap(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchStudentByHashmap)
{
    ui->setupUi(this);

}

SearchStudentByHashmap::~SearchStudentByHashmap()
{
    delete ui;
}

void SearchStudentByHashmap::on_lineEdit_textChanged(const QString &arg1)
{

    auto start = chrono::high_resolution_clock::now();


    dictWords = Constant::dictionary.getByPrefix(arg1.toUtf8().constData());

    ui->tableWidget->clear();

    ui->tableWidget->setRowCount(dictWords.getLength());

    ui->tableWidget->model()->setHeaderData(0,Qt::Horizontal,QStringLiteral("Name"));

    dictWords.begin();
    for (int i = 0; i < dictWords.getLength(); i++){

         Student s = dictWords.next();
        if(s.id != ""){


            QTableWidgetItem *name = new QTableWidgetItem;
            name->setText(QString::fromStdString(s.name));
            name->setFlags(name->flags() ^ Qt::ItemIsEditable);
            ui->tableWidget->setItem(i,0, name);

            QTableWidgetItem *id = new QTableWidgetItem;
            id->setText(QString::fromStdString(s.id));
            id->setFlags(id->flags() ^ Qt::ItemIsEditable);
            ui->tableWidget->setItem(i,1, id);

            QTableWidgetItem *email = new QTableWidgetItem;
            email->setText(QString::fromStdString(s.email));
            email->setFlags(email->flags() ^ Qt::ItemIsEditable);
            ui->tableWidget->setItem(i,2, email);


            QTableWidgetItem *address = new QTableWidgetItem;
            address->setText(QString::fromStdString(s.address));
            address->setFlags(address->flags() ^ Qt::ItemIsEditable);
            ui->tableWidget->setItem(i,3, address);
            ui->tableWidget->setColumnWidth(3,300);


            QTableWidgetItem *gpa = new QTableWidgetItem;
            gpa->setText(QString::number(s.gpa, 'f', 3));
            gpa->setFlags(gpa->flags() ^ Qt::ItemIsEditable);
            ui->tableWidget->setItem(i,4, gpa);


            QTableWidgetItem *tGroup = new QTableWidgetItem;
            tGroup->setText(QString::fromStdString(s.tGroup));
            tGroup->setFlags(tGroup->flags() ^ Qt::ItemIsEditable);
            ui->tableWidget->setItem(i,5, tGroup);
        }
    }

    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

    double sec = double(duration.count())/100000;
    ui->label_time->setText("ms: " + QString::fromStdString(to_string(sec)));
    ui->label_time->setStyleSheet("QLabel { color : red; }");



}
