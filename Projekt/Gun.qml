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
        id: startingGun
        source: "images/slingshot.png"
        visible:map.room.items[itemIndex].name==="Starting Weapon"
        width:80
        height:48
    }
    Image {
        id: startingArmor
        source: "images/startingArmor.png"
        visible:map.room.items[itemIndex].name==="Starting Armor"
        width:40
        height:60
    }
    Image {
        id: gun
        source: "images/gun.png"
        visible:map.room.items[itemIndex].name==="Common Gun"
        width:60
        height:40
    }
    Image {
        id: armor
        source: "images/armor.png"
        visible:map.room.items[itemIndex].name==="Common Armor"
        width:60
        height:60
    }

    Image {
        id: potion
        source: "images/potionn.png"
        visible:map.room.items[itemIndex].name==="Heal Potion"
        width:60
        height:60
    }

    Image {
        id: rareArmor
        source: "images/rarearmor.png"
        visible:map.room.items[itemIndex].name==="Rare Armor"
        width:60
        height:60
    }

    Image {
        id: rareGun
        source: "images/rareGun.png"
        visible:map.room.items[itemIndex].name==="Rare Gun"
        width:80
        height:48
    }

}
