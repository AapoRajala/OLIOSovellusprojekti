#include "pinui.h"
#include "ui_pinui.h"
#include <QDebug>

PinUI::PinUI(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PinUI)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked,
            this, &PinUI::handleClick);

    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,
            this, &PinUI::timeout);
    timer->start(10000);
}

PinUI::~PinUI()
{
    delete ui;
}

void PinUI::handleClick()
{
    timer->start(10000);
    qDebug()<<"PinUI click handler";
    QString pin = ui->lineEdit->text();
    qDebug()<<"PinUI lahettaa pinNumeron signaalina";
    emit sendPinNumber(pin);
}

void PinUI::timeout()
{
    qDebug()<<"PinUI timeout handler";
    qDebug()<<"PinUI lahettaa timeout signaalin";
    emit PinuiTimeOut();
}
