#ifndef READER_H
#define READER_H

#include <QDialog>

namespace Ui {
class Reader;
}

class Reader : public QDialog
{
    Q_OBJECT

public:
    explicit Reader(QWidget *parent = nullptr);
    ~Reader();

signals:
    void sendCardNumber(QString);

private slots:
    void handleCardNumber();

private:
    Ui::Reader *ui;
};

#endif // READER_H
