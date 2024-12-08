/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculatorClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *calculatorClass)
    {
        if (calculatorClass->objectName().isEmpty())
            calculatorClass->setObjectName("calculatorClass");
        calculatorClass->resize(600, 400);
        centralWidget = new QWidget(calculatorClass);
        centralWidget->setObjectName("centralWidget");
        calculatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(calculatorClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        calculatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(calculatorClass);
        mainToolBar->setObjectName("mainToolBar");
        calculatorClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(calculatorClass);
        statusBar->setObjectName("statusBar");
        calculatorClass->setStatusBar(statusBar);

        retranslateUi(calculatorClass);

        QMetaObject::connectSlotsByName(calculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *calculatorClass)
    {
        calculatorClass->setWindowTitle(QCoreApplication::translate("calculatorClass", "calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculatorClass: public Ui_calculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
