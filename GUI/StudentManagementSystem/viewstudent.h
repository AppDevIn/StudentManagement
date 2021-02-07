#ifndef VIEWSTUDENT_H
#define VIEWSTUDENT_H

#include <QMainWindow>

namespace Ui {
class ViewStudent;
}

class ViewStudent : public QMainWindow
{
    Q_OBJECT

public:
    explicit ViewStudent(QWidget *parent = nullptr);
    ~ViewStudent();

private slots:
    void on_btn_Search_clicked();

    void on_pushButton_edit_clicked();

private:
    Ui::ViewStudent *ui;
};

#endif // VIEWSTUDENT_H
