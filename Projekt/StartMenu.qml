import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

Rectangle {
    width: 650
    height: 550
    color: "lightblue"

    signal startGameClicked()

    ColumnLayout {
        anchors.centerIn: parent

        Label {
            text: "Mínótauros"
            font.bold: true
            font.pixelSize: 50
            color: "white"
            padding: 5
        }

        Button {
            text: "Start"
            Layout.fillWidth: true
            Layout.fillHeight: true
            onClicked: {
                    inMenu = false;
                    gameLoader.source = "Game.qml";
            }

            background: Rectangle {
                color: "lightgreen"
                radius: 5
            }

            contentItem: Text {
                text: "Start"
                color: "white"
                font.bold: true
            }
        }

        Button {
            text: "Exit"
            Layout.fillWidth: true
            Layout.fillHeight: true
            onClicked: Qt.quit()

            background: Rectangle {
                color: "tomato"
                radius: 5
            }

            contentItem: Text {
                text: "Exit"
                color: "white"
                font.bold: true
            }
        }

        Button {
            text: "Controls"
            Layout.fillWidth: true
            Layout.fillHeight: true
            onClicked: console.log("Controls button clicked")

            background: Rectangle {
                color: "darkslategray"
                radius: 5
            }

            contentItem: Text {
                text: "Controls"
                color: "white"
                font.bold: true
            }
        }

        Button {
            text: "Creators"
            Layout.fillWidth: true
            Layout.fillHeight: true
            onClicked: console.log("Creators button clicked")

            background: Rectangle {
                color: "lightcoral"
                radius: 5
            }

            contentItem: Text {
                text: "Creators"
                color: "white"
                font.bold: true
            }
        }
    }
}
