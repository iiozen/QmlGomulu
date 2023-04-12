#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "Screens/classes/screenhandler.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<ScreenHandler>("ScreenHandler",1,0,"ScreenHandler");

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/GomuluProje/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
