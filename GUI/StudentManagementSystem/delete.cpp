#include "delete.h"
#include "globals.h"

List words;

Delete::Delete(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Delete)
{
    ui->setupUi(this);
}

Delete::~Delete()
{
    delete ui;
}

void Delete::on_lineEdit_textChanged(const QString &arg1)
{

    words = Constant::trie.startsWith(arg1.toUtf8().constData());

    ui->tableWidget->clear();

    ui->tableWidget->setRowCount(words.getLength());

    ui->tableWidget->model()->setHeaderData(0,Qt::Horizontal,QStringLiteral("Name"));

    words.begin();
    for (int i = 0; i < words.getLength(); i++){

         Student s = words.next();
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


}

void Delete::on_tableWidget_itemClicked(QTableWidgetItem *item)
{



}

void Delete::on_Delete_2_clicked()
{
    std::cout << ui->tableWidget->currentRow() << std::endl;
    Student* s = words.get(ui->tableWidget->currentRow());
    Constant::trie.remove(s->id);
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
}
