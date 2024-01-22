// Inventory.qml
import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    id: inventory
    width: 500
    height: 400
    color: "#282c34" // Barva pozadí inventáře
    visible: map.player.inventory.visible
    anchors.centerIn: parent
    z: 100

    Column {
        anchors.fill: parent
        spacing: 10
        padding: 10


        // Obrázek hráče
        Rectangle {
            width: parent.width -20
            height: 100

            Image{
                anchors.topMargin: 10
                anchors.centerIn: parent
                width: 80
                height: 80
                source: "images/playerRight.png"
            }

            // Zde můžete přidat Image s obrázkem hráče

            Text {
                text: "Player"
                anchors.left: parent.left
                color: "Black" // Barva textu
            }
        }

        // Slot pro zbraň
        Rectangle {
            width: parent.width
            height: 60 // Upravena výška
            color: "#61dafb" // Barva pozadí pro zbraň

            // Zde můžete přidat prostor pro zbraň

            Text {
                text: "Weapon Info"
                anchors.left: parent.left
                color: "white" // Barva textu
                font.bold: true
            }

            Rectangle {
                width: 150
                height: 60
                color:"lightgrey"
                anchors.horizontalCenter: parent.horizontalCenter // Opraveno pro zarovnání na střed
                        anchors.verticalCenter: parent.verticalCenter // Zarovnání i na svislý střed
                Text {
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.verticalCenter: parent.verticalCenter // Zarovnání na svislý střed
                    text: map.player.inventory.gun ? "Weapon damage bonus " + map.player.inventory.gun.weaponDamage : "You don't have any weapon"
                }
            }
        }



        // Slot pro armor
        Rectangle {
            width: parent.width
            height: 60 // Upravena výška
            color: "#61dafb" // Barva pozadí pro armor

            // Zde můžete přidat prostor pro armor

            Text {
                text: "Armor Slot"
                anchors.centerIn: parent
                color: "white" // Barva textu
            }
        }

        // Slot pro potiony
        Rectangle {
            width: parent.width
            height: 60 // Upravena výška
            color: "#61dafb" // Barva pozadí pro potiony

            // Zde můžete přidat prostor pro potiony

            Text {
                text: "Potion Slot"
                anchors.centerIn: parent
                color: "white" // Barva textu
            }
        }

        // Řádek pro DAMAGE
        Rectangle {
            width: parent.width
            height: 40 // Upravena výška
            color: "#61dafb" // Barva pozadí pro DAMAGE

            // Zde můžete přidat prostor pro DAMAGE

            Text {
                text: "Damage: " + player.getAttack()
                anchors.centerIn: parent
                color: "white" // Barva textu
            }
        }

        // Řádek pro DEFF
        Rectangle {
            width: parent.width
            height: 40 // Upravena výška
            color: "#61dafb" // Barva pozadí pro DEFF

            // Zde můžete přidat prostor pro DEFF

            Text {
                text: "DEFF: " + player.getDef()
                anchors.centerIn: parent
                color: "white" // Barva textu
            }
        }
    }
}
