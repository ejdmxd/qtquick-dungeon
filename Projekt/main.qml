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
}
