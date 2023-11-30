import QtQuick

Item {
    anchors.fill:parent
    Map {

    }

    Player {
        x: map.player.positionX
        y: map.player.positionY
    }

    //další komponenty
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
}
