#ifndef SEARCHSTUDENTBYHASHMAP_H
#define SEARCHSTUDENTBYHASHMAP_H

#include <QMainWindow>

namespace Ui {
class SearchStudentByHashmap;
}

class SearchStudentByHashmap : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchStudentByHashmap(QWidget *parent = nullptr);
    ~SearchStudentByHashmap();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::SearchStudentByHashmap *ui;
};

#endif // SEARCHSTUDENTBYHASHMAP_H
