import QtQuick

Image {
    property bool moving: false;
    property real moveX: 0;
    property real moveY: 0;
    property var keysPressed: [];
    property bool canFire: true;


    function updateMovement() {

             moveX = keysPressed.includes(Qt.Key_D) ? 1 : (keysPressed.includes(Qt.Key_A) ? -1 : 0);
             moveY = keysPressed.includes(Qt.Key_S) ? 1 : (keysPressed.includes(Qt.Key_W) ? -1 : 0);
             movementTimer.running = moveX !== 0 || moveY !== 0;

        }

    id: boy
    width: 100
    height: 100
    source: "images/playerRight.png"
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

                if (map.movingInMap(moveX,moveY,moveDistance))
                    map.player.movePlayer(moveX, moveY, moveDistance);
                // console.log("y", map.player.positionY, " x", map.player.positionX);
           }
        }

    Keys.onPressed: {
      if(!endscreen.visible){
        if (!moving) {
            keysPressed.push(event.key);
            updateMovement();

            if(event.key === Qt.Key_A){
                boy.source="images/playerLeft.png";
                weapon.source="images/revolverLeft.png"
                weapon.x = 0
            }else if(event.key === Qt.Key_D){
                boy.source="images/playerRight.png";
                weapon.source="images/revolverRight.png"
                weapon.x = player.width*0.7
            }
        }
        if((event.key === Qt.Key_Up || event.key === Qt.Key_Down || event.key === Qt.Key_Right || event.key === Qt.Key_Left) && canFire){
                    canFire = false
                    var bulletDirectionX
                    var bulletDirectionY

                    switch(event.key){
                    case Qt.Key_Up:
                        bulletDirectionX = 0
                        bulletDirectionY = -1
                        break
                    case Qt.Key_Down:
                        bulletDirectionX = 0
                        bulletDirectionY = 1
                        break
                    case Qt.Key_Left:
                        bulletDirectionX = -1
                        bulletDirectionY = 0
                        player.source="images/playerLeft.png";
                        weapon.source = "images/revolverLeft.png"
                        weapon.x = 0
                        break
                    case Qt.Key_Right:
                        bulletDirectionX = 1
                        bulletDirectionY = 0
                        player.source="images/playerRight.png";
                        weapon.source = "images/revolverRight.png"
                        weapon.x = player.width*0.7
                        break

                    }

                        var component = Qt.createComponent("Bullet.qml")

                        if(component.status === Component.Ready){
                            var bulletObj = component.createObject(game,{"x":map.player.positionX+50,"y":map.player.positionY+60,"directionX":bulletDirectionX,"directionY":bulletDirectionY})
                        }
                        fireCooldown.start()

                }
        if(event.key === Qt.Key_E){
            map.player.interact();

        }
      }
    }

    Keys.onReleased: {
        if (keysPressed.includes(event.key)) {
            keysPressed.splice(keysPressed.indexOf(event.key), 1);
            updateMovement();
        }
    }

    Timer {
        id: fireCooldown
        interval: 500
        onTriggered: {
            canFire = true
        }
    }


    Image {
            source: "images/damage.png"
            visible: map.player.beingAttacked
            width: parent.width
            height: parent.height
        }

    focus: true
}
