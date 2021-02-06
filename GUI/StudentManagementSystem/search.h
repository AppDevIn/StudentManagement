#ifndef SEARCH_H
#define SEARCH_H

#include <QMainWindow>
#include "ui_search.h"

namespace Ui {
class Search;
}

class Search : public QMainWindow
{
    Q_OBJECT

public:
    explicit Search(QWidget *parent = nullptr);
    ~Search();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_tableWidget_cellChanged(int row, int column);

    void on_tableWidget_currentItemChanged(QTableWidgetItem *current, QTableWidgetItem *previous);

    void on_tableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);

private:
    Ui::Search *ui;
};

#endif // SEARCH_H
