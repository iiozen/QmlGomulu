import QtQuick 2.15

Item {
    id: mainMenuPanelInner
    anchors.top: parent.top
    anchors.left: parent.left
    anchors.bottom: parent.bottom
    anchors.right: parent.right
    Rectangle {
        id: ledKontrolArea
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.leftMargin: 23
        anchors.topMargin: 13.8
        width: 242
        height: 116.5
        color: "white"
        radius: 30

        Image {
            id: led_gIcon
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.left
            width: 24.1
            height: 99.2
            anchors.leftMargin: 51
            source: "Images/led-g.png"
        }
        Text {
            id: ledKontrolText
            anchors.left: led_gIcon.right
            anchors.verticalCenter: parent.verticalCenter
            anchors.leftMargin: 20
            font.pointSize: 12
            text: "<b>LED<br>KONTROL</b>"

        }
        MouseArea {
            id: ledKontrolButon
            anchors.fill: parent
            onClicked: screenHandler.setScreen( 3 )
        }
    }
    Rectangle {
        id: motorKontrolArea
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.leftMargin: 311
        anchors.topMargin: 13.8
        width: 242
        height: 116.5
        color: "white"
        radius: 30        
        Image {
            id: motor_cIcon
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.left
            width: 75.1
            height: 46.9
            anchors.leftMargin: 20.1
            source: "Images/motor-c.png"
        }
        Text {
            id: motorKontrolText
            anchors.left: motor_cIcon.right
            anchors.verticalCenter: parent.verticalCenter
            anchors.leftMargin: 20
            font.pointSize: 12
            text: "<b>MOTOR<br>KONTROL</b>"

        }
        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setMotorscreen( !screenHandler.motorscreen )
        }
        Loader {
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.right: parent.right
            source:"motorDial.qml"
            visible: screenHandler.motorscreen
        }
    }
    Rectangle {
        id: sicaklikKontrolArea
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.leftMargin: 23
        anchors.topMargin: 157.8
        width: 242
        height: 116.5
        color: "white"
        radius: 30

        Image {
            id: thermometer_bIcon
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.left
            width: 28.1
            height: 95
            anchors.leftMargin: 47
            source: "Images/thermometer-b.png"
        }
        Text {
            id: sicaklikKontrolText
            anchors.left: thermometer_bIcon.right
            anchors.verticalCenter: parent.verticalCenter
            anchors.leftMargin: 20
            font.pointSize: 12
            text: "<b>SICAKLIK<br>KONTROL</b>"

        }
        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setTempscreen( !screenHandler.tempscreen )
        }
        Loader {
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.right: parent.right
            source:"tempInnerPanel.qml"
            visible: screenHandler.tempscreen
        }
    }
    Rectangle {
        id: motorhizArea
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.leftMargin: 311
        anchors.topMargin: 157.8
        width: 242
        height: 116.5
        color: "white"
        radius: 30
        Image {
            id: graphIcon
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.left
            width: 82
            height: 74.2
            anchors.leftMargin: 16.6
            source: "Images/graph.png"
        }
        Text {
            id: motorhizText
            anchors.left: graphIcon.right
            anchors.verticalCenter: parent.verticalCenter
            anchors.leftMargin: 20
            font.pointSize: 12
            text: "<b>MOTOR HIZ<br>GRAFİĞİ</b>"
        }
        MouseArea {
            id: motorhizButon
            anchors.fill: parent
        }
    }
}
