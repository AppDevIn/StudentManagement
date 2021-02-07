/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *insert;
    QPushButton *insert_2;
    QPushButton *insert_3;
    QPushButton *insert_4;
    QPushButton *insert_5;
    QPushButton *insert_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(802, 725);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 781, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        insert = new QPushButton(centralwidget);
        insert->setObjectName(QString::fromUtf8("insert"));
        insert->setGeometry(QRect(200, 130, 391, 61));
        insert_2 = new QPushButton(centralwidget);
        insert_2->setObjectName(QString::fromUtf8("insert_2"));
        insert_2->setGeometry(QRect(200, 290, 391, 61));
        insert_3 = new QPushButton(centralwidget);
        insert_3->setObjectName(QString::fromUtf8("insert_3"));
        insert_3->setGeometry(QRect(200, 450, 391, 61));
        insert_4 = new QPushButton(centralwidget);
        insert_4->setObjectName(QString::fromUtf8("insert_4"));
        insert_4->setGeometry(QRect(200, 530, 391, 61));
        insert_5 = new QPushButton(centralwidget);
        insert_5->setObjectName(QString::fromUtf8("insert_5"));
        insert_5->setGeometry(QRect(200, 210, 391, 61));
        insert_6 = new QPushButton(centralwidget);
        insert_6->setObjectName(QString::fromUtf8("insert_6"));
        insert_6->setGeometry(QRect(200, 370, 391, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 802, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome to Student Management System", nullptr));
        insert->setText(QCoreApplication::translate("MainWindow", "Insert", nullptr));
        insert_2->setText(QCoreApplication::translate("MainWindow", "Search Student using Trie", nullptr));
        insert_3->setText(QCoreApplication::translate("MainWindow", "Delete Student", nullptr));
        insert_4->setText(QCoreApplication::translate("MainWindow", "View All Student", nullptr));
        insert_5->setText(QCoreApplication::translate("MainWindow", "View/Edit Student", nullptr));
        insert_6->setText(QCoreApplication::translate("MainWindow", "Search Student using Hashmap", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
