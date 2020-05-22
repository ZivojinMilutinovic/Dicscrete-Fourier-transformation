/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include "view.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    View *centralwidget;
    QPushButton *pushButton;
    QLineEdit *lFrekvencija;
    QRadioButton *rdbtnTro;
    QRadioButton *rbtnPrav;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(470, 480);
        MainWindow->setMinimumSize(QSize(470, 480));
        MainWindow->setMaximumSize(QSize(470, 480));
        centralwidget = new View(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(359, 50, 81, 41));
        lFrekvencija = new QLineEdit(centralwidget);
        lFrekvencija->setObjectName(QStringLiteral("lFrekvencija"));
        lFrekvencija->setGeometry(QRect(210, 60, 113, 20));
        rdbtnTro = new QRadioButton(centralwidget);
        rdbtnTro->setObjectName(QStringLiteral("rdbtnTro"));
        rdbtnTro->setGeometry(QRect(20, 70, 81, 16));
        rbtnPrav = new QRadioButton(centralwidget);
        rbtnPrav->setObjectName(QStringLiteral("rbtnPrav"));
        rbtnPrav->setGeometry(QRect(20, 50, 91, 16));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 60, 41, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 10, 441, 20));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 470, 17));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Iscrtaj", Q_NULLPTR));
        rdbtnTro->setText(QApplication::translate("MainWindow", "Trougaoni signal", Q_NULLPTR));
        rbtnPrav->setText(QApplication::translate("MainWindow", "Pravougaoni signal", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Frekvencija", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "REALIZACIJA DISKRETNE FURIJEOVE TRANSFORMACIJE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
