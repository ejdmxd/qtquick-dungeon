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
}
