import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 500
    visible: true
    title: qsTr("Hello World")

    property bool inMenu: true

    Loader {
        id: gameLoader
        source: inMenu ? "StartMenu.qml" : "Game.qml"
    }


}
