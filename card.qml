import QtQuick 2.0

Item {
    id: card
    width:100;height:60
    signal cardClicked

    property string currentImage: "default-image.png"

    Image {
        id: name
        source: card.currentImage
    }

    MouseArea{
        anchors.fill: parent
        onClicked: card.cardClicked()
    }

}
