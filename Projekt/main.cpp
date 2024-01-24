#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "player.h"
#include "gun.h"
#include "room.h"
#include "map.h"
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QQmlContext* context = engine.rootContext();

    Map * map=new Map();

    context->setContextProperty("map", map);



    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;
     return app.exec();

}
