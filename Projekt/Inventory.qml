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
                        map.room.gunDropped(map.player.positionX,map.player.positionY,map.player.gun);
                        map.player.dropWeapon();
                        map.player.forceLayout();
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
                        map.room.armorDropped(map.player.positionX,map.player.positionY,map.player.armor);
                        map.player.dropArmor()
                        map.player.forceLayout();
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
        //POTION SLOT #####################################################################
        Row {
            spacing: 10

            Text {
                width: 80
                text: "Potions:"
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
                    text: map.player.numberOfPotions ? "Count: " + map.player.numberOfPotions : "No potions availible"
                    color: "white"
                    visible: true
                }
            }

            Rectangle {
                width: 80
                height: 60
                color: "green"
                radius: 5
                visible: map.player.potions

                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        console.log("DRINK");
                        map.player.drinkPotion()
                        map.player.heal()
                    }
                }

                Text {
                    anchors.centerIn: parent
                    text: "DRINK potion"
                    color: "white"
                    visible: true
                }
            }
        }
        //POTION SLOT END #####################################################################
        //STATISTICS SLOT #####################################################################


        Row {
            spacing: 10

            Text {
                width: 80
                text: "Statistics"
                color: "white"
                font.bold: true
                verticalAlignment: Text.AlignVCenter
                padding: 10
            }

            Rectangle {
                width: 185
                height: 60
                color: "black"
                radius: 5

                Text {
                    anchors.centerIn: parent
                    text: "Attack Damage: " + map.player.attack
                    color: "white"
                    visible: true
                }
            }

            Rectangle {
                width: 185
                height: 60
                color: "lightgrey"
                radius: 5

                Text {
                    anchors.centerIn: parent
                    text: "Armor: " + map.player.deff
                    color: "black"
                    visible: true
                }
            }


        }
        //STATISCICS END#####################################################################

    }
}
