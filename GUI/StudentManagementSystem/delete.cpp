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





//    words = Constant::trie.startsWith(arg1.toUtf8().constData());

//    ui->listWidget->clear();

//    for (int i = 0; i < words.getLength(); i++){


//        QString qstr = QString::fromStdString(words.next()->id);
//        ui->listWidget->addItem(qstr);
//    }

}
