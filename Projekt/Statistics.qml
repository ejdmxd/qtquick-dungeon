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
                width: (parent.width-100) * (map.player.playersHealth / 1000)
                height: parent.height
                source: "images/fullhealthbar1.png"
                anchors.left: parent.left
                anchors.leftMargin: 100
            }

            Image {
                id: healthBar
                width: parent.width
                height: parent.height
                source: "images/healthbar.png"
            }
        }

}
