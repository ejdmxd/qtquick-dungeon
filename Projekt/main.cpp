#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "player.h"
#include "gun.h"
#include "room.h"
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QQmlContext* context = engine.rootContext();



    Room * room=new Room();
    context->setContextProperty("room", room);

    /*QObject::connect(
        engine.rootObjects().first(), SIGNAL(mySignal(QString)),
        &signalHandler, SLOT(handleSignal(QString))
        );*/
    //TODO connect CPP to QML
    Player* player=new Player();
    context->setContextProperty("player", player);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;
    /*Gun * gun=new Gun(3,3,);
    std::cout<<gun->getDemage()<<std::endl;*/


    return app.exec();
}
