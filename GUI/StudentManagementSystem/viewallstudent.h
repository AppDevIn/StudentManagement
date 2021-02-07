#ifndef VIEWALLSTUDENT_H
#define VIEWALLSTUDENT_H

#include <QMainWindow>
#include "globals.h"

namespace Ui {
class ViewAllStudent;
}

class ViewAllStudent : public QMainWindow
{
    Q_OBJECT

public:
    explicit ViewAllStudent(QWidget *parent = nullptr);
    ~ViewAllStudent();

private slots:
    void on_pushButton_name_clicked();

private:
    Ui::ViewAllStudent *ui;
    void update(List searchedWords);
};

#endif // VIEWALLSTUDENT_H
