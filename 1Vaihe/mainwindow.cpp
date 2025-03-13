#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /* connect(lahettajanOsoite, lahettajanSignaaliFunktionOsoite,
                vastaanottajanOsoite, vastaanottajanSignaaliFunktionOsoite
    */
    connect(ui->pushCardNumber, &QPushButton::clicked,
            this, &MainWindow::handleCardButton);
    connect(ui->pushPinNumber, &QPushButton::clicked,
            this, &MainWindow::handlePinButton);

    reader = new Reader(this);
    connect(reader, &Reader::sendCardNumber,
            this, &MainWindow::handleCardNumber);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete reader;
    delete pinui;
}

void MainWindow::handleCardButton()
{
    qDebug()<<"Card Button pressed";
    //reader->show();
    reader->open();
    //reader->exec();
    qDebug()<<"Suoritettiinko tama viela";
}

void MainWindow::handlePinButton()
{
    pinui = new PinUI(this);
    connect(pinui, &PinUI::sendPinNumber,
            this, &MainWindow::handlePinNumber);
    connect(pinui, &PinUI::PinuiTimeOut,
            this, &MainWindow::handlePinuiTimeout);

    qDebug()<<"Pin Button pressed";
    //reader->show();
    pinui->open();
    //reader->exec();
    qDebug()<<"Suoritettiinko tama viela";
}

void MainWindow::handleCardNumber(QString s)
{
    qDebug()<<"Vastaanotettiin kortin numero";
    ui->cardNumber->setText(s);
    reader->close();
    delete reader;
}

void MainWindow::handlePinNumber(QString s)
{
    qDebug()<<"Vastaanotettiin PIN numero";
    ui->pinNumber->setText(s);
    pinui->close();
    delete pinui;
}

void MainWindow::handlePinuiTimeout()
{
    qDebug()<<"Vastaanotettiin timeout signaali";
    pinui->close();
    delete pinui;
}
