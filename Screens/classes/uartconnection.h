#ifndef UARTCONNECTION_H
#define UARTCONNECTION_H

#include <windows.h>
#include <QObject>
#include <QSharedPointer>
#include <QDebug>
#include <QThread>

class UartConnection : public QObject
{
    Q_OBJECT
public:
    explicit UartConnection(QString _port, int _baudrate, int _timeout,
                            QObject *parent = nullptr);
    ~UartConnection();
public slots:
    void veriGonder(char* veri);
    void veriOku();
    void veriOkumaRun();
signals:
    void veriOkundu(UartConnection* uart,QSharedPointer<std::string> veri);
    void veriokumaRunned();
private:
    HANDLE uart;    
};
#endif // UARTCONNECTION_H
