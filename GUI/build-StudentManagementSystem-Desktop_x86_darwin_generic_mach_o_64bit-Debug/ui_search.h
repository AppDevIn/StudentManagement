/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QString::fromUtf8("Search"));
        Search->resize(800, 600);
        menubar = new QMenuBar(Search);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Search->setMenuBar(menubar);
        centralwidget = new QWidget(Search);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Search->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Search);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Search->setStatusBar(statusbar);

        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QMainWindow *Search)
    {
        Search->setWindowTitle(QCoreApplication::translate("Search", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
