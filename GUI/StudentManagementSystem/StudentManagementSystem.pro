QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../../Dictionary/Dictionary.cpp \
    ../../LinkedList/List.cpp \
    ../../Trie/Trie.cpp \
    delete.cpp \
    globals.cpp \
    insert.cpp \
    main.cpp \
    mainwindow.cpp \
    search.cpp \
    viewstudent.cpp

HEADERS += \
    ../../Dictionary/Dictionary.h \
    ../../LinkedList/List.h \
    ../../Trie/Trie.h \
    delete.h \
    globals.h \
    insert.h \
    mainwindow.h \
    search.h \
    viewstudent.h

FORMS += \
    delete.ui \
    insert.ui \
    mainwindow.ui \
    search.ui \
    viewstudent.ui

TRANSLATIONS += \
    StudentManagementSystem_en_BI.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../../../../Downloads/students.json
