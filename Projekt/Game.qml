import QtQuick

Item {
    id:game
    anchors.fill:parent

    Map {

    }

    Player {
        id:player
        x: map.player.positionX
        y: map.player.positionY
        Weapon{
            id:weapon
            x:player.width*0.7
            y:player.height*0.6
        }
    }


    Keys.onPressed: {
        if (event.key === Qt.Key_Escape) {
            if (inMenu) {
                Qt.quit();
            } else {
                inMenu = true;
                gameLoader.source = "StartMenu.qml";
            }
        }


    }

    Statistics{

    }

}
