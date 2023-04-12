import QtQuick 2.15
import QtQuick.Controls 2.5

Rectangle {
    id: ledKontrolInnerArea
    anchors.fill: parent
    color: "#bcbcbc"
    radius: 30
    signal destroyMe()

    Image {
        id: ledid0
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.leftMargin: 54.4
        anchors.topMargin: 14.1
        width: 14.6
        height: 59.9
        source: screenHandler.led0 ? "Images/led-r.png":"Images/led-w.png"
        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setLed0( !screenHandler.led0 )
        }
    }
    Image {
        id: ledid1        
        anchors.left: ledid0.left
        anchors.top: parent.top
        anchors.leftMargin: 51.9
        anchors.topMargin: 14.1
        width: 14.6
        height: 59.9
        source: screenHandler.led1 ? "Images/led-r.png":"Images/led-w.png"
        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setLed1( !screenHandler.led1 )
        }
    }
    Image {
        id: ledid2        
        anchors.left: ledid1.left
        anchors.top: parent.top
        anchors.leftMargin: 51.9
        anchors.topMargin: 14.1
        width: 14.6
        height: 59.9
        source: screenHandler.led2 ? "Images/led-r.png":"Images/led-w.png"
        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setLed2( !screenHandler.led2 )
        }
    }
    Image {
        id: ledid3        
        anchors.left: ledid2.left
        anchors.top: parent.top
        anchors.leftMargin: 51.9
        anchors.topMargin: 14.1
        width: 14.6
        height: 59.9
        source: screenHandler.led3 ? "Images/led-r.png":"Images/led-w.png"
        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setLed3( !screenHandler.led3 )
        }
    }
    Image {
        id: ledid4        
        anchors.left: ledid3.left
        anchors.top: parent.top
        anchors.leftMargin: 51.9
        anchors.topMargin: 14.1
        width: 14.6
        height: 59.9
        source: screenHandler.led4 ? "Images/led-r.png":"Images/led-w.png"
        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setLed4( !screenHandler.led4 )
        }
    }
    Image {
        id: ledid5        
        anchors.left: ledid4.left
        anchors.top: parent.top
        anchors.leftMargin: 51.9
        anchors.topMargin: 14.1
        width: 14.6
        height: 59.9
        source: screenHandler.led5 ? "Images/led-r.png":"Images/led-w.png"
        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setLed5( !screenHandler.led5 )
        }
    }
    Image {
        id: ledid6        
        anchors.left: ledid5.left
        anchors.top: parent.top
        anchors.leftMargin: 51.9
        anchors.topMargin: 14.1
        width: 14.6
        height: 59.9
        source: screenHandler.led6 ? "Images/led-r.png":"Images/led-w.png"
        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setLed6( !screenHandler.led6 )
        }
    }
    Image {
        id: ledid7        
        anchors.left: ledid6.left
        anchors.top: parent.top
        anchors.leftMargin: 51.9
        anchors.topMargin: 14.1
        width: 14.6
        height: 59.9
        source: screenHandler.led7 ? "Images/led-r.png":"Images/led-w.png"
        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setLed7( !screenHandler.led7 )
        }
    }
    Image {
        id: ledid8        
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.leftMargin: 54.4
        anchors.topMargin: 98
        width: 14.6
        height: 59.9
        source: screenHandler.led8 ? "Images/led-r.png":"Images/led-w.png"
        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setLed8( !screenHandler.led8 )
        }
    }
    Image {
        id: ledid9        
        anchors.left: ledid8.left
        anchors.top: parent.top
        anchors.leftMargin: 51.9
        anchors.topMargin: 98
        width: 14.6
        height: 59.9
        source: screenHandler.led9 ? "Images/led-r.png":"Images/led-w.png"
        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setLed9( !screenHandler.led9 )
        }
    }
    Image {
        id: ledid10        
        anchors.left: ledid9.left
        anchors.top: parent.top
        anchors.leftMargin: 51.9
        anchors.topMargin: 98
        width: 14.6
        height: 59.9
        source: screenHandler.led10 ? "Images/led-r.png":"Images/led-w.png"
        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setLed10( !screenHandler.led10 )
        }
    }
    Image {
        id: ledid11        
        anchors.left: ledid10.left
        anchors.top: parent.top
        anchors.leftMargin: 51.9
        anchors.topMargin: 98
        width: 14.6
        height: 59.9
        source: screenHandler.led11 ? "Images/led-r.png":"Images/led-w.png"
        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setLed11( !screenHandler.led11 )
        }
    }
    Image {
        id: ledid12        
        anchors.left: ledid11.left
        anchors.top: parent.top
        anchors.leftMargin: 51.9
        anchors.topMargin: 98
        width: 14.6
        height: 59.9
        source: screenHandler.led12 ? "Images/led-r.png":"Images/led-w.png"
        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setLed12( !screenHandler.led12 )
        }
    }
    Image {
        id: ledid13        
        anchors.left: ledid12.left
        anchors.top: parent.top
        anchors.leftMargin: 51.9
        anchors.topMargin: 98
        width: 14.6
        height: 59.9
        source: screenHandler.led13 ? "Images/led-r.png":"Images/led-w.png"
        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setLed13( !screenHandler.led13 )
        }
    }
    Image {
        id: ledid14        
        anchors.left: ledid13.left
        anchors.top: parent.top
        anchors.leftMargin: 51.9
        anchors.topMargin: 98
        width: 14.6
        height: 59.9
        source: screenHandler.led14 ? "Images/led-r.png":"Images/led-w.png"
        MouseArea {            
            anchors.fill: parent
            onClicked: screenHandler.setLed14( !screenHandler.led14 )
        }
    }
    Image {
        id: ledid15        
        anchors.left: ledid14.left
        anchors.top: parent.top
        anchors.leftMargin: 51.9
        anchors.topMargin: 98
        width: 14.6
        height: 59.9
        source: screenHandler.led15 ? "Images/led-r.png":"Images/led-w.png"
        MouseArea {
            anchors.fill: parent            
            onClicked: screenHandler.setLed15( !screenHandler.led15 )
        }
    }
    Rectangle {
        id: hepsiToggleButton
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.topMargin: 14.1
        anchors.leftMargin: 466
        width: 72
        height: 144
        color: "#545454"
        radius: 5
        border.color: "white"
        border.width: 0
        Text {
            anchors.centerIn: parent
            font.pointSize: 12
            color: "white"
            text: "<b>HEPSİ</b>"
        }
        MouseArea {
            id: hepsiToggleButtonMouse
            anchors.fill: parent
            onClicked: screenHandler.hepsiToggle()
            hoverEnabled: true
            onEntered: hepsiToggleButton.border.width= 2
            onExited: hepsiToggleButton.border.width= 0
        }
    }
    Rectangle {
        id: siraliButon
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.topMargin: 214.1
        anchors.leftMargin: 54.4
        color: "#ff3131"
        width: 109
        height: 48
        radius: 5
        border.width: 0
        border.color: "white"
        Text {
            id: siraliButonText
            font.pointSize: 12
            anchors.centerIn: parent
            text: "<b>SIRALI</b>"
            color: "white"
        }
        MouseArea {
            anchors.fill: parent
            hoverEnabled: true
            onEntered: siraliButon.border.width= 2
            onExited: siraliButon.border.width= 0

        }
    }
    Rectangle {
        id: ledSpeedControlArea
        anchors.left: siraliButon.right
        anchors.top: siraliButon.top
        anchors.right: hepsiToggleButton.right
        anchors.bottom: siraliButon.bottom
        color: Qt.rgba(0,0,0,0)
//        color: "black"
        anchors.leftMargin: 13.2
        Slider {
            id: ledSiraliSlider
            anchors.verticalCenter: parent.verticalCenter
            from: 100
            to: 2000
            value: screenHandler.leddelay
            onValueChanged: screenHandler.setLeddelay( value )
            stepSize: 10
            width: 255.4            
            handle: Rectangle {
                x: ledSiraliSlider.leftPadding + ledSiraliSlider.visualPosition * (ledSiraliSlider.availableWidth -width)
                y: ledSiraliSlider.topPadding + ledSiraliSlider.availableHeight /2 - height / 2
                implicitHeight: 37.8
                implicitWidth: 37.8
                radius: width * 0.5
                color: ledSiraliSlider.pressed ? "#f0f0f0" : "#f6f6f6"
                border.color: "#737373"
                border.width: 3                
            }
        }
        Text {
            id: ledSiraliText
            anchors.verticalCenter: parent.verticalCenter
            anchors.right: parent.right
            text: screenHandler.leddelay + " ms"
            font.bold: true
            font.pointSize: 12
            color: "white"

        }
    }
}
