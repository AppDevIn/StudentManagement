#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "insert.h"
#include "viewstudent.h"
#include "search.h"
#include "delete.h"
#include "viewallstudent.h"




QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_insert_clicked();

    void on_insert_5_clicked();

    void on_insert_2_clicked();

    void on_insert_3_clicked();

    void on_insert_4_clicked();

private:
    Ui::MainWindow *ui;
    Insert *insert;
    ViewStudent *vs;
    Search *search;
    Delete *d;
    ViewAllStudent *viewAllStudent;

};
#endif // MAINWINDOW_H
