import QtQuick

Item {
    id:game
    anchors.fill:parent
    Map {

    }

    Player {
        id:player
        x: map.player.positionX
        y: map.player.positionY
        Weapon{
            id:weapon
            x:player.width*0.7
            y:player.height*0.6
        }
    }


    //další komponenty
    Keys.onPressed: {
        if (event.key === Qt.Key_Escape) {
            if (inMenu) {
                Qt.quit();
            } else {
                inMenu = true;
                gameLoader.source = "StartMenu.qml";
            }
        }
        else if(event.key === Qt.Key_Up || event.key === Qt.Key_Down || event.key === Qt.Key_Right || event.key === Qt.Key_Left){
            var bulletDirectionX
            var bulletDirectionY
            switch(event.key){
            case Qt.Key_Up:
                bulletDirectionX = 0
                bulletDirectionY = -1
                weapon.visible = true
                break
            case Qt.Key_Down:
                bulletDirectionX = 0
                bulletDirectionY = 1
                weapon.visible = true
                break
            case Qt.Key_Left:
                bulletDirectionX = -1
                bulletDirectionY = 0
                player.source="images/playerLeft.png";
                weapon.source = "images/revolverLeft.png"
                weapon.x = 0
                weapon.visible = true
                break
            case Qt.Key_Right:
                bulletDirectionX = 1
                bulletDirectionY = 0
                player.source="images/playerRight.png";
                weapon.source = "images/revolverRight.png"
                weapon.x = player.width*0.7
                weapon.visible = true
                break

            }

            var component = Qt.createComponent("Bullet.qml")
            if(component.status === Component.Ready){
                var bulletObj = component.createObject(game,{"x":map.player.positionX+50,"y":map.player.positionY+60,"directionX":bulletDirectionX,"directionY":bulletDirectionY})
            }


        }

//        else if (event.key === Qt.Key_Up) {
//            var component = Qt.createComponent("Bullet.qml")
//            if(component.status === Component.Ready){
//                component.createObject(game,{"x":map.player.positionX,"y":map.player.positionY,"direction":"up"})
//            }
//        }
//        else if (event.key === Qt.Key_Down) {
//            var component = Qt.createComponent("Bullet.qml")
//            if(component.status === Component.Ready){
//                component.createObject(game,{"x":map.player.positionX,"y":map.player.positionY,"direction":"down"})
//            }
//        }
//        else if (event.key === Qt.Key_Left) {
//            var component = Qt.createComponent("Bullet.qml")
//            if(component.status === Component.Ready){
//                component.createObject(game,{"x":map.player.positionX,"y":map.player.positionY,"direction":"left"})
//            }
//        }
//        else if (event.key === Qt.Key_Right) {
//            var component = Qt.createComponent("Bullet.qml")
//            if(component.status === Component.Ready){
//                component.createObject(game,{"x":map.player.positionX,"y":map.player.positionY,"direction":"right"})
//            }
//        }
    }
    Keys.onReleased: {
        weapon.visible = false
    }
}
