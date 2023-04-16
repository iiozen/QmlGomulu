#include "screenhandler.h"

ScreenHandler::ScreenHandler(QObject *parent)
    : QObject{parent}
    , m_screen(0)
    , m_led0(false), m_led1(false), m_led2(false), m_led3(false)
    , m_led4(false), m_led5(false), m_led6(false), m_led7(false)
    , m_led8(false), m_led9(false), m_led10(false), m_led11(false)
    , m_led12(false), m_led13(false), m_led14(false), m_led15(false)
    , m_leddelay(500)
    , m_motorhiz( 0 )
    , m_tempval( 75.265 )
    , m_motorscreen( false )
    , m_tempscreen( false )
    , m_uart1_port( "COM2" )
    , m_uart1_baudrate( 115200 )
    , m_uart1_timeout ( 100 )
    , m_uart2_port( "COM3")
    , m_uart2_baudrate( 115200 )
    , m_uart2_timeout( 1000 )
    , m_hepsiButon ( false )
    , m_siraliButon ( false )
    , m_motortakipscreen( false )
{

}

int ScreenHandler::screen() const
{
    return m_screen;
}

void ScreenHandler::setScreen(int newScreen)
{
    if (m_screen == newScreen)
        return;
    m_screen = newScreen;
    emit screenChanged();
}


bool ScreenHandler::led0() const
{
    return m_led0;
}

void ScreenHandler::setLed0(bool newLed0)
{
    if (m_led0 == newLed0)
        return;
    m_led0 = newLed0;
    std::string veri;
    if(m_led0) veri = LED_YAK LED0;
    else veri = LED_SONDUR LED0;
    uart1->veriGonder(veri.data());

    emit led0Changed();
}

bool ScreenHandler::led1() const
{
    return m_led1;
}

void ScreenHandler::setLed1(bool newLed1)
{
    if (m_led1 == newLed1)
        return;
    m_led1 = newLed1;
    std::string veri;
    if(m_led1) veri = LED_YAK LED1;
    else veri = LED_SONDUR LED1;
    uart1->veriGonder(veri.data());
    emit led1Changed();
}

bool ScreenHandler::led2() const
{
    return m_led2;
}

void ScreenHandler::setLed2(bool newLed2)
{
    if (m_led2 == newLed2)
        return;
    m_led2 = newLed2;
    std::string veri;
    if(m_led2) veri = LED_YAK LED2;
    else veri = LED_SONDUR LED2;
    uart1->veriGonder(veri.data());
    emit led2Changed();
}


bool ScreenHandler::led3() const
{
    return m_led3;
}

void ScreenHandler::setLed3(bool newLed3)
{
    if (m_led3 == newLed3)
        return;
    m_led3 = newLed3;
    std::string veri;
    if(m_led3) veri = LED_YAK LED3;
    else veri = LED_SONDUR LED3;
    uart1->veriGonder(veri.data());
    emit led3Changed();
}

bool ScreenHandler::led4() const
{
    return m_led4;
}

void ScreenHandler::setLed4(bool newLed4)
{
    if (m_led4 == newLed4)
        return;
    m_led4 = newLed4;
    std::string veri;
    if(m_led4) veri = LED_YAK LED4;
    else veri = LED_SONDUR LED4;
    uart1->veriGonder(veri.data());
    emit led4Changed();
}

bool ScreenHandler::led5() const
{
    return m_led5;
}

void ScreenHandler::setLed5(bool newLed5)
{
    if (m_led5 == newLed5)
        return;
    m_led5 = newLed5;
    std::string veri;
    if(m_led5) veri = LED_YAK LED5;
    else veri = LED_SONDUR LED5;
    uart1->veriGonder(veri.data());
    emit led5Changed();
}

bool ScreenHandler::led6() const
{
    return m_led6;
}

void ScreenHandler::setLed6(bool newLed6)
{
    if (m_led6 == newLed6)
        return;
    m_led6 = newLed6;
    std::string veri;
    if(m_led6) veri = LED_YAK LED6;
    else veri = LED_SONDUR LED6;
    uart1->veriGonder(veri.data());
    emit led6Changed();
}

bool ScreenHandler::led7() const
{
    return m_led7;
}

void ScreenHandler::setLed7(bool newLed7)
{
    if (m_led7 == newLed7)
        return;
    m_led7 = newLed7;
    std::string veri;
    if(m_led7) veri = LED_YAK LED7;
    else veri = LED_SONDUR LED7;
    uart1->veriGonder(veri.data());
    emit led7Changed();
}

bool ScreenHandler::led8() const
{
    return m_led8;
}

void ScreenHandler::setLed8(bool newLed8)
{
    if (m_led8 == newLed8)
        return;
    m_led8 = newLed8;
    std::string veri;
    if(m_led8) veri = LED_YAK LED8;
    else veri = LED_SONDUR LED8;
    uart1->veriGonder(veri.data());
    emit led8Changed();
}

bool ScreenHandler::led9() const
{
    return m_led9;
}

void ScreenHandler::setLed9(bool newLed9)
{
    if (m_led9 == newLed9)
        return;
    m_led9 = newLed9;
    std::string veri;
    if(m_led9) veri = LED_YAK LED9;
    else veri = LED_SONDUR LED9;
    uart1->veriGonder(veri.data());
    emit led9Changed();
}

bool ScreenHandler::led10() const
{
    return m_led10;
}

void ScreenHandler::setLed10(bool newLed10)
{
    if (m_led10 == newLed10)
        return;
    m_led10 = newLed10;
    std::string veri;
    if(m_led10) veri = LED_YAK LED10;
    else veri = LED_SONDUR LED10;
    uart1->veriGonder(veri.data());
    emit led10Changed();
}

bool ScreenHandler::led11() const
{
    return m_led11;
}

void ScreenHandler::setLed11(bool newLed11)
{
    if (m_led11 == newLed11)
        return;
    m_led11 = newLed11;
    std::string veri;
    if(m_led11) veri = LED_YAK LED11;
    else veri = LED_SONDUR LED11;
    uart1->veriGonder(veri.data());
    emit led11Changed();
}

bool ScreenHandler::led12() const
{
    return m_led12;
}

void ScreenHandler::setLed12(bool newLed12)
{
    if (m_led12 == newLed12)
        return;
    m_led12 = newLed12;
    std::string veri;
    if(m_led12) veri = LED_YAK LED12;
    else veri = LED_SONDUR LED12;
    uart1->veriGonder(veri.data());
    emit led12Changed();
}

bool ScreenHandler::led13() const
{
    return m_led13;
}

void ScreenHandler::setLed13(bool newLed13)
{
    if (m_led13 == newLed13)
        return;
    m_led13 = newLed13;
    std::string veri;
    if(m_led13) veri = LED_YAK LED13;
    else veri = LED_SONDUR LED13;
    uart1->veriGonder(veri.data());
    emit led13Changed();
}

bool ScreenHandler::led14() const
{
    return m_led14;
}

void ScreenHandler::setLed14(bool newLed14)
{
    if (m_led14 == newLed14)
        return;
    m_led14 = newLed14;
    std::string veri;
    if(m_led14) veri = LED_YAK LED14;
    else veri = LED_SONDUR LED14;
    uart1->veriGonder(veri.data());
    emit led14Changed();
}

bool ScreenHandler::led15() const
{
    return m_led15;
}

void ScreenHandler::resetAll()
{
    setScreen(0);
    setLed0(false);
    setLed1(false);
    setLed2(false);
    setLed3(false);
    setLed4(false);
    setLed5(false);
    setLed6(false);
    setLed7(false);
    setLed8(false);
    setLed9(false);
    setLed10(false);
    setLed11(false);
    setLed12(false);
    setLed13(false);
    setLed14(false);
    setLed15(false);
    setLeddelay( 500 );
    setMotorhiz( 0 );
    setTempscreen( false );
    setMotorscreen( false );
}

void ScreenHandler::setLed15(bool newLed15)
{
    if (m_led15 == newLed15)
        return;
    m_led15 = newLed15;
    std::string veri;
    if(m_led15) veri = LED_YAK LED15;
    else veri = LED_SONDUR LED15;
    uart1->veriGonder(veri.data());
    emit led15Changed();
}


int ScreenHandler::leddelay() const
{
    return m_leddelay;
}

void ScreenHandler::setLeddelay(int newLeddelay)
{
    if (m_leddelay == newLeddelay)
        return;
    m_leddelay = newLeddelay;
    std::string veri = LED_DELAY;
    if (m_leddelay < 1000) veri += "0" + std::to_string(m_leddelay);
    else veri += std::to_string(m_leddelay);
    uart1->veriGonder(veri.data());

    emit leddelayChanged();
}

int ScreenHandler::motorhiz() const
{
    return m_motorhiz;
}

void ScreenHandler::setMotorhiz(int newMotorhiz)
{
    if (m_motorhiz == newMotorhiz)
        return;
    m_motorhiz = newMotorhiz;
    std::string veri = MOTOR_SUR;
    if( m_motorhiz < 10 )   veri += "000";
    else if ( m_motorhiz < 100 ) veri += "00";
    else if ( m_motorhiz < 1000 ) veri += "0";
    veri += std::to_string(m_motorhiz);
    uart1->veriGonder(veri.data());

    emit motorhizChanged();
}

float ScreenHandler::tempval() const
{
    return m_tempval;
}

void ScreenHandler::setTempval(float newTempval)
{
    if (qFuzzyCompare(m_tempval, newTempval))
        return;
    m_tempval = newTempval;
    emit tempvalChanged();
}

bool ScreenHandler::tempscreen() const
{
    return m_tempscreen;
}

void ScreenHandler::setTempscreen(bool newTempscreen)
{
    if (m_tempscreen == newTempscreen)
        return;
    m_tempscreen = newTempscreen;
    std::string veri;
    if ( m_tempscreen ) veri = SICAKLIK_OKU;
    else veri = SICAKLIK_DUR;
    veri += "0000";
    uart1->veriGonder(veri.data());

    emit tempscreenChanged();
}

bool ScreenHandler::motorscreen() const
{
    return m_motorscreen;
}

void ScreenHandler::setMotorscreen(bool newMotorscreen)
{
    if (m_motorscreen == newMotorscreen)
        return;
    m_motorscreen = newMotorscreen;
    emit motorscreenChanged();
}


QString ScreenHandler::uart1_port() const
{
    return m_uart1_port;
}

void ScreenHandler::setUart1_port(const QString &newUart1_port)
{
    if (m_uart1_port == newUart1_port)
        return;
    m_uart1_port = newUart1_port;
    emit uart1_portChanged();
}

int ScreenHandler::uart1_baudrate() const
{
    return m_uart1_baudrate;
}

void ScreenHandler::setUart1_baudrate(int newUart1_baudrate)
{
    if (m_uart1_baudrate == newUart1_baudrate)
        return;
    m_uart1_baudrate = newUart1_baudrate;
    emit uart1_baudrateChanged();
}

int ScreenHandler::uart1_timeout() const
{
    return m_uart1_timeout;
}

void ScreenHandler::setUart1_timeout(int newUart1_timeout)
{
    if (m_uart1_timeout == newUart1_timeout)
        return;
    m_uart1_timeout = newUart1_timeout;
    emit uart1_timeoutChanged();
}

QString ScreenHandler::uart2_port() const
{
    return m_uart2_port;
}

void ScreenHandler::setUart2_port(const QString &newUart2_port)
{
    if (m_uart2_port == newUart2_port)
        return;
    m_uart2_port = newUart2_port;
    emit uart2_portChanged();
}

int ScreenHandler::uart2_baudrate() const
{
    return m_uart2_baudrate;
}

void ScreenHandler::setUart2_baudrate(int newUart2_baudrate)
{
    if (m_uart2_baudrate == newUart2_baudrate)
        return;
    m_uart2_baudrate = newUart2_baudrate;
    emit uart2_baudrateChanged();
}

int ScreenHandler::uart2_timeout() const
{
    return m_uart2_timeout;
}

void ScreenHandler::setUart2_timeout(int newUart2_timeout)
{
    if (m_uart2_timeout == newUart2_timeout)
        return;
    m_uart2_timeout = newUart2_timeout;
    emit uart2_timeoutChanged();
}

void ScreenHandler::baglanButon()
{
    uart1 = new UartConnection(uart1_port(),uart1_baudrate(),uart1_timeout());
    uart2 = new UartConnection(uart2_port(),uart2_baudrate(),uart2_timeout());
    setScreen( 2 );
}

bool ScreenHandler::hepsiButon() const
{
    return m_hepsiButon;
}

void ScreenHandler::setHepsiButon(bool newHepsiButon)
{
    if (m_hepsiButon == newHepsiButon)
        return;
    m_hepsiButon = newHepsiButon;
    std::string veri;
    if ( m_hepsiButon ) veri = LED_YAK HEPSI;
    else veri = LED_SONDUR HEPSI;
    uart1->veriGonder(veri.data());
    m_led0 = m_hepsiButon;
    emit led0Changed();
    m_led1 = m_hepsiButon;
    emit led1Changed();
    m_led2 = m_hepsiButon;
    emit led2Changed();
    m_led3 = m_hepsiButon;
    emit led3Changed();
    m_led4 = m_hepsiButon;
    emit led4Changed();
    m_led5 = m_hepsiButon;
    emit led5Changed();
    m_led6 = m_hepsiButon;
    emit led6Changed();
    m_led7 = m_hepsiButon;
    emit led7Changed();
    m_led8 = m_hepsiButon;
    emit led8Changed();
    m_led9 = m_hepsiButon;
    emit led9Changed();
    m_led10 = m_hepsiButon;
    emit led10Changed();
    m_led11 = m_hepsiButon;
    emit led11Changed();
    m_led12 = m_hepsiButon;
    emit led12Changed();
    m_led13 = m_hepsiButon;
    emit led13Changed();
    m_led14 = m_hepsiButon;
    emit led14Changed();
    m_led15 = m_hepsiButon;
    emit led15Changed();
    emit hepsiButonChanged();
}

bool ScreenHandler::siraliButon() const
{
    return m_siraliButon;
}

void ScreenHandler::setSiraliButon(bool newSiraliButon)
{
    if (m_siraliButon == newSiraliButon)
        return;
    m_siraliButon = newSiraliButon;
    std::string veri;
    if ( m_siraliButon ) veri = LED_YAK SIRALI;
    else veri = LED_SONDUR SIRALI;
    uart1->veriGonder(veri.data());

    emit siraliButonChanged();
}

bool ScreenHandler::motortakipscreen() const
{
    return m_motortakipscreen;
}

void ScreenHandler::setMotortakipscreen(bool newMotortakipscreen)
{
    if (m_motortakipscreen == newMotortakipscreen)
        return;
    m_motortakipscreen = newMotortakipscreen;
    std::string veri;
    if ( m_motortakipscreen ) veri =  ADC_OKU;
    else veri = ADC_DUR;
    veri += "0000";
    uart1->veriGonder(veri.data());

    emit motortakipscreenChanged();
}
