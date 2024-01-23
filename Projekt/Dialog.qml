import QtQuick

Item {
    Rectangle {
        width: textItem.width + 10
        height: textItem.height + 10
        color: "red"
        visible: map.room.npc.isDialogVisible

        Text {
            id: textItem
            text: map.room.npc.dialog
            anchors.centerIn: parent
        }
    }
}
