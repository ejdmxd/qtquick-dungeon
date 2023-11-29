import QtQuick

Rectangle {
    anchors.fill:parent
    Grid {
        anchors.fill:parent
        columns: 10
        rows: 10
        Repeater {
            model:80
            Image {
                width:parent.width/10
                height:parent.width/10
                id: ine
                source: "images/flor.jpg"
            }
        }
    }
    Repeater {
        model: map.room.items
        Gun {
            itemIndex: index
        }
    }

}
