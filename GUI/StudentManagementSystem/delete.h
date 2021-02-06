#ifndef DELETE_H
#define DELETE_H

#include <QMainWindow>
#include <QListWidgetItem>

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
    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::Delete *ui;
};

#endif // DELETE_H
