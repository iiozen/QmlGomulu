cmake_minimum_required(VERSION 3.16)

project(GomuluProje VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)

qt_add_executable(appGomuluProje
    main.cpp
    Screens/classes/screenhandler.cpp
    Screens/classes/screenhandler.h

)

qt_add_qml_module(appGomuluProje
    URI GomuluProje
    VERSION 1.0
    QML_FILES
        main.qml
        Screens/mainScreen.qml
        Screens/Panels/connectionPanel.qml
        Screens/Panels/mainMenuPanel.qml
        Screens/Panels/motorDial.qml
        Screens/Panels/tempInnerPanel.qml
        Screens/Panels/ledKontrolInnerPanel.qml


    RESOURCES
        Screens/Panels/Images/left-arrow.png
        Screens/Panels/Images/graph.png
        Screens/Panels/Images/led-g.png
        Screens/Panels/Images/led-r.png
        Screens/Panels/Images/led-w.png
        Screens/Panels/Images/motor-c.png
        Screens/Panels/Images/thermometer-b.png
        Screens/Panels/Images/thermometer-w.png
)

set_target_properties(appGomuluProje PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appGomuluProje
    PRIVATE Qt6::Quick)

install(TARGETS appGomuluProje
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
