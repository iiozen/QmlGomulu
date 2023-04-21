import QtQuick
import ScreenHandler 1.0


Window {
    width: 812
    height: 375
    visible: true
    title: qsTr("Stm32 Surme")
    ScreenHandler {
        id: screenHandler
    }
    Loader {
        id: mainLoader
        anchors.fill: parent
        source: "Screens/mainScreen.qml"
    }
}
