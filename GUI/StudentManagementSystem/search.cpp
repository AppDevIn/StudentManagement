#include "search.h"
#include "globals.h"
#include <chrono>


List searchedWords;

Search::Search(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnWidth(0,200);
    ui->tableWidget->setColumnWidth(3,300);
}

Search::~Search()
{
    delete ui;
}

void Search::on_lineEdit_textChanged(const QString &arg1)
{

        auto start = chrono::high_resolution_clock::now();

        searchedWords = Constant::trie.startsWith(arg1.toUtf8().constData());

        ui->tableWidget->clear();

        ui->tableWidget->setRowCount(searchedWords.getLength());

        ui->tableWidget->model()->setHeaderData(0,Qt::Horizontal,QStringLiteral("Name"));

        searchedWords.begin();
        for (int i = 0; i < searchedWords.getLength(); i++){

             Student s = searchedWords.next();
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

void Search::on_tableWidget_cellChanged(int row, int column)
{
}

void Search::on_tableWidget_currentItemChanged(QTableWidgetItem *current, QTableWidgetItem *previous)
{


}

void Search::on_tableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn)
{

}
