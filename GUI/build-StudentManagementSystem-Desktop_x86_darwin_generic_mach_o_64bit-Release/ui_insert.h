/********************************************************************************
** Form generated from reading UI file 'insert.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERT_H
#define UI_INSERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Insert
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_Address;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_email;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_gpa;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_class;
    QPushButton *btn_submit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_studentID;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Insert)
    {
        if (Insert->objectName().isEmpty())
            Insert->setObjectName(QString::fromUtf8("Insert"));
        Insert->resize(800, 600);
        centralwidget = new QWidget(Insert);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(190, 40, 431, 421));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 100, 381, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_name = new QLineEdit(layoutWidget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        horizontalLayout_2->addWidget(lineEdit_name);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 150, 381, 51));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_Address = new QLineEdit(layoutWidget_2);
        lineEdit_Address->setObjectName(QString::fromUtf8("lineEdit_Address"));

        horizontalLayout_3->addWidget(lineEdit_Address);

        layoutWidget_3 = new QWidget(groupBox);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 200, 381, 51));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_email = new QLineEdit(layoutWidget_3);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));

        horizontalLayout_4->addWidget(lineEdit_email);

        layoutWidget_4 = new QWidget(groupBox);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(30, 250, 381, 51));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_gpa = new QLineEdit(layoutWidget_4);
        lineEdit_gpa->setObjectName(QString::fromUtf8("lineEdit_gpa"));

        horizontalLayout_5->addWidget(lineEdit_gpa);

        layoutWidget_5 = new QWidget(groupBox);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(30, 300, 381, 51));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_class = new QLineEdit(layoutWidget_5);
        lineEdit_class->setObjectName(QString::fromUtf8("lineEdit_class"));

        horizontalLayout_6->addWidget(lineEdit_class);

        btn_submit = new QPushButton(groupBox);
        btn_submit->setObjectName(QString::fromUtf8("btn_submit"));
        btn_submit->setGeometry(QRect(80, 370, 261, 51));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 40, 381, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_studentID = new QLineEdit(widget);
        lineEdit_studentID->setObjectName(QString::fromUtf8("lineEdit_studentID"));

        horizontalLayout->addWidget(lineEdit_studentID);

        Insert->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Insert);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Insert->setMenuBar(menubar);
        statusbar = new QStatusBar(Insert);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Insert->setStatusBar(statusbar);

        retranslateUi(Insert);

        QMetaObject::connectSlotsByName(Insert);
    } // setupUi

    void retranslateUi(QMainWindow *Insert)
    {
        Insert->setWindowTitle(QCoreApplication::translate("Insert", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Insert", "Insert User", nullptr));
        label_2->setText(QCoreApplication::translate("Insert", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("Insert", "Address", nullptr));
        label_4->setText(QCoreApplication::translate("Insert", "Email", nullptr));
        label_5->setText(QCoreApplication::translate("Insert", "GPA", nullptr));
        label_6->setText(QCoreApplication::translate("Insert", "Class", nullptr));
        btn_submit->setText(QCoreApplication::translate("Insert", "Submit", nullptr));
        label->setText(QCoreApplication::translate("Insert", "Student ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Insert: public Ui_Insert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERT_H
