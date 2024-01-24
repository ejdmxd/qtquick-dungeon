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
            width: parent.width
            height: parent.height

            Image {
                id: fullHealthBar
                width: (parent.width-100) * (map.player.playersHealth / 1000)/2
                height: parent.height
                source: "images/fullhealthbar1.png"
                anchors {
                    left: parent.left
                    leftMargin: 80
                    top: parent.top
                    topMargin: -10
                }
            }

            Image {
                id: healthBar
                width: parent.width/2
                height: parent.height
                source: "images/healthbar.png"
                anchors {
                    left: parent.left
                    leftMargin: 30
                    top: parent.top
                    topMargin: -10
                }
            }

            Text{
                text: map.player.questInfo ? map.player.questInfo : "/"
                anchors {
                    right: parent.right
                    rightMargin: 120
                    top: parent.top
                    topMargin: 30
                }
            }
        }

}
