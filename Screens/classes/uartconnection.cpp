#include "uartconnection.h"

UartConnection::UartConnection( QString _port, int _baudrate, int _timeout,
                                QObject *parent)
    : QObject{parent}
{    
    LPCWSTR port = _port.toStdWString().c_str();
    uart = CreateFile(port, GENERIC_READ | GENERIC_WRITE, 0, 0, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);

    // UART HABERLESME ICIN TEMEL AYARLAR
    DCB serialParams = { 0 };
    serialParams.DCBlength = sizeof(serialParams);
    GetCommState(uart, &serialParams);
    serialParams.BaudRate = _baudrate;
    serialParams.ByteSize = 8;
    serialParams.StopBits = ONESTOPBIT;
    serialParams.Parity = NOPARITY;
    SetCommState(uart, &serialParams);

    // TIMEOUT
    COMMTIMEOUTS timeout = { 0 };
    timeout.ReadIntervalTimeout = 3;
    timeout.ReadTotalTimeoutConstant = _timeout;
    timeout.ReadTotalTimeoutMultiplier = 0;
    timeout.WriteTotalTimeoutConstant = _timeout;
    timeout.WriteTotalTimeoutMultiplier = 0;
    SetCommTimeouts(uart, &timeout);

    connect(this,&UartConnection::veriokumaRunned,this,&UartConnection::veriOku,Qt::QueuedConnection);
}

UartConnection::~UartConnection()
{
    CloseHandle(uart);
    qInfo() << "uart Kaldırıldı..";
}

void UartConnection::veriGonder(char* veri)
{
    DWORD bytes_sent;
    unsigned int data_sent_length = strlen(veri);

    for (int i = 0;i<data_sent_length; i++) {
        char veriic = veri[i];
        WriteFile(uart, &veriic, sizeof(char)+1, &bytes_sent, NULL);
    }
}

void UartConnection::veriOku()
{
    char yazi[100];
    DWORD bytes_received;
    QSharedPointer<std::string> veri(new std::string);
    ReadFile(uart, yazi, sizeof(yazi)+1, &bytes_received, NULL);
    for (int i = 0;i<bytes_received;i++) *veri += yazi[i];
    emit veriOkundu(this,veri);

}

void UartConnection::veriOkumaRun()
{
    emit veriokumaRunned();
}


