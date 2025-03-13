#ifndef PINUI_H
#define PINUI_H
#include <QTimer>

#include <QDialog>

namespace Ui {
class PinUI;
}

class PinUI : public QDialog
{
    Q_OBJECT

public:
    explicit PinUI(QWidget *parent = nullptr);
    ~PinUI();

signals:
    void sendPinNumber(QString);
    void PinuiTimeOut();

private slots:
    void handleClick();
    void timeout();

private:
    Ui::PinUI *ui;
    QTimer * timer;
};

#endif // PINUI_H
