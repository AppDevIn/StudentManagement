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
            Constant::dictionary.add(student.id, student);



        }

    }

}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QString path = qApp -> applicationDirPath() + "/students.json";

    ReadJson(path);


    return a.exec();
}
