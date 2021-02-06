#include "search.h"
#include "ui_search.h"
#include "globals.h"

Search::Search(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);
}

Search::~Search()
{
    delete ui;
}

void Search::on_lineEdit_textChanged(const QString &arg1)
{
        List words;

        words = Constant::trie.startsWith(arg1.toUtf8().constData());

        ui->tableWidget->clear();

        ui->tableWidget->setRowCount(words.getLength());

        words.begin();
        for (int i = 0; i < words.getLength(); i++){

             Student s = words.next();
            if(s.id != ""){


                QTableWidgetItem *name = new QTableWidgetItem;
                name->setText(QString::fromStdString(s.name));
                ui->tableWidget->setItem(i,0, name);

                QTableWidgetItem *id = new QTableWidgetItem;
                id->setText(QString::fromStdString(s.id));
                ui->tableWidget->setItem(i,1, id);

                QTableWidgetItem *email = new QTableWidgetItem;
                email->setText(QString::fromStdString(s.email));
                ui->tableWidget->setItem(i,2, email);


                QTableWidgetItem *address = new QTableWidgetItem;
                address->setText(QString::fromStdString(s.address));
                ui->tableWidget->setItem(i,3, address);


                QTableWidgetItem *gpa = new QTableWidgetItem;
                gpa->setText(QString::number(s.gpa, 'f', 3));
                ui->tableWidget->setItem(i,4, gpa);


                QTableWidgetItem *tGroup = new QTableWidgetItem;
                tGroup->setText(QString::fromStdString(s.tGroup));
                ui->tableWidget->setItem(i,5, tGroup);
            }
        }


}
