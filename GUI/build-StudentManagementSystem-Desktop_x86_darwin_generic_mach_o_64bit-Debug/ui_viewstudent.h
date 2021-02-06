/********************************************************************************
** Form generated from reading UI file 'viewstudent.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWSTUDENT_H
#define UI_VIEWSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewStudent
{
public:
    QWidget *centralwidget;
    QPushButton *btn_Search;
    QLineEdit *lineEdit_input;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ViewStudent)
    {
        if (ViewStudent->objectName().isEmpty())
            ViewStudent->setObjectName(QString::fromUtf8("ViewStudent"));
        ViewStudent->resize(800, 600);
        centralwidget = new QWidget(ViewStudent);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_Search = new QPushButton(centralwidget);
        btn_Search->setObjectName(QString::fromUtf8("btn_Search"));
        btn_Search->setGeometry(QRect(510, 10, 201, 81));
        lineEdit_input = new QLineEdit(centralwidget);
        lineEdit_input->setObjectName(QString::fromUtf8("lineEdit_input"));
        lineEdit_input->setGeometry(QRect(80, 10, 421, 81));
        ViewStudent->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ViewStudent);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        ViewStudent->setMenuBar(menubar);
        statusbar = new QStatusBar(ViewStudent);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ViewStudent->setStatusBar(statusbar);

        retranslateUi(ViewStudent);

        QMetaObject::connectSlotsByName(ViewStudent);
    } // setupUi

    void retranslateUi(QMainWindow *ViewStudent)
    {
        ViewStudent->setWindowTitle(QCoreApplication::translate("ViewStudent", "MainWindow", nullptr));
        btn_Search->setText(QCoreApplication::translate("ViewStudent", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewStudent: public Ui_ViewStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWSTUDENT_H
