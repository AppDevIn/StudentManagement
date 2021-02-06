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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_name;
    QLabel *label_email;
    QLabel *label_address;
    QLabel *label_gpa;
    QLabel *label_class;
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
        QFont font;
        font.setPointSize(22);
        lineEdit_input->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(80, 140, 551, 351));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 501, 291));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_name = new QLabel(layoutWidget);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        verticalLayout->addWidget(label_name);

        label_email = new QLabel(layoutWidget);
        label_email->setObjectName(QString::fromUtf8("label_email"));

        verticalLayout->addWidget(label_email);

        label_address = new QLabel(layoutWidget);
        label_address->setObjectName(QString::fromUtf8("label_address"));

        verticalLayout->addWidget(label_address);

        label_gpa = new QLabel(layoutWidget);
        label_gpa->setObjectName(QString::fromUtf8("label_gpa"));

        verticalLayout->addWidget(label_gpa);

        label_class = new QLabel(layoutWidget);
        label_class->setObjectName(QString::fromUtf8("label_class"));

        verticalLayout->addWidget(label_class);

        ViewStudent->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ViewStudent);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
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
        label_name->setText(QCoreApplication::translate("ViewStudent", "TextLabel", nullptr));
        label_email->setText(QCoreApplication::translate("ViewStudent", "TextLabel", nullptr));
        label_address->setText(QCoreApplication::translate("ViewStudent", "TextLabel", nullptr));
        label_gpa->setText(QCoreApplication::translate("ViewStudent", "TextLabel", nullptr));
        label_class->setText(QCoreApplication::translate("ViewStudent", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewStudent: public Ui_ViewStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWSTUDENT_H
