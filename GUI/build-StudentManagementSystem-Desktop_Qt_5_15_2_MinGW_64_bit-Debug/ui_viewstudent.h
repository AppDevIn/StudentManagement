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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewStudent
{
public:
    QWidget *centralwidget;
    QPushButton *btn_Search;
    QLineEdit *lineEdit_input;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_name_4;
    QLineEdit *lineEdit_email;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_name_7;
    QLineEdit *lineEdit_address;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_name_5;
    QLineEdit *lineEdit_gpa;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_name_6;
    QLineEdit *lineEdit_class;
    QPushButton *pushButton_edit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ViewStudent)
    {
        if (ViewStudent->objectName().isEmpty())
            ViewStudent->setObjectName(QString::fromUtf8("ViewStudent"));
        ViewStudent->resize(829, 668);
        centralwidget = new QWidget(ViewStudent);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_Search = new QPushButton(centralwidget);
        btn_Search->setObjectName(QString::fromUtf8("btn_Search"));
        btn_Search->setGeometry(QRect(510, 10, 201, 81));
        lineEdit_input = new QLineEdit(centralwidget);
        lineEdit_input->setObjectName(QString::fromUtf8("lineEdit_input"));
        lineEdit_input->setGeometry(QRect(80, 10, 421, 81));
        QFont font;
        font.setPointSize(22);
        lineEdit_input->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 130, 711, 461));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 40, 681, 361));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_name = new QLabel(widget);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        horizontalLayout->addWidget(label_name);

        lineEdit_name = new QLineEdit(widget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        horizontalLayout->addWidget(lineEdit_name);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_name_4 = new QLabel(widget);
        label_name_4->setObjectName(QString::fromUtf8("label_name_4"));

        horizontalLayout_4->addWidget(label_name_4);

        lineEdit_email = new QLineEdit(widget);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));

        horizontalLayout_4->addWidget(lineEdit_email);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_name_7 = new QLabel(widget);
        label_name_7->setObjectName(QString::fromUtf8("label_name_7"));

        horizontalLayout_7->addWidget(label_name_7);

        lineEdit_address = new QLineEdit(widget);
        lineEdit_address->setObjectName(QString::fromUtf8("lineEdit_address"));

        horizontalLayout_7->addWidget(lineEdit_address);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_name_5 = new QLabel(widget);
        label_name_5->setObjectName(QString::fromUtf8("label_name_5"));

        horizontalLayout_5->addWidget(label_name_5);

        lineEdit_gpa = new QLineEdit(widget);
        lineEdit_gpa->setObjectName(QString::fromUtf8("lineEdit_gpa"));

        horizontalLayout_5->addWidget(lineEdit_gpa);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_name_6 = new QLabel(widget);
        label_name_6->setObjectName(QString::fromUtf8("label_name_6"));

        horizontalLayout_6->addWidget(label_name_6);

        lineEdit_class = new QLineEdit(widget);
        lineEdit_class->setObjectName(QString::fromUtf8("lineEdit_class"));

        horizontalLayout_6->addWidget(lineEdit_class);


        verticalLayout_2->addLayout(horizontalLayout_6);

        pushButton_edit = new QPushButton(groupBox);
        pushButton_edit->setObjectName(QString::fromUtf8("pushButton_edit"));
        pushButton_edit->setGeometry(QRect(250, 410, 131, 41));
        ViewStudent->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ViewStudent);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 829, 24));
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
        lineEdit_input->setPlaceholderText(QCoreApplication::translate("ViewStudent", "Student ID", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ViewStudent", "Student Information", nullptr));
        label_name->setText(QCoreApplication::translate("ViewStudent", "Name: ", nullptr));
        label_name_4->setText(QCoreApplication::translate("ViewStudent", "Email: ", nullptr));
        label_name_7->setText(QCoreApplication::translate("ViewStudent", "Address: ", nullptr));
        label_name_5->setText(QCoreApplication::translate("ViewStudent", "GPA: ", nullptr));
        label_name_6->setText(QCoreApplication::translate("ViewStudent", "Class\" ", nullptr));
        pushButton_edit->setText(QCoreApplication::translate("ViewStudent", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewStudent: public Ui_ViewStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWSTUDENT_H
