import QtQuick

Image {

    property int itemIndex:0
    x:map.room.items[itemIndex].positionX
    y:map.room.items[itemIndex].positionY
    Text{
        text:map.room.items[itemIndex].name
        color:"white"
    }

    Image {
        id: gun
        source: "images/gun.png"
        visible:map.room.items[itemIndex].name==="Gun"
        width:60
        height:40
    }
    Image {
        id: armor
        source: "images/armor.png"
        visible:map.room.items[itemIndex].name==="Armor"
        width:60
        height:60
    }

}
