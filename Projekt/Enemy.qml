import QtQuick

Item{
    property int enemyIndex:0
    width:80
    height:50
    x:map.room.enemies[enemyIndex].enemyX
    y:map.room.enemies[enemyIndex].enemyY
    transform: Scale {
           xScale: map.room.enemies[enemyIndex].enemyRotation
           origin.x: width / 2
           origin.y: height / 2
       }
        Text{
            text:"ok jedeto"
            color:"white"
        }

        Timer {
            interval: 200
            running: true
            repeat: true
            onTriggered: {
                map.room.enemies[enemyIndex].findPlayer(map.player.positionX, map.player.positionY);
            }
        }


        Image {
            source: "images/zombie.png"
            visible: true
            width:parent.width
            height:parent.height
        }
}
