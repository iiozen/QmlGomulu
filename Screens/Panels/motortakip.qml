import QtQuick 2.15

Rectangle {
    id: motorTakipPanel
    anchors.left: parent.left
    anchors.top: parent.top
    anchors.right: parent.right
    width: 242
    height: 116.5
    color: "#ff3131"
    radius: 30
    MouseArea {
        anchors.fill: parent
        onClicked: screenHandler.setMotortakipscreen( !screenHandler.motortakipscreen )
    }

    Rectangle {
        anchors.centerIn: parent
        color: "black"
        height: parent.height * 0.75
        width: parent.width * 0.75

    }

}
