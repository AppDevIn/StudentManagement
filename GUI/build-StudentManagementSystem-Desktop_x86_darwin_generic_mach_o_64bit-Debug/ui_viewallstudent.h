/********************************************************************************
** Form generated from reading UI file 'viewallstudent.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWALLSTUDENT_H
#define UI_VIEWALLSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewAllStudent
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QPushButton *pushButton_name;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ViewAllStudent)
    {
        if (ViewAllStudent->objectName().isEmpty())
            ViewAllStudent->setObjectName(QString::fromUtf8("ViewAllStudent"));
        ViewAllStudent->resize(1088, 717);
        centralwidget = new QWidget(ViewAllStudent);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(30, 10, 1017, 533));
        tableWidget->setColumnCount(6);
        pushButton_name = new QPushButton(centralwidget);
        pushButton_name->setObjectName(QString::fromUtf8("pushButton_name"));
        pushButton_name->setGeometry(QRect(30, 560, 151, 51));
        ViewAllStudent->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ViewAllStudent);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1088, 24));
        ViewAllStudent->setMenuBar(menubar);
        statusbar = new QStatusBar(ViewAllStudent);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ViewAllStudent->setStatusBar(statusbar);

        retranslateUi(ViewAllStudent);

        QMetaObject::connectSlotsByName(ViewAllStudent);
    } // setupUi

    void retranslateUi(QMainWindow *ViewAllStudent)
    {
        ViewAllStudent->setWindowTitle(QCoreApplication::translate("ViewAllStudent", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ViewAllStudent", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ViewAllStudent", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ViewAllStudent", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ViewAllStudent", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ViewAllStudent", "GPA", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ViewAllStudent", "Class", nullptr));
        pushButton_name->setText(QCoreApplication::translate("ViewAllStudent", "Sort List By Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewAllStudent: public Ui_ViewAllStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWALLSTUDENT_H
