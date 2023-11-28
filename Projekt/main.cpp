#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "player.h"
#include "gun.h"
#include "zombie.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QQmlContext* context = engine.rootContext();

    //TODO connect CPP to QML
    Player* player=new Player();
    context->setContextProperty("player", player);

    Enemy* enemy = Enemy::getEnemy(1, 80, 50);
    Zombie* zm = dynamic_cast<Zombie*>(enemy);
    std::cout << "x:"<<zm->getEnemyPosX() << std::endl;
    std::cout << "y:"<<zm->getEnemyPosY() << std::endl;

    context->setContextProperty("zombie", zm);


    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;
    Gun * gun=new Gun(3,3);
    std::cout<<gun->getDemage()<<std::endl;
    return app.exec();
}
