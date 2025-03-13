#include "reader.h"
#include "ui_reader.h"
#include <QDebug>

Reader::Reader(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Reader)
{
    ui->setupUi(this);
    connect(ui->cardPushButton, &QPushButton::clicked,
            this, &Reader::handleCardNumber);
    qDebug()<<"Readerin luotu";
}

Reader::~Reader()
{
    qDebug()<<"Readerin tuhottu";
    delete ui;
}

void Reader::handleCardNumber()
{
    qDebug()<<"Readerin slot funktiossa";
    QString number = ui->cardNumber->text();
    emit sendCardNumber(number);
}
