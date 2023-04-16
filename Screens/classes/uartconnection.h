#ifndef UARTCONNECTION_H
#define UARTCONNECTION_H

#include <windows.h>
#include <QObject>

#include <QDebug>

class UartConnection : public QObject
{
    Q_OBJECT
public:
    explicit UartConnection(QString _port, int _baudrate, int _timeout,
                            QObject *parent = nullptr);

public slots:
    void veriGonder(char* veri);
    void veriOku();
signals:

private:
    HANDLE uart;
};
#endif // UARTCONNECTION_H
