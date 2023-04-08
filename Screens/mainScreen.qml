import QtQuick 2.15

Rectangle {
    id: mainScreen
    anchors.fill: parent
//    color: "#f6f6f6"
    color: "black"









    Rectangle {
        id: lefttopInfo
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.leftMargin: 10
        anchors.topMargin: 5
        Text {
            text: "BAĞLANTI AYARLARI"
            font.family: "Aileron Regular"
            font.pointSize: 12
            color: "#00bf63"
        }

    }



    Text {
        id: disconnectText
        visible: true
        text: "BAĞLANTIYI KES"
        color: "#ff3131"
        font.pointSize: 12
        anchors.left: parent.left
        anchors.bottom: parent.bottom
        anchors.leftMargin: 10
        anchors.bottomMargin: 5
    }

    Image {
        id: backpageArrow
        visible: true
        source: "Panels/Images/left-arrow.png"
        width: 52.4
        height: (implicitHeight/implicitWidth) * 52.4

        anchors.left: parent.left
        anchors.bottom: parent.bottom
        anchors.leftMargin: 43.6
        anchors.bottomMargin: 30
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



    }




        Image {
            source:"Panels/Images/thermometer-b.png"

            anchors.centerIn: parent
//            width: 28.1
//            height: 95
        }




}
