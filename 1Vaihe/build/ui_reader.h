/********************************************************************************
** Form generated from reading UI file 'reader.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READER_H
#define UI_READER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Reader
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QPushButton *cardPushButton;
    QLineEdit *cardNumber;

    void setupUi(QDialog *Reader)
    {
        if (Reader->objectName().isEmpty())
            Reader->setObjectName("Reader");
        Reader->resize(335, 175);
        verticalLayout = new QVBoxLayout(Reader);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Reader);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        cardPushButton = new QPushButton(Reader);
        cardPushButton->setObjectName("cardPushButton");

        formLayout->setWidget(0, QFormLayout::LabelRole, cardPushButton);

        cardNumber = new QLineEdit(Reader);
        cardNumber->setObjectName("cardNumber");

        formLayout->setWidget(0, QFormLayout::FieldRole, cardNumber);


        verticalLayout->addLayout(formLayout);


        retranslateUi(Reader);

        QMetaObject::connectSlotsByName(Reader);
    } // setupUi

    void retranslateUi(QDialog *Reader)
    {
        Reader->setWindowTitle(QCoreApplication::translate("Reader", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Reader", "Reader Simulator", nullptr));
        cardPushButton->setText(QCoreApplication::translate("Reader", "Card Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reader: public Ui_Reader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READER_H
