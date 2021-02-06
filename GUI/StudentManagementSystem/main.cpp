#include "mainwindow.h"
#include <iostream>
#include <QtCore>
#include <qfile.h>
#include <QApplication>
#include "globals.h"
#include <QApplication>


void ReadJson(const QString &path){
    QFile file(path);
    if(file.open(QIODevice::ReadOnly)){
        QByteArray bytes = file.readAll();
        file.close();
        QStringList studentname;
        QJsonDocument document = QJsonDocument::fromJson(bytes);
        cout << document.isObject() << endl;
        QJsonArray studentArray = document["students"].toArray();

        for(auto s: studentArray){
            QJsonObject obj = s.toObject();
            Student student;

            student.id = obj["id"].toString().toStdString();
            student.name = obj["name"].toString().toStdString();
            student.address = obj["address"].toString().toStdString();
            student.email = obj["email"].toString().toStdString();
            student.tGroup = obj["tGroup"].toString().toStdString();
            student.gpa = obj["gpa"].toString().toDouble();

            Constant::trie.insert(student.id, student);

        }

    }

}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Student tempStudent;


    tempStudent.id = "123x";
    tempStudent.name = "Jeya";
    tempStudent.address = "Woodlands Avenue 04";
    tempStudent.email = "jeya@gmail.com";
    tempStudent.tGroup = "t01";
    tempStudent.gpa = 3.1;

    Constant::trie.insert("123x", tempStudent);

    QString path = qApp -> applicationDirPath() + "/students.json";

    ReadJson(path);





    std::cout << Constant::trie.get("123x")->name << std::endl;

    return a.exec();
}
