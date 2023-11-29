import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 500
    visible: true
    title: qsTr("Hello World")
    Map{

    }

    Player{
        x: map.player.positionX
        y: map.player.positionY
    }

    /*Zombie{
        x: zombie.enemyX
        y: zombie.enemyY
        Component.onCompleted: {
                console.log("Zombie position:", x, y);
            }

    }*/
        //room.printMap()


}
