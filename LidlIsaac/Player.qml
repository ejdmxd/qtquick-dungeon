import QtQuick

Rectangle{
    id: playerBody
    width: 100
    height: 100
    border.width: 5
    rotation: player.rotationAngle
    Text{
        text: "X X\n  _"
        font{
            pointSize: 25
        }
        anchors{
            horizontalCenter: parent.horizontalCenter
            top: parent.top
        }

    }
    Keys.onPressed: {
        if (event.key === Qt.Key_W) {
            player.movePlayer("up", 10);
            console.log("W!");
        } else if (event.key === Qt.Key_S) {
            player.movePlayer("down", 10);
        } else if (event.key === Qt.Key_A) {
            player.movePlayer("left", 10);
        } else if (event.key === Qt.Key_D) {
            player.movePlayer("right", 10);
        }
    }
    focus: true
}
