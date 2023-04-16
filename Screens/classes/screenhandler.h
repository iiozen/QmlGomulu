#ifndef SCREENHANDLER_H
#define SCREENHANDLER_H


#include <QObject>
#include "degiskenler.h"
#include "uartconnection.h"

#include <QDebug>

class ScreenHandler : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int screen READ screen WRITE setScreen NOTIFY screenChanged)
    Q_PROPERTY(bool led0 READ led0 WRITE setLed0 NOTIFY led0Changed)
    Q_PROPERTY(bool led1 READ led1 WRITE setLed1 NOTIFY led1Changed)
    Q_PROPERTY(bool led2 READ led2 WRITE setLed2 NOTIFY led2Changed)
    Q_PROPERTY(bool led3 READ led3 WRITE setLed3 NOTIFY led3Changed)
    Q_PROPERTY(bool led4 READ led4 WRITE setLed4 NOTIFY led4Changed)
    Q_PROPERTY(bool led5 READ led5 WRITE setLed5 NOTIFY led5Changed)
    Q_PROPERTY(bool led6 READ led6 WRITE setLed6 NOTIFY led6Changed)
    Q_PROPERTY(bool led7 READ led7 WRITE setLed7 NOTIFY led7Changed)
    Q_PROPERTY(bool led8 READ led8 WRITE setLed8 NOTIFY led8Changed)
    Q_PROPERTY(bool led9 READ led9 WRITE setLed9 NOTIFY led9Changed)
    Q_PROPERTY(bool led10 READ led10 WRITE setLed10 NOTIFY led10Changed)
    Q_PROPERTY(bool led11 READ led11 WRITE setLed11 NOTIFY led11Changed)
    Q_PROPERTY(bool led12 READ led12 WRITE setLed12 NOTIFY led12Changed)
    Q_PROPERTY(bool led13 READ led13 WRITE setLed13 NOTIFY led13Changed)
    Q_PROPERTY(bool led14 READ led14 WRITE setLed14 NOTIFY led14Changed)
    Q_PROPERTY(bool led15 READ led15 WRITE setLed15 NOTIFY led15Changed)
    Q_PROPERTY(int leddelay READ leddelay WRITE setLeddelay NOTIFY leddelayChanged)
    Q_PROPERTY(int motorhiz READ motorhiz WRITE setMotorhiz NOTIFY motorhizChanged)
    Q_PROPERTY(float tempval READ tempval WRITE setTempval NOTIFY tempvalChanged)
    Q_PROPERTY(bool tempscreen READ tempscreen WRITE setTempscreen NOTIFY tempscreenChanged)
    Q_PROPERTY(bool motorscreen READ motorscreen WRITE setMotorscreen NOTIFY motorscreenChanged)
    Q_PROPERTY(QString uart1_port READ uart1_port WRITE setUart1_port NOTIFY uart1_portChanged)
    Q_PROPERTY(int uart1_baudrate READ uart1_baudrate WRITE setUart1_baudrate NOTIFY uart1_baudrateChanged)
    Q_PROPERTY(int uart1_timeout READ uart1_timeout WRITE setUart1_timeout NOTIFY uart1_timeoutChanged)
    Q_PROPERTY(QString uart2_port READ uart2_port WRITE setUart2_port NOTIFY uart2_portChanged)
    Q_PROPERTY(int uart2_baudrate READ uart2_baudrate WRITE setUart2_baudrate NOTIFY uart2_baudrateChanged)
    Q_PROPERTY(int uart2_timeout READ uart2_timeout WRITE setUart2_timeout NOTIFY uart2_timeoutChanged)
    Q_PROPERTY(bool hepsiButon READ hepsiButon WRITE setHepsiButon NOTIFY hepsiButonChanged)
    Q_PROPERTY(bool siraliButon READ siraliButon WRITE setSiraliButon NOTIFY siraliButonChanged)
    Q_PROPERTY(bool motortakipscreen READ motortakipscreen WRITE setMotortakipscreen NOTIFY motortakipscreenChanged)
public:
    explicit ScreenHandler(QObject *parent = nullptr);
    int screen() const;
    bool led0() const;
    bool led1() const;
    bool led2() const;
    bool led3() const;
    bool led4() const;
    bool led5() const;
    bool led6() const;
    bool led7() const;
    bool led8() const;
    bool led9() const;
    bool led10() const;
    bool led11() const;
    bool led12() const;
    bool led13() const;
    bool led14() const;
    bool led15() const;
    int leddelay() const;
    int motorhiz() const;
    float tempval() const;
    bool tempscreen() const;
    bool motorscreen() const;
    QString uart1_port() const;
    int uart1_baudrate() const;
    int uart1_timeout() const;
    QString uart2_port() const;
    int uart2_baudrate() const;
    int uart2_timeout() const;
    bool hepsiButon() const;
    bool siraliButon() const;
    bool motortakipscreen() const;
public slots:
    void resetAll();
    void setScreen(int newScreen);
    void setLed0(bool newLed0);
    void setLed1(bool newLed1);
    void setLed2(bool newLed2);
    void setLed3(bool newLed3);
    void setLed4(bool newLed4);
    void setLed5(bool newLed5);
    void setLed6(bool newLed6);
    void setLed7(bool newLed7);
    void setLed8(bool newLed8);
    void setLed9(bool newLed9);
    void setLed10(bool newLed10);
    void setLed11(bool newLed11);
    void setLed12(bool newLed12);
    void setLed13(bool newLed13);
    void setLed14(bool newLed14);
    void setLed15(bool newLed15);
    void setLeddelay(int newLeddelay);
    void setMotorhiz(int newMotorhiz);
    void setTempval(float newTempval);
    void setTempscreen(bool newTempscreen);
    void setMotorscreen(bool newMotorscreen);
    void setUart1_port(const QString &newUart1_port);
    void setUart1_baudrate(int newUart1_baudrate);
    void setUart2_port(const QString &newUart2_port);
    void setUart1_timeout(int newUart1_timeout);
    void setUart2_baudrate(int newUart2_baudrate);
    void setUart2_timeout(int newUart2_timeout);
    void baglanButon();
    void setHepsiButon(bool newHepsiButon);
    void setSiraliButon(bool newSiraliButon);
    void setMotortakipscreen(bool newMotortakipscreen);
signals:
    void screenChanged();
    void led0Changed();
    void led1Changed();
    void led2Changed();
    void led3Changed();
    void led4Changed();
    void led5Changed();
    void led6Changed();
    void led7Changed();
    void led8Changed();
    void led9Changed();
    void led10Changed();
    void led11Changed();
    void led12Changed();
    void led13Changed();
    void led14Changed();
    void led15Changed();
    void leddelayChanged();
    void motorhizChanged();
    void tempvalChanged();
    void tempscreenChanged();
    void motorscreenChanged();
    void uart1_portChanged();
    void uart1_baudrateChanged();    
    void uart1_timeoutChanged();
    void uart2_portChanged();
    void uart2_baudrateChanged();
    void uart2_timeoutChanged();
    void hepsiButonChanged();
    void siraliButonChanged();

    void motortakipscreenChanged();

private:
    int m_screen;
    bool m_led0;
    bool m_led1;
    bool m_led2;
    bool m_led3;
    bool m_led4;
    bool m_led5;
    bool m_led6;
    bool m_led7;
    bool m_led8;
    bool m_led9;
    bool m_led10;
    bool m_led11;
    bool m_led12;
    bool m_led13;
    bool m_led14;
    bool m_led15;
    int m_leddelay;
    int m_motorhiz;
    float m_tempval;
    bool m_tempscreen;
    bool m_motorscreen;
    QString m_uart1_port;
    int m_uart1_baudrate;
    int m_uart1_timeout;
    QString m_uart2_port;
    int m_uart2_baudrate;
    int m_uart2_timeout;
    UartConnection* uart1;
    UartConnection* uart2;
    bool m_hepsiButon;
    bool m_siraliButon;
    bool m_motortakipscreen;
};

#endif // SCREENHANDLER_H
