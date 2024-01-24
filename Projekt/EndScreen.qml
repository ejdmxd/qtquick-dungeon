import QtQuick

Rectangle {
    id: endscreen
    width: 700
    height: 800
    visible: map.player.playersHealth <= 0 || map.player.isQuestDone
    anchors.centerIn: parent
    color: map.player.isQuestDone ? "green" : "darkred"

    Text {
        anchors.centerIn: parent
        text: map.player.isQuestDone ? "You Win! Quest Completed!" : "You Lost! Game Over!"
        font.pixelSize: 20
    }
}
