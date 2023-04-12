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
                        font.pointSize: 12
                        text: screenHandler.uart1_port
                        onTextChanged: screenHandler.setUart1_port( text )
                        Rectangle {
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
                        font.pointSize: 12
                        text: screenHandler.uart1_baudrate
                        onTextChanged: screenHandler.setUart1_baudrate ( text )
                        Rectangle {
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
                        font.pointSize: 12
                        text: screenHandler.uart1_timeout
                        onTextChanged: screenHandler.setUart1_timeout( text )
                        Rectangle {
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
                        font.pointSize: 12
                        text: screenHandler.uart2_port
                        onTextChanged: screenHandler.setUart2_port( text )
                        selectByMouse: true
                        Rectangle {
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
                        font.pointSize: 12
                        text: screenHandler.uart2_baudrate
                        onTextChanged: screenHandler.setUart2_baudrate( text )                        
                        Rectangle {
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
                        font.pointSize: 12
                        text: screenHandler.uart2_timeout
                        onTextChanged: screenHandler.setUart2_timeout( text )
                        Rectangle {
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
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: uartInfoArea.bottom
        anchors.topMargin: 180.5
        width: 134
        height: 43.5
        radius: 10
        color: "#00a473"
        border.color: "#00a473"
        border.width: 0
        Text {
            id: baglanButonText
            anchors.centerIn: parent
            text: "BAĞLAN"
            color:"white"
            font.pointSize: 12

        }

        MouseArea {            
            anchors.fill: parent
            hoverEnabled: true
            onEntered: {
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
                baglanBusy.visible = true
                baglanButon.visible = false
                baglanBusy.running = true

                screenHandler.setScreen( 1 )
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
        visible: false
        running: false
    }



}



