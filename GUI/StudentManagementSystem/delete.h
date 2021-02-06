#ifndef DELETE_H
#define DELETE_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "ui_delete.h"

namespace Ui {
class Delete;
}

class Delete : public QMainWindow
{
    Q_OBJECT

public:
    explicit Delete(QWidget *parent = nullptr);
    ~Delete();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_tableWidget_itemClicked(QTableWidgetItem *item);

    void on_Delete_2_clicked();

private:
    Ui::Delete *ui;
};

#endif // DELETE_H
