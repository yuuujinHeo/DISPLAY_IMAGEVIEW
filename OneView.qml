import QtQuick 2.0
import QtQuick.Window 2.3
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.0

Window {
    visible: true
    width: 1920
    height: 1080
    visibility: "FullScreen"

    Image{
        id: imageBackground
        anchors.fill: parent
        source: "image/image.png"
    }
}



/*##^##
Designer {
    D{i:0;formeditorZoom:0.25}
}
##^##*/
