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

        ui->listWidget->clear();

        words.begin();
        for (int i = 0; i < words.getLength(); i++){

            Student s = words.next();
            string value = "Student Name: " + s.name + "\t ID: " + s.id;
            QString qstr = QString::fromStdString(value);
            ui->listWidget->addItem(qstr);
        }


}
