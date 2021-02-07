/********************************************************************************
** Form generated from reading UI file 'searchstudentbyhashmap.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHSTUDENTBYHASHMAP_H
#define UI_SEARCHSTUDENTBYHASHMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchStudentByHashmap
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QLabel *label_time;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SearchStudentByHashmap)
    {
        if (SearchStudentByHashmap->objectName().isEmpty())
            SearchStudentByHashmap->setObjectName(QString::fromUtf8("SearchStudentByHashmap"));
        SearchStudentByHashmap->resize(1137, 731);
        centralwidget = new QWidget(SearchStudentByHashmap);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 0, 1021, 621));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font1;
        font1.setPointSize(22);
        lineEdit->setFont(font1);
        lineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEdit);

        tableWidget = new QTableWidget(layoutWidget);
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
        tableWidget->setColumnCount(6);

        verticalLayout->addWidget(tableWidget);


        verticalLayout_2->addLayout(verticalLayout);

        label_time = new QLabel(centralwidget);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(60, 630, 171, 21));
        QFont font2;
        font2.setPointSize(16);
        label_time->setFont(font2);
        SearchStudentByHashmap->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SearchStudentByHashmap);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1137, 24));
        SearchStudentByHashmap->setMenuBar(menubar);
        statusbar = new QStatusBar(SearchStudentByHashmap);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SearchStudentByHashmap->setStatusBar(statusbar);

        retranslateUi(SearchStudentByHashmap);

        QMetaObject::connectSlotsByName(SearchStudentByHashmap);
    } // setupUi

    void retranslateUi(QMainWindow *SearchStudentByHashmap)
    {
        SearchStudentByHashmap->setWindowTitle(QCoreApplication::translate("SearchStudentByHashmap", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("SearchStudentByHashmap", "Prefix Search By HashMap", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("SearchStudentByHashmap", "Student ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SearchStudentByHashmap", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SearchStudentByHashmap", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SearchStudentByHashmap", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SearchStudentByHashmap", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("SearchStudentByHashmap", "GPA", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("SearchStudentByHashmap", "Class", nullptr));
        label_time->setText(QCoreApplication::translate("SearchStudentByHashmap", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchStudentByHashmap: public Ui_SearchStudentByHashmap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHSTUDENTBYHASHMAP_H
