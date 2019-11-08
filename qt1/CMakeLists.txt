cmake_minimum_required(VERSION 3.7.1)

project( QtLesson1 )

set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets REQUIRED)

set(COMPONENTS_DIR src/components)

set(COMPONENTS_SOURCES
	src/components/MainWindow.cpp
	src/components/CentralWidget/CentralWidget.cpp
	src/components/ControlPanel/ControlPanel.cpp
	src/components/Range/Range.cpp
	src/components/ResultView/ResultView.cpp
)

include_directories(
	src/components
	src/components/MainWindow
	src/components/CentralWidget
	src/components/ControlPanel
	src/components/Range
	src/components/ResultView
)

set(SOURCES
	src/main.cpp
	${COMPONENTS_SOURCES}
)
	
set(HEADERS
	${COMPONENTS_INCLUDES}
)

add_executable(QtLesson1 ${SOURCES} ${HEADERS})

target_link_libraries( QtLesson1 Qt5::Widgets )