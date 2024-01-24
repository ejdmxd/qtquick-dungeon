import QtQuick

Rectangle {
    id:bullet
    width:10
    height:10
    color:"blue"
    radius: width / 2;
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
        for (var i = 0; i < map.room.enemies.length; i++) {
            var enemy = map.room.enemies[i];
            var room = map.room;
            var enemyMinX = enemy.enemyX;
            var enemyMinY = enemy.enemyY;
            var enemyMaxX = enemy.enemyX + 80;
            var enemyMaxY = enemy.enemyY + 50;


            if (bullet.directionY == -1 && bullet.y < enemyMaxY && bullet.y > enemyMinY && bullet.x > enemyMinX && bullet.x < enemyMaxX) {
                room.updateEnemy(i,map.player.getAttack(),map.player);
                bullet.destroy();
            } else if (bullet.directionY == 1 && bullet.y > enemyMinY && bullet.y < enemyMaxY && bullet.x > enemyMinX && bullet.x < enemyMaxX) {
                room.updateEnemy(i,map.player.getAttack(),map.player);
                bullet.destroy();
            }
        }

        if(bullet.y < -10 || bullet.y > 540){
            bullet.destroy();
        }
    }
    onXChanged: {
        for (var i = 0; i < map.room.enemies.length; i++) {
            var enemy = map.room.enemies[i];
            var room = map.room;
            var enemyMinX = enemy.enemyX;
            var enemyMinY = enemy.enemyY;
            var enemyMaxX = enemy.enemyX + 80;
            var enemyMaxY = enemy.enemyY + 50;

            if (bullet.directionX == -1 && bullet.x < enemyMaxX && bullet.x > enemyMinX && bullet.y > enemyMinY && bullet.y < enemyMaxY) {
                room.updateEnemy(i,map.player.getAttack(),map.player);
                bullet.destroy();
            } else if (bullet.directionX == 1 && bullet.x > enemyMinX && bullet.x < enemyMaxX && bullet.y > enemyMinY && bullet.y < enemyMaxY) {
                room.updateEnemy(i,map.player.getAttack(),map.player);
                bullet.destroy();
            }
        }
        if(bullet.x < -10 || bullet.x > 640){
            bullet.destroy();
        }
    }

}
