// Inventory.qml
import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    id: inventory
    width: 500
    height: 400
    color: "#282c34"
    visible: map.player.inventory.visible
    anchors.centerIn: parent
    z: 100

    Column {
        anchors.fill: parent
        spacing: 10
        padding: 10

        Rectangle {
            width: parent.width - 20
            height: 100

            Image {
                anchors.centerIn: parent
                width: 70
                height: 70
                source: "images/playerRight.png"
            }

            Text {
                text: "Inventory"
                anchors.horizontalCenter: parent.horizontalCenter
                color: "Black"
                font.bold: true
            }
        }
        // WEAPON SLOT ##################################################################
        Row {
            spacing: 10

            Text {
                width: 80
                text: "Weapon Info"
                color: "white"
                font.bold: true
                verticalAlignment: Text.AlignVCenter
                padding: 10
            }

            Rectangle {
                width: 140
                height: 60
                color: "black"
                radius: 5

                Text {
                    anchors.centerIn: parent
                    text: map.player.gun ? "Bonus: " + map.player.weaponDmg : "No weapon equipped"
                    color: "white"
                    visible: true
                }
            }

            Rectangle {
                width: 140
                height: 60
                color: "lightgrey"
                radius: 5

                Text {
                    anchors.centerIn: parent
                    text: map.player.gun ? "Name: " + map.player.weaponName : "No weapon equipped"
                    color: "black"
                    visible: true
                }
            }

            // Tlačítko DROP weapon
            Rectangle {
                width: 80
                height: 60
                color: "red"
                radius: 5
                visible: map.player.gun

                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        // Zde přidej kód pro funkčnost DROP weapon
                        console.log("DROP");
                    }
                }

                Text {
                    anchors.centerIn: parent
                    text: "DROP weapon"
                    color: "white"
                    visible: true
                }
            }
        }
        // WEAPON SLOT END##################################################################
        //ARMOR SLOT #####################################################################


        Row {
            spacing: 10

            Text {
                width: 80
                text: "Armor Info"
                color: "white"
                font.bold: true
                verticalAlignment: Text.AlignVCenter
                padding: 10
            }

            Rectangle {
                width: 140
                height: 60
                color: "black"
                radius: 5

                Text {
                    anchors.centerIn: parent
                    text: map.player.armor ? "Bonus: " + map.player.armorDef : "No armor equipped"
                    color: "white"
                    visible: true
                }
            }

            Rectangle {
                width: 140
                height: 60
                color: "lightgrey"
                radius: 5

                Text {
                    anchors.centerIn: parent
                    text: map.player.armor ? "Name: " + map.player.armorName : "No armor equipped"
                    color: "black"
                    visible: true
                }
            }

            // Tlačítko DROP armor
            Rectangle {
                width: 80
                height: 60
                color: "red"
                radius: 5
                visible: map.player.armor

                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        // Zde přidej kód pro funkčnost DROP armor
                        console.log("DROP");
                    }
                }

                Text {
                    anchors.centerIn: parent
                    text: "DROP armor"
                    color: "white"
                    visible: true
                }
            }
        }
        //ARMOR SLOT END#####################################################################
        Rectangle {
            width: parent.width-20
            height: 60
            color: "#61dafb"

            Text {
                text: "Potion Slot"
                anchors.centerIn: parent
                color: "white"
            }
        }

        Rectangle {
            width: parent.width -20
            height: 40
            color: "#61dafb"

            Text {
                text: "Damage: " + player.getAttack()
                anchors.centerIn: parent
                color: "white"
            }
        }

    }
}
