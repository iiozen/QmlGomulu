import QtQuick 2.15

Rectangle {
    id: mainScreen
    anchors.fill: parent
    color: "#f6f6f6"
    Rectangle {
        id: lefttopInfo
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.leftMargin: 10
        anchors.topMargin: 5
        Text {
            text:{
                if (screenHandler.screen === 0 || screenHandler.screen === 1 ) return "BAĞLANTI AYARLARI"
                else if (screenHandler.screen === 2) return "ANA MENÜ"
                else if (screenHandler.screen === 3) return "LED KONTROL"
            }
            font.family: "Aileron Regular"
            font.pointSize: 12
            color: "#00bf63"
        }
    }
    Text {
        id: disconnectText
        visible: screenHandler.screen === 2
        text: "BAĞLANTIYI KES"
        color: "#ff3131"
        font.pointSize: 12
        anchors.left: parent.left
        anchors.bottom: parent.bottom
        anchors.leftMargin: 10
        anchors.bottomMargin: 5
        MouseArea {
            anchors.fill: parent
//            onClicked: screenHandler.resetAll()
            onClicked: screenHandler.baglantiyiKes()
        }
    }
    Image {
        id: backpageArrow
        visible: screenHandler.screen === 3
        source: "Panels/Images/left-arrow.png"
        width: 52.4
        height: (implicitHeight/implicitWidth) * 52.4

        anchors.left: parent.left
        anchors.bottom: parent.bottom
        anchors.leftMargin: 43.6
        anchors.bottomMargin: 30
        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setScreen( 2 )
        }
    }
    Text {
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.rightMargin: 10
        anchors.bottomMargin: 5
        font.pointSize: 12
        text: "<b>IŞINER İSMAİL ÖZEN</b>"

    }
    Rectangle {
        id: mainfocusArea
        anchors.centerIn: parent
        width: 576
        height: 288
        radius: 30
        color: "#bcbcbc"
        Loader {
            id: mainareaLoader
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            source: {
                if ( screenHandler.screen === 0 || screenHandler.screen === 1 ) {
                    return "Panels/connectionPanel.qml"
                }
                else if ( screenHandler.screen === 2 ) {
                    return "Panels/mainMenuPanel.qml"
                }
                else if ( screenHandler.screen === 3) {
                    return "Panels/ledKontrolInnerPanel.qml"
                }
            }
        }
    }
}
