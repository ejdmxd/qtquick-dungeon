import QtQuick

Rectangle {
    height:  100
    width: 650
    color: "red"
    anchors {
            bottom: parent.bottom
            horizontalCenter: parent.horizontalCenter
        }

    Image{
        width: parent.width
        height: parent.height
        source: "images/border.jpg"
    }
    Item {
            width: parent.width/2
            height: parent.height/2

            Image {
                id: fullHealthBar
                width: (parent.width-50) * (map.player.playersHealth / 1000)
                height: parent.height
                source: "images/fullhealthbar1.png"
                anchors {
                    left: parent.left
                    leftMargin: 80
                    top: parent.top
                    topMargin: 20
                }
            }

            Image {
                id: healthBar
                width: parent.width
                height: parent.height
                source: "images/healthbar.png"
                anchors {
                    left: parent.left
                    leftMargin: 30
                    top: parent.top
                    topMargin: 20
                }
            }
        }

}
