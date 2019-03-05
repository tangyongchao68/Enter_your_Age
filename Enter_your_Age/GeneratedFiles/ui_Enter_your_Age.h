/********************************************************************************
** Form generated from reading UI file 'Enter_your_Age.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTER_YOUR_AGE_H
#define UI_ENTER_YOUR_AGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Enter_your_AgeClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Enter_your_AgeClass)
    {
        if (Enter_your_AgeClass->objectName().isEmpty())
            Enter_your_AgeClass->setObjectName(QStringLiteral("Enter_your_AgeClass"));
        Enter_your_AgeClass->resize(600, 400);
        menuBar = new QMenuBar(Enter_your_AgeClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Enter_your_AgeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Enter_your_AgeClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Enter_your_AgeClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Enter_your_AgeClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Enter_your_AgeClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Enter_your_AgeClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Enter_your_AgeClass->setStatusBar(statusBar);

        retranslateUi(Enter_your_AgeClass);

        QMetaObject::connectSlotsByName(Enter_your_AgeClass);
    } // setupUi

    void retranslateUi(QMainWindow *Enter_your_AgeClass)
    {
        Enter_your_AgeClass->setWindowTitle(QApplication::translate("Enter_your_AgeClass", "Enter_your_Age", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Enter_your_AgeClass: public Ui_Enter_your_AgeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTER_YOUR_AGE_H
