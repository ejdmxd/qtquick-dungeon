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
    Item {
            NPC {
                x: map.room.npc ? map.room.npc.npcx : 0
                y: map.room.npc ? map.room.npc.npcy : 0
                visible: map.room.npc ? true : false

                Dialog {
                    anchors {
                        bottom: parent.top
                        verticalCenter: parent.verticalCenter
                    }
                }
            }
        }
}
