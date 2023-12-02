import QtQuick

Image {
    property int wallIndex:0
    width: 50
    height: 50
    source: "images/wall.jpg"
    x:map.room.walls[wallIndex].positionX
    y:map.room.walls[wallIndex].positionY

}
