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
    if(m_led0) komut = LED_YAK LED0;
    else komut = LED_SONDUR LED0;
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);

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
    if(m_led1) komut = LED_YAK LED1;
    else komut = LED_SONDUR LED1;
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);    
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
    if(m_led2) komut = LED_YAK LED2;
    else komut = LED_SONDUR LED2;
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);
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
    if(m_led3) komut = LED_YAK LED3;
    else komut = LED_SONDUR LED3;
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);
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
    if(m_led4) komut = LED_YAK LED4;
    else komut = LED_SONDUR LED4;
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);
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
    if(m_led5) komut = LED_YAK LED5;
    else komut = LED_SONDUR LED5;
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);
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
    if(m_led6) komut = LED_YAK LED6;
    else komut = LED_SONDUR LED6;
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);
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
    if(m_led7) komut = LED_YAK LED7;
    else komut = LED_SONDUR LED7;
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);
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
    if(m_led8) komut = LED_YAK LED8;
    else komut = LED_SONDUR LED8;
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);
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
    if(m_led9) komut = LED_YAK LED9;
    else komut = LED_SONDUR LED9;
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);
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
    if(m_led10) komut = LED_YAK LED10;
    else komut = LED_SONDUR LED10;
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);
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
    if(m_led11) komut = LED_YAK LED11;
    else komut = LED_SONDUR LED11;
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);
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
    if(m_led12) komut = LED_YAK LED12;
    else komut = LED_SONDUR LED12;
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);
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

    if(m_led13) komut = LED_YAK LED13;
    else komut = LED_SONDUR LED13;
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);
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

    if(m_led14) komut = LED_YAK LED14;
    else komut = LED_SONDUR LED14;
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);
    emit led14Changed();
}

bool ScreenHandler::led15() const
{
    return m_led15;
}

void ScreenHandler::resetAll()
{

    setScreen(0);
    m_hepsiButon = false;
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
    m_motorhiz = 0;
    m_leddelay= 500;
    m_tempval= 75.265;
    m_motorscreen= false;
    m_tempscreen= false;
    m_motortakipscreen= false;
    m_siraliButon= false;
}

void ScreenHandler::setLed15(bool newLed15)
{
    if (m_led15 == newLed15)
        return;
    m_led15 = newLed15;

    if(m_led15) komut = LED_YAK LED15;
    else komut = LED_SONDUR LED15;
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);
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
    komut = LED_DELAY;
    if (m_leddelay < 1000) komut += "0" + std::to_string(m_leddelay);
    else komut += std::to_string(m_leddelay);
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);
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
    komut = MOTOR_SUR;
    if( m_motorhiz < 10 )   komut += "000";
    else if ( m_motorhiz < 100 ) komut += "00";
    else if ( m_motorhiz < 1000 ) komut += "0";
    komut += std::to_string(m_motorhiz);
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,MOTORSUR);
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
    if ( m_tempscreen ) komut = SICAKLIK_OKU;
    else komut = SICAKLIK_DUR;
    komut += "0000";
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,TEMPAC);
    if( m_tempscreen )
        uartveriOku(uart2,TEMPOKU);

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
    komut = BAGLANTI;
    uart1->veriGonder(komut.data());
    thread1 = new QThread;
    thread2 = new QThread;

    m_threadsdeleted = 0;

    uart1->moveToThread(thread1);
    uart2->moveToThread(thread2);

    connect(thread1,&QThread::started,uart1,&UartConnection::veriOku);
    connect(thread2,&QThread::started,uart2,&UartConnection::veriOku);


    connect(this,&ScreenHandler::uartlarisil,this,&ScreenHandler::threadsDeleting);

    connect(this,&ScreenHandler::threadleriSil,this,&ScreenHandler::resetAll);

    connect(thread1,&QThread::finished,this,&ScreenHandler::threadsDeleting);
    connect(thread2,&QThread::finished,this,&ScreenHandler::threadsDeleting);


    connect(thread1,&QThread::destroyed,this,&ScreenHandler::Yikildi);
    connect(thread2,&QThread::destroyed,this,&ScreenHandler::Yikildi);

    uartveriOku(uart1,BAGLAN);
    connect(uart2,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuGRAPHOKU,Qt::QueuedConnection);
    connect(uart2,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuTEMPOKU,Qt::QueuedConnection);


    connect(this,&ScreenHandler::veriokumaBitti,thread1,&QThread::quit);
    connect(this,&ScreenHandler::veriokumaBitti2,thread2,&QThread::quit);

//    thread2->start();
//    thread2->quit();

//    emit veriokumaBitti2();
}

bool ScreenHandler::hepsiButon() const
{
    return m_hepsiButon;
}

void ScreenHandler::setHepsiButon(bool newHepsiButon)
{
//    if (m_hepsiButon == newHepsiButon)
//        return;
    m_hepsiButon = newHepsiButon;
    std::string veri;    
    if ( m_hepsiButon ) veri = LED_YAK HEPSI;
    else veri = LED_SONDUR HEPSI;

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

    uart1->veriGonder(veri.data());
    uartveriOku(uart1,LED);
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

    if ( m_siraliButon ) komut = LED_YAK SIRALI;
    else komut = LED_SONDUR SIRALI;
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,LED);
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

    if ( m_motortakipscreen ) komut =  ADC_OKU;
    else komut = ADC_DUR;
    komut += "0000";
    uart1->veriGonder(komut.data());
    uartveriOku(uart1,GRAPHAC);
    if ( m_motortakipscreen )
        uartveriOku(uart2,GRAPHOKU);
    emit motortakipscreenChanged();
}


void ScreenHandler::veriOkuBAGLAN(UartConnection* uart,QSharedPointer<std::string> veri)
{
    disconnect(uart,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuBAGLAN);
    if(veri->data()[0] == '1' && veri->length() == 1){        
        setScreen( 2 );
        emit veriokumaBitti();
    }
    else {
        if(baglanadet<5) {
            baglanadet++;
            uartveriOku(uart,BAGLAN);
        }
        else {
            baglanadet= 0;
            setScreen( 0 );
            baglantiyiKes();
            emit veriokumaBitti();

        }
    }
}

void ScreenHandler::veriOkuLED(UartConnection* uart,QSharedPointer<std::string> veri)
{
    disconnect(uart,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuLED);
    if(veri->data()[0] == '1' && veri->length() == 1)
        emit veriokumaBitti();
    else {
        if(baglanadet<5) {
            baglanadet++;
            uartveriOku(uart,LED);
        }
        else {
            baglanadet=0;
            komut =  BAGLANTI;
            uartveriOku(uart,BAGLAN);
            m_motortakipscreen= false;
            m_tempscreen= false;
            emit veriokumaBitti();
        }
    }

}

void ScreenHandler::veriOkuMOTORSUR(UartConnection* uart,QSharedPointer<std::string> veri)
{
    disconnect(uart,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuMOTORSUR);
    if(veri->data()[0] == '1' && veri->length() == 1)
        emit veriokumaBitti();
    else {
        if(baglanadet<5) {
            baglanadet++;
            uartveriOku(uart,MOTORSUR);
        }
        else {
            baglanadet=0;
            komut =  BAGLANTI;
            uartveriOku(uart,BAGLAN);
            m_motortakipscreen= false;
            m_tempscreen= false;
            emit veriokumaBitti();
        }
    }
}

void ScreenHandler::veriOkuTEMPAC(UartConnection* uart,QSharedPointer<std::string> veri)
{
    disconnect(uart,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuTEMPAC);
    if(veri->data()[0] == '1' && veri->length() == 1)
        emit veriokumaBitti();
    else {
        if(baglanadet<5) {
            baglanadet++;
            uartveriOku(uart,TEMPAC);
        }
        else {
            baglanadet=0;
            komut =  BAGLANTI;
            uartveriOku(uart,BAGLAN);
            m_motortakipscreen= false;
            m_tempscreen= false;
            emit veriokumaBitti();
        }
    }
}

void ScreenHandler::veriOkuGRAPHAC(UartConnection* uart,QSharedPointer<std::string> veri)
{
    disconnect(uart,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuGRAPHAC);
    if(veri->data()[0] == '1' && veri->length() == 1)
        emit veriokumaBitti();
    else {
        if(baglanadet<5) {
            baglanadet++;
            uartveriOku(uart,GRAPHAC);
        }
        else {
            baglanadet=0;
            komut =  BAGLANTI;
            uartveriOku(uart,BAGLAN);
            m_motortakipscreen= false;
            m_tempscreen= false;
            emit veriokumaBitti();
        }
    }
}

void ScreenHandler::veriOkuTEMPOKU(UartConnection* uart,QSharedPointer<std::string> veri)
{
    QSharedPointer<std::string> tempderece(new std::string);
    int verilen = veri->length();
    for (int i = 0; i<verilen;i++) {
        char karakter = veri->data()[i];
        if (karakter == 'S' && i+1 <verilen){
            char karakter2 = veri->data()[i+1];
            if(karakter2 == 'O') {
                i += 2;
                while(veri->data()[i] != '.' && i < verilen ) {
                    *tempderece += veri->data()[i];
                    i++;
                }
                for ( int j = i;j<i+5 && j < verilen ;j++) *tempderece += veri->data()[j];
                if (tempderece->length() > 5 ) {
                    float derece = std::stof(tempderece->data());
                    setTempval(derece);
                    break;
                }
            }
        }
    }
    if( m_tempscreen ) {
        uartveriOku(uart,TEMPOKU);
    }
    else {
        emit veriokumaBitti2();
    }
}

void ScreenHandler::veriOkuGRAPHOKU(UartConnection* uart,QSharedPointer<std::string> veri)
{

    QSharedPointer<std::string> motorhiz(new std::string);
    int verilen = veri->length();
    for (int i = 0; i<verilen;i++) {
        char karakter = veri->data()[i];
        if (karakter == 'A' && i+1 <verilen){
            char karakter2 = veri->data()[i+1];
            if(karakter2 == 'O') {
                i += 2;
                while(veri->data()[i] != '.' && i < verilen ) {
                    *motorhiz += veri->data()[i];
                    i++;
                }
                for ( int j = i;j<i+4 && j < verilen ;j++) *motorhiz += veri->data()[j];
                if (motorhiz->length() > 4 ) {
                    setMotorunhizi(std::stof(motorhiz->data()));
                    break;
                }
            }
        }
    }
    if( m_motortakipscreen ) {
        uartveriOku(uart,GRAPHOKU);
    }
    else {

        emit veriokumaBitti2();
    }
}

void ScreenHandler::Yikildi()
{
    qInfo()<< "Thread Yikildi";
}

void ScreenHandler::uartveriOku(UartConnection *uart,OkumaTipleri tip)
{
    connect(this,&ScreenHandler::veriokumaBitti,thread1,&QThread::quit);
    connect(this,&ScreenHandler::veriokumaBitti2,thread2,&QThread::quit);
    if(tip == BAGLAN ) {
        connect(uart,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuBAGLAN,Qt::QueuedConnection);
        if(!thread1->isRunning()) {
            thread1->start();
        }
        else {
            uart->veriGonder(komut.data());
            uart->veriOkumaRun();
        }
        setScreen( 1 );

    }
    else if(tip == LED) {
        connect(uart,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuLED,Qt::QueuedConnection);
        if(!thread1->isRunning()) {
            thread1->start();
        }
        else {
            uart->veriGonder(komut.data());
            uart->veriOkumaRun();
        }
    }
    else if(tip == MOTORSUR) {
        connect(uart,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuMOTORSUR,Qt::QueuedConnection);
        if(!thread1->isRunning()) {
            thread1->start();
        }
        else {
            uart->veriGonder(komut.data());
            uart->veriOkumaRun();
        }
    }
    else if(tip == TEMPAC) {
        connect(uart,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuTEMPAC,Qt::QueuedConnection);
        if(!thread1->isRunning()) {
            thread1->start();
        }
        else {
            uart->veriGonder(komut.data());
            uart->veriOkumaRun();
        }
    }
    else if(tip == GRAPHAC) {
        connect(uart,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuGRAPHAC,Qt::QueuedConnection);
        if(!thread1->isRunning()) {
            thread1->start();
        }
        else {
            uart->veriGonder(komut.data());
            uart->veriOkumaRun();
        }
    }
    else if(tip == TEMPOKU) {
//        connect(uart,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuTEMPOKU,Qt::QueuedConnection);
//        if (m_tempscreen)
//            connect(uart,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuTEMPOKU,Qt::QueuedConnection);
        if ( !thread2->isRunning()) {
            qInfo() << "tempoku thread2 isrunning:"<<thread2->isRunning();
            thread2->start();
            uart->veriOkumaRun();
        }
        else
            uart->veriOkumaRun();
    }
    else if(tip == GRAPHOKU) {        
//        connect(uart,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuGRAPHOKU,Qt::QueuedConnection);
//        if (m_motortakipscreen)
//            connect(uart,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuGRAPHOKU,Qt::QueuedConnection);
        if ( !thread2->isRunning()) {
            qInfo() << "thread2 graph isrunning:"<<thread2->isRunning();
            thread2->start();
            uart->veriOkumaRun();
        }
        else
            uart->veriOkumaRun();
    }
}


float ScreenHandler::motorunhizi() const
{
    return m_motorunhizi;
}

void ScreenHandler::setMotorunhizi(float newMotorunhizi)
{
    if (qFuzzyCompare(m_motorunhizi, newMotorunhizi))
        return;
    m_motorunhizi = newMotorunhizi;
    emit motorunhiziChanged();
}

void ScreenHandler::threadsDeleting()
{
    qInfo()<< (uart1==NULL) << (uart2 == NULL) << thread1->isFinished() << thread2->isFinished();
    qInfo() << thread1->isRunning() << thread2->isRunning();

    if(uart1 == NULL && uart2 == NULL && thread2->isFinished() && thread1->isFinished() && !m_threadsdeleted) {
        m_threadsdeleted = 1;
        thread1->deleteLater();
        thread2->deleteLater();
        emit threadleriSil();
    }
}

void ScreenHandler::baglantiyiKes()
{
    qInfo() << "baglantiyikes";
    m_tempscreen= false;

    emit tempscreenChanged();
    m_motortakipscreen= false;
    emit motortakipscreenChanged();
    uartveriOku(uart2,TEMPOKU);
    uartveriOku(uart2,GRAPHOKU);
    disconnect(uart2,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuTEMPOKU);
    disconnect(uart2,&UartConnection::veriOkundu,this,&ScreenHandler::veriOkuGRAPHOKU);
    if (uart1 != NULL ){
        delete uart1;
        uart1 = NULL;
        qInfo() <<"uart1 deletelater" << uart1;
    }
    if ( uart2 != NULL) {
        delete uart2;
        uart2 = NULL;
        qInfo() <<"uart2 deletelater";
    }
    thread1->quit();
    thread2->quit();

    while (!thread1->isFinished() || !thread2->isFinished() ) {}
    emit uartlarisil();
}


