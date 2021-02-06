#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "insert.h"
#include "viewstudent.h"




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

private:
    Ui::MainWindow *ui;
    Insert *insert;
    ViewStudent *vs;

};
#endif // MAINWINDOW_H
