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
    timeout.ReadIntervalTimeout = 0;
    timeout.ReadTotalTimeoutConstant = _timeout;
    timeout.ReadTotalTimeoutMultiplier = 0;
    timeout.WriteTotalTimeoutConstant = _timeout;
    timeout.WriteTotalTimeoutMultiplier = 0;
    SetCommTimeouts(uart, &timeout);


}

void UartConnection::veriGonder(char* veri)
{
    DWORD bytes_sent;
    unsigned int data_sent_length = strlen(veri);
    qInfo() <<"veri: " <<veri <<" uzunluk: "<<data_sent_length;
    for (int i = 0;i<data_sent_length; i++) {
        char veriic = veri[i];
        WriteFile(uart, &veriic, 2, &bytes_sent, NULL);
        qInfo()<<"bytes_sent: "<< bytes_sent;
    }
}

void UartConnection::veriOku()
{

}


