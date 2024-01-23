import QtQuick

Rectangle {
    anchors.fill:parent
    Grid {
        anchors.fill:parent
        columns: 10
        rows: 10
        Repeater {
            model:100
            Image {
                width:parent.width/10
                height:parent.height/10
                source: "images/flor.jpg"

            }
        }
    }
    Repeater {
        model: map.room.walls
        Wall {
            wallIndex: index

        }
    }
    Repeater {
        model: map.room.items
        Gun {
            itemIndex: index

        }
    }
    Repeater {
        model: map.room.enemies
        Enemy {
            enemyIndex: index
        }
    }
    NPC{
        visible: map.room.npc !== null
        x:map.room.npc.npcx
        y: map.room.npc.npcy
    }
}
