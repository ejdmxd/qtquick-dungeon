import QtQuick

Item {
    Rectangle {
        width: textItem.width + 20
        height: textItem.height + 20
        color: "#EEE5E9"
        border.color: "#00100b" // Barva ohraničení
        border.width: 3
        radius: 10
        visible: map.room.npc ? map.room.npc.isDialogVisible : false

        Text {
            id: textItem
            text: map.room.npc ? map.room.npc.dialog : ""
            color: "Black" // Barva textu na bílou
            font.bold: true // Tučný text
            wrapMode: Text.WrapAnywhere // Povolení zalamování textu
            anchors.centerIn: parent
            padding: 10 // Odstup textu od okraje
        }
    }
}

