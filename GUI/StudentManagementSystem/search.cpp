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
        list<string> words;
        list<string>::iterator it;

        words = Constant::trie.startsWith(arg1.toUtf8().constData());

        ui->listWidget->clear();

        for (it = words.begin(); it != words.end(); ++it){


            QString qstr = QString::fromStdString(*it);
            ui->listWidget->addItem(qstr);
        }

}
