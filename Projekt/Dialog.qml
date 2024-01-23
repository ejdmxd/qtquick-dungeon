import QtQuick

Item {
    Rectangle {
        width: textItem.width + 10
        height: textItem.height + 10
        color: "red"
        visible: map.room.npc ? map.room.npc.isDialogVisible : false

        Text {
            id: textItem
            text: map.room.npc.dialog
            anchors.centerIn: parent
        }
    }
}
