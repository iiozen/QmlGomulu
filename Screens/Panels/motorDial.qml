import QtQuick 2.15
import QtQuick.Controls 2.5

Rectangle {
    id: motorKontrolDialPanel
    anchors.left: parent.left
    anchors.top: parent.top
    anchors.right: parent.right
    width: 242
    height: 116.5
    color: "#ff3131"
    radius: 30
    MouseArea {
        anchors.fill: parent
        onClicked: screenHandler.setMotorscreen( !screenHandler.motorscreen )
    }
    Dial {
        id: motorKontrolDial
        anchors.centerIn: parent
        value: screenHandler.motorhiz
        from: 0
        stepSize: 0.1
        to: 100
        height: 100
        width: 100
        onValueChanged: screenHandler.setMotorhiz( value )
        background: Rectangle {
            x: motorKontrolDial.width / 2 - width / 2
            y: motorKontrolDial.height / 2 - height / 2
            width: Math.max(64, Math.min(motorKontrolDial.width, motorKontrolDial.height))
            height: width
            color: "white"
            radius: width / 2
            border.color: motorKontrolDial.pressed ? "#17a81a" : "#21be2b"
            opacity: motorKontrolDial.enabled ? 1 : 0.3
        }
        Text {
            anchors.centerIn: parent
            text: "% " + screenHandler.motorhiz.toFixed(1)
            font.pointSize: 12
            color: "black"
        }
    }
}
