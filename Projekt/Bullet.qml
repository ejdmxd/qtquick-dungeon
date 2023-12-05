import QtQuick

Rectangle {
    id:bullet
    width:10
    height:10
    color:"blue"
    property int directionX: 0
    property int directionY: 0
    property int startX: x
    property int startY: y
    NumberAnimation on x{

        id: bullet_animation_x
        from: bullet.x
        to:bullet.x + bullet.directionX * 1000
        duration: 500
        running:true
    }
    NumberAnimation on y{

        id: bullet_animation_y
        from: bullet.y
        to:bullet.y + bullet.directionY * 1000
        duration: 500
        running:true
    }


    onYChanged: {
        if(bullet.y < -10 || bullet.y > 540){
            console.log("Destroyed")
            bullet.destroy()
        }
    }
    onXChanged: {
        if(bullet.x < -10 || bullet.x > 640){
            console.log("Destroyed")
            bullet.destroy()
        }
    }

}
