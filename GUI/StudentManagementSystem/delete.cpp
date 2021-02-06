#include "delete.h"
#include "ui_delete.h"
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

void Delete::on_listWidget_itemClicked(QListWidgetItem *item)
{

    std::cout << "Element = " << words.get(ui->listWidget->currentRow())->id << std::endl;

    //Delete the words
    Constant::trie.remove(words.get(ui->listWidget->currentRow())->id);
    ui->listWidget->clear();


}

void Delete::on_lineEdit_textChanged(const QString &arg1)
{

    words = Constant::trie.startsWith(arg1.toUtf8().constData());

    ui->listWidget->clear();

    words.begin();
    for (int i = 0; i < words.getLength(); i++){

         Student s = words.next();
        if(s.id != ""){

            string value = "Student Name: " + s.name + "\t ID: " + s.id;
            QString qstr = QString::fromStdString(value);
            ui->listWidget->addItem(qstr);
        }
    }

}
