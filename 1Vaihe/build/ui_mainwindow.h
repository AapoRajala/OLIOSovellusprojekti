/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QFormLayout *formLayout;
    QPushButton *pushCardNumber;
    QLineEdit *cardNumber;
    QPushButton *pushPinNumber;
    QLineEdit *pinNumber;
    QLabel *label;
    QLineEdit *attemptsLeft;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(482, 248);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);
        label_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        pushCardNumber = new QPushButton(centralwidget);
        pushCardNumber->setObjectName("pushCardNumber");

        formLayout->setWidget(0, QFormLayout::LabelRole, pushCardNumber);

        cardNumber = new QLineEdit(centralwidget);
        cardNumber->setObjectName("cardNumber");

        formLayout->setWidget(0, QFormLayout::FieldRole, cardNumber);

        pushPinNumber = new QPushButton(centralwidget);
        pushPinNumber->setObjectName("pushPinNumber");

        formLayout->setWidget(1, QFormLayout::LabelRole, pushPinNumber);

        pinNumber = new QLineEdit(centralwidget);
        pinNumber->setObjectName("pinNumber");

        formLayout->setWidget(1, QFormLayout::FieldRole, pinNumber);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setFrameShape(QFrame::Shape::Box);

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        attemptsLeft = new QLineEdit(centralwidget);
        attemptsLeft->setObjectName("attemptsLeft");

        formLayout->setWidget(2, QFormLayout::FieldRole, attemptsLeft);


        verticalLayout->addLayout(formLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 482, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "INSERT CARD", nullptr));
        pushCardNumber->setText(QCoreApplication::translate("MainWindow", "Current Card Number", nullptr));
        pushPinNumber->setText(QCoreApplication::translate("MainWindow", "Current Pin Number", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Attempts Left", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
