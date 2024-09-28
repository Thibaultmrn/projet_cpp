/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditNom;
    QLineEdit *lineEditEmail;
    QPushButton *pushButtonSuivant;
    QPushButton *pushButtonPrecedent;
    QPushButton *pushButtonQuitter;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(580, 225);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 50, 64, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 110, 64, 21));
        lineEditNom = new QLineEdit(centralwidget);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));
        lineEditNom->setGeometry(QRect(180, 50, 291, 25));
        lineEditEmail = new QLineEdit(centralwidget);
        lineEditEmail->setObjectName(QString::fromUtf8("lineEditEmail"));
        lineEditEmail->setGeometry(QRect(180, 110, 291, 25));
        pushButtonSuivant = new QPushButton(centralwidget);
        pushButtonSuivant->setObjectName(QString::fromUtf8("pushButtonSuivant"));
        pushButtonSuivant->setGeometry(QRect(510, 80, 51, 25));
        pushButtonPrecedent = new QPushButton(centralwidget);
        pushButtonPrecedent->setObjectName(QString::fromUtf8("pushButtonPrecedent"));
        pushButtonPrecedent->setGeometry(QRect(22, 80, 51, 25));
        pushButtonQuitter = new QPushButton(centralwidget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(420, 160, 141, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 580, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Exercice 1 Linux", nullptr));
        label->setText(QApplication::translate("MainWindow", "Nom :", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "email :", nullptr));
        pushButtonSuivant->setText(QApplication::translate("MainWindow", ">>>", nullptr));
        pushButtonPrecedent->setText(QApplication::translate("MainWindow", "<<<", nullptr));
        pushButtonQuitter->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
