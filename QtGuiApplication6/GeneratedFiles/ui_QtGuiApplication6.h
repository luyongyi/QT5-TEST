/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication6.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION6_H
#define UI_QTGUIAPPLICATION6_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplication6Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApplication6Class)
    {
        if (QtGuiApplication6Class->objectName().isEmpty())
            QtGuiApplication6Class->setObjectName(QStringLiteral("QtGuiApplication6Class"));
        QtGuiApplication6Class->resize(600, 400);
        menuBar = new QMenuBar(QtGuiApplication6Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtGuiApplication6Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiApplication6Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiApplication6Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtGuiApplication6Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtGuiApplication6Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtGuiApplication6Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiApplication6Class->setStatusBar(statusBar);

        retranslateUi(QtGuiApplication6Class);

        QMetaObject::connectSlotsByName(QtGuiApplication6Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication6Class)
    {
        QtGuiApplication6Class->setWindowTitle(QApplication::translate("QtGuiApplication6Class", "QtGuiApplication6", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication6Class: public Ui_QtGuiApplication6Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION6_H
