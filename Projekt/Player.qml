import QtQuick

Image {
    property bool moving: false;
    property real moveX: 0;
    property real moveY: 0;
    property var keysPressed: [];


    function updateMovement() {
            moveX = keysPressed.includes(Qt.Key_D) ? 1 : (keysPressed.includes(Qt.Key_A) ? -1 : 0);
            moveY = keysPressed.includes(Qt.Key_S) ? 1 : (keysPressed.includes(Qt.Key_W) ? -1 : 0);
            movementTimer.running = moveX !== 0 || moveY !== 0;
        }

    id: boy
    width: 100
    height: 100
    source: "images/playerLeft.png"
    Timer {
            property int moveDistance: 0
            id: movementTimer
            interval:25
            repeat:true
            running:false
            onTriggered: {
                if(moveX !== 0 && moveY !== 0){
                    moveDistance = 10/1.41
                }else{
                    moveDistance = 10
                }

                map.player.movePlayer(moveX, moveY, moveDistance);
                map.movingInMap();
                console.log("y", map.player.positionY, " x", map.player.positionX);
           }
        }

    Keys.onPressed: {
        if (!moving) {
            keysPressed.push(event.key);
            updateMovement();
            if(event.key === Qt.Key_A){
                boy.source="images/playerLeft.png";
            }else if(event.key === Qt.Key_D){
                boy.source="images/playerRight.png";
            }
        }
    }

    Keys.onReleased: {
        if (keysPressed.includes(event.key)) {
            keysPressed.splice(keysPressed.indexOf(event.key), 1);
            updateMovement();
        }
    }

    focus: true
}
