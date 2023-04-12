import QtQuick 2.15

Rectangle {
    id: sicaklikKontrolInnerArea
    anchors.left: parent.left
    anchors.top: parent.top
    anchors.right: parent.right
    color: "#ff3131"
    radius: 30
    width: 242
    height: 116.5
    Image {
        id: thermometer_wIcon
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: parent.left
        width: 28.1
        height: 95
        anchors.leftMargin: 47
        source: "Images/thermometer-w"
    }
    Text {
        id: sicaklikKontrolInnerText
        anchors.left: thermometer_wIcon.right
        anchors.verticalCenter: parent.verticalCenter
        anchors.leftMargin: 20
        font.pointSize: 12
        text: screenHandler.tempval.toFixed( 4 ) + " °C"
        font.bold: true
        color: "white"
    }
    MouseArea {
        anchors.fill: parent
        onClicked: screenHandler.setTempscreen( !screenHandler.tempscreen )
    }
}
