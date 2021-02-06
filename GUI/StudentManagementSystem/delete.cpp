#include "delete.h"
#include "ui_delete.h"
#include "globals.h"

list<string> words;
list<string>::iterator it;

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

    std::list<std::string>::iterator it = words.begin();
    // Advance the iterator by 2 positions,
    std::advance(it, ui->listWidget->row(item));

    std::cout << "Element = " << *it << std::endl;

    //Delete the words
    Constant::trie.remove(*it);
    ui->listWidget->clear();


}

void Delete::on_lineEdit_textChanged(const QString &arg1)
{



    words = Constant::trie.startsWith(arg1.toUtf8().constData());

    ui->listWidget->clear();

    for (it = words.begin(); it != words.end(); ++it){


        QString qstr = QString::fromStdString(*it);
        ui->listWidget->addItem(qstr);
    }
}
