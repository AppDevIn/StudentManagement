#ifndef INSERT_H
#define INSERT_H

#include <QMainWindow>


namespace Ui {
class Insert;
}

class Insert : public QMainWindow
{
    Q_OBJECT

public:
    explicit Insert(QWidget *parent = nullptr);
    ~Insert();

private slots:
    void on_btn_submit_clicked();

private:
    Ui::Insert *ui;

};

#endif // INSERT_H
