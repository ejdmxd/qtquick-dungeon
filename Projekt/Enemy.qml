import QtQuick

Image {
    property int enemyIndex:0
    x:map.room.enemies[enemyIndex].enemyX
    y:map.room.enemies[enemyIndex].enemyY
    Text{
        text:"ok jedeto"
        color:"white"
    }

    Image {
        source: "images/zombie.png"
        visible: true
        width:60
        height:40
    }
}
