import QtQuick 2.15

Rectangle {
    id: motorTakipPanel
    anchors.left: parent.left
    anchors.top: parent.top
    anchors.right: parent.right    
    width: 242
    height: 116.5
    color: "#ff3131"
    radius: 30


    Rectangle {
        anchors.centerIn: parent
        color: Qt.rgba(0,0,0,0)
        height: parent.height
        width: parent.width
        Canvas {
            id: canvas
            anchors.fill: parent

            property real xadet: screenHandler.xadet
            property var degerler: screenHandler.motorhizverileri

            function grafikCiz(xadet,marg) {
                var maxy = Math.max(...degerler)
                var ctx = getContext('2d')
                ctx.reset()
                ctx.lineWidth = 2
                ctx.strokeStyle= "white"

                var duzeltilmisy = height
                var karakterbosluk = 1
                var kesikbosluk = 3
                var bosluk = marg + ( 2 * (karakterbosluk + kesikbosluk + 6))


                // GRAFIK SABLON
                // X Ekseni
                ctx.moveTo(0+bosluk, duzeltilmisy-bosluk)
                ctx.lineTo(width-bosluk, duzeltilmisy-bosluk)
                ctx.stroke()
                // Y Ekseni
                ctx.moveTo(0+bosluk, duzeltilmisy-bosluk)
                ctx.lineTo(0+bosluk, bosluk)
                ctx.stroke()

                // X Ekseninde Bolumlerin Olusturulmasi
                var xparca = (width - ( 2 * bosluk )) / xadet
                var xparcadeger = bosluk + xparca
                var kesikh = 2
                for( var i = 0 ; i< xadet;i++) {
                    ctx.moveTo( xparcadeger, duzeltilmisy-bosluk )
                    ctx.lineTo( xparcadeger , duzeltilmisy-bosluk - kesikh)
                    ctx.stroke()
                    ctx.moveTo( xparcadeger, duzeltilmisy-bosluk )
                    ctx.lineTo( xparcadeger , duzeltilmisy-bosluk + kesikh)
                    ctx.stroke()
                    xparcadeger += xparca
                }

                // Y Ekseninde Bolumlerin Olusturulmasi
                var yadet = (maxy / 0.5) - 1
                var yparca = ((height - ( 2 * bosluk)) / maxy ) * 0.5
                var yparcadeger = bosluk + yparca
                var kesikw
                var kesikw1 = 2
                var kesikw2 = 3
                var ysayisi = 0
                for (i = 0 ; i< yadet;i++){
                    kesikw = i % 2 == 0 ? 3:6
                    ctx.moveTo(bosluk, duzeltilmisy - yparcadeger)
                    ctx.lineTo(bosluk-kesikw,duzeltilmisy - yparcadeger)
                    ctx.stroke()
                    ctx.moveTo(bosluk, duzeltilmisy - yparcadeger)
                    ctx.lineTo(bosluk+kesikw,duzeltilmisy - yparcadeger)
                    ctx.stroke()
                    ysayisi += 0.5
                    ctx.font = "normal 14px sans-serif"
                    ctx.textAlign = "right"
                    ctx.fillStyle= "white"
                    ctx.fillText(qsTr(ysayisi.toString()), bosluk-kesikw - karakterbosluk, duzeltilmisy - yparcadeger + 5)
                    yparcadeger += yparca
                }

                xparcadeger = bosluk + xparca
                yparcadeger = bosluk + yparca
                var ydegeri = (height - ( 2 * bosluk)) / maxy
                for (i = 1 ; i< degerler.length-1;i++) {
                    ctx.moveTo(xparcadeger, duzeltilmisy - bosluk - (ydegeri * degerler[i-1]))
                    xparcadeger += xparca
                    ctx.lineTo(xparcadeger, duzeltilmisy - bosluk -  (ydegeri * degerler[i]))
                    ctx.stroke()
                }
            }
            onPaint: {
                canvas.grafikCiz(canvas.xadet,5)
            }
            onDegerlerChanged: canvas.requestPaint()
        }

        MouseArea {
            anchors.fill: parent
            onClicked: screenHandler.setMotortakipscreen( !screenHandler.motortakipscreen )
        }
    }
}
