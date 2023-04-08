import QtQuick

Window {
    width: 812
    height: 375
    visible: true
    title: qsTr("Gomulu Proje")

    Loader {
        id: mainLoader
        anchors.fill: parent
        source: "Screens/mainScreen.qml"
    }
}
