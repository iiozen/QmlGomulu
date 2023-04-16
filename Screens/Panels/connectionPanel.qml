import QtQuick 2.15
import QtQuick.Controls 2.5

Rectangle {
    id: connectionPanelInner
    anchors.left: parent.left
    anchors.right: parent.right
    anchors.top: parent.top


// Bağlantı Ayarları Menüsü
    Rectangle {
        id: uartInfoArea
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        Rectangle {
            id: leftUartInfo
            anchors.left: parent.left
            anchors.top: parent.top
            anchors.leftMargin: 23
            anchors.topMargin: 13.8
            width: 242
            height: 116.5
            color: "white"
            radius: 30
            Column {
                anchors.centerIn: parent
                Text {
                    text: "<b>UART1</b>"
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.pointSize: 12
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                }
                Row {
                    anchors.horizontalCenter: parent.horizontalCenter
                    Text {
                        id: uart1PortText
                        font.pointSize: 12
                        text: "PORT:  "
                    }
                    TextInput {
                        id: uart1PortInput
                        property bool nsuc: false
                        font.pointSize: 12
                        text: screenHandler.uart1_port
                        onTextChanged: {
                            if(text === "" || text == "-") {
                                uart1PortBorder.border.color= "red"
                                nsuc= true
                            }
                            else {
                                uart1PortBorder.border.color= "black"
                                nsuc= false
                            }
                            screenHandler.setUart1_port( text )
                        }
                        onFocusChanged: {
                            if(text === "" || text === "-") {
                                uart1PortBorder.border.color= "red"
                                uart1PortInput.text = "-"
                                nsuc= true
                            }
                            else {
                                uart1PortBorder.border.color= "black"
                                nsuc= false
                            }
                            screenHandler.setUart1_port( text )
                        }
                        Rectangle {
                            id: uart1PortBorder
                            anchors.fill: parent
                            anchors.rightMargin: -3
                            anchors.leftMargin: -3
                            anchors.topMargin: 1
                            anchors.bottomMargin: 1
                            border.color: "black"
                            border.width: 1
                            color: "#00000000"
                        }
                    }
                }
                Row {
                    anchors.horizontalCenter: parent.horizontalCenter
                    Text {
                        id: uart1BaudText
                        font.pointSize: 12
                        text: "BAUDRATE:  "
                    }
                    TextInput {
                        id: uart1BaudInput
                        property bool nsuc: false
                        font.pointSize: 12
                        text: screenHandler.uart1_baudrate
                        onTextChanged: {
                            if(isNaN(text)) {
                                uart1BaudBorder.border.color= "red"
                                nsuc= true
                                return
                            }
                            else {
                                uart1BaudBorder.border.color= "black"
                                nsuc= false
                            }
                            screenHandler.setUart1_baudrate ( text )
                        }
                        Rectangle {
                            id: uart1BaudBorder
                            anchors.fill: parent
                            anchors.rightMargin: -3
                            anchors.leftMargin: -3
                            anchors.topMargin: 1
                            anchors.bottomMargin: 1
                            border.color: "black"
                            border.width: 1
                            color: "#00000000"
                        }
                    }
                }
                Row {
                    anchors.horizontalCenter: parent.horizontalCenter
                    Text {
                        id: uart1TimeoutText
                        font.pointSize: 12
                        text: "TIMEOUT:  "
                    }
                    TextInput {
                        id: uart1TimeoutInput
                        property bool nsuc: false
                        font.pointSize: 12
                        text: screenHandler.uart1_timeout
                        onTextChanged: {
                            if(isNaN(text)) {
                                uart1TimeoutBorder.border.color= "red"
                                nsuc= true
                                return
                            }
                            uart1TimeoutBorder.border.color= "black"
                            nsuc= false
                            screenHandler.setUart1_timeout( text )
                        }
                        Rectangle {
                            id: uart1TimeoutBorder
                            anchors.fill: parent
                            anchors.rightMargin: -3
                            anchors.leftMargin: -3
                            anchors.topMargin: 1
                            anchors.bottomMargin: 1
                            border.color: "black"
                            border.width: 1
                            color: "#00000000"
                        }
                    }
                }
            }
        }

        Rectangle {
            id: rightUartInfo
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.rightMargin: 23
            anchors.topMargin: 13.8
            width: 242
            height: 116.5
            color: "white"
            radius: 30

            Column {

                anchors.centerIn: parent

                Text {
                    text: "<b>UART2</b>"
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.pointSize: 12
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                }
                Row {
                    anchors.horizontalCenter: parent.horizontalCenter
                    Text {
                        id: uart2PortText
                        font.pointSize: 12
                        text: "PORT:  "
                    }
                    TextInput {
                        id: uart2PortInput
                        property bool nsuc: false
                        font.pointSize: 12
                        text: screenHandler.uart2_port
                        onTextChanged: {
                            if(text === "" || text == "-") {
                                uart2PortBorder.border.color= "red"
                                nsuc= true
                            }
                            else {
                                uart2PortBorder.border.color= "black"
                                nsuc= false
                            }
                            screenHandler.setUart2_port( text )
                        }
                        onFocusChanged: {
                            if(text === "" || text === "-") {
                                uart2PortBorder.border.color= "red"
                                uart2PortInput.text = "-"
                                nsuc= true
                            }
                            else {
                                uart2PortBorder.border.color= "black"
                                nsuc= false
                            }
                            screenHandler.setUart2_port( text )
                        }

                        Rectangle {
                            id: uart2PortBorder
                            anchors.fill: parent
                            anchors.rightMargin: -3
                            anchors.leftMargin: -3
                            anchors.topMargin: 1
                            anchors.bottomMargin: 1
                            border.color: "black"
                            border.width: 1
                            color: "#00000000"
                        }
                    }
                }
                Row {
                    anchors.horizontalCenter: parent.horizontalCenter
                    Text {
                        id: uart2BaudText
                        font.pointSize: 12
                        text: "BAUDRATE:  "
                    }
                    TextInput {
                        id: uart2BaudInput
                        property bool nsuc: false
                        font.pointSize: 12
                        text: screenHandler.uart2_baudrate
                        onTextChanged: {
                            if(isNaN(text)) {
                                uart2BaudBorder.border.color= "red"
                                nsuc= true
                                return
                            }
                            uart2BaudBorder.border.color= "black"
                            nsuc= false
                            screenHandler.setUart2_baudrate( text )
                        }
                        Rectangle {
                            id: uart2BaudBorder
                            anchors.fill: parent
                            anchors.rightMargin: -3
                            anchors.leftMargin: -3
                            anchors.topMargin: 1
                            anchors.bottomMargin: 1
                            border.color: "black"
                            border.width: 1
                            color: "#00000000"
                        }
                    }
                }
                Row {
                    anchors.horizontalCenter: parent.horizontalCenter
                    Text {
                        id: uart2TimeoutText
                        font.pointSize: 12
                        text: "TIMEOUT:  "
                    }
                    TextInput {
                        id: uart2TimeoutInput
                        property bool nsuc: false
                        font.pointSize: 12
                        text: screenHandler.uart2_timeout
                        onTextChanged: {
                            if(isNaN(text)) {
                                uart2TimeoutBorder.border.color= "red"
                                nsuc= true
                                return
                            }
                            uart2TimeoutBorder.border.color= "black"
                            nsuc= false
                            screenHandler.setUart2_timeout( text )
                        }
                        Rectangle {
                            id: uart2TimeoutBorder
                            anchors.fill: parent
                            anchors.rightMargin: -3
                            anchors.leftMargin: -3
                            anchors.topMargin: 1
                            anchors.bottomMargin: 1
                            border.color: "black"
                            border.width: 1
                            color: "#00000000"
                        }
                    }
                }
            }
        }

    }

    Rectangle {
        id: baglanButon
        property bool clickable: (
                                    uart1BaudInput.nsuc ||
                                    uart2BaudInput.nsuc ||
                                    uart1PortInput.nsuc ||
                                    uart2PortInput.nsuc ||
                                    uart1TimeoutInput.nsuc ||
                                    uart2TimeoutInput.nsuc
                                    ) ? false : true
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: uartInfoArea.bottom
        anchors.topMargin: 180.5
        width: 134
        height: 43.5
        radius: 10
        color: "#00a473"
        border.color: "#00a473"
        border.width: 0
        opacity: clickable ? 1 : 0.3
        visible: screenHandler.screen === 0
        Text {
            id: baglanButonText
            anchors.centerIn: parent
            text: "BAĞLAN"
            color:"white"
            font.pointSize: 12
        }
        MouseArea {
            anchors.fill: parent
            hoverEnabled: baglanButon.clickable
            onEntered: {
                if(!baglanButon.clickable) return
                baglanButon.color= "white"
                baglanButonText.color = "#00a473"
                baglanButon.border.width= 2
            }
            onExited: {
                baglanButonText.color= "white"
                baglanButon.color = "#00a473"
                baglanButon.border.width= 0
            }
            onClicked: {
                // Clickable
                if (!baglanButon.clickable) return

                // Baglanti Oncesi Kontroller

                if ( uart2PortInput.text === "" ) {
                    screenHandler.setUart2_port( "-" )
                    success= false
                }
//                screenHandler.setScreen( 2 )
                screenHandler.baglanButon()
            }
        }

    }

    BusyIndicator {
        id: baglanBusy
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: uartInfoArea.bottom
        anchors.topMargin: 154.7
        width: 95
        height: 95
        visible: screenHandler.screen === 1
        running: false
    }



}



