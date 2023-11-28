import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Map{

    }

    Player{
        x: player.positionX
        y: player.positionY
    }

    Zombie{
        x: zombie.enemyX
        y: zombie.enemyY
        Component.onCompleted: {
                console.log("Zombie position:", x, y);
            }

    }


}
