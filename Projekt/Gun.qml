import QtQuick

Image {
    property int itemIndex:0
    x:room.items[itemIndex].positionX
    y:room.items[itemIndex].positionY
    width:60
    height:40
    id: wepon
    source: "images/gun.png"
}
