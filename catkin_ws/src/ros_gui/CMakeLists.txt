##############################################################################
# CMake
##############################################################################

cmake_minimum_required(VERSION 2.8.0)
project(ros_gui)

##############################################################################
# Catkin
##############################################################################

# qt_build provides the qt cmake glue, roscpp the comms for a default talker

find_package(catkin REQUIRED COMPONENTS 
	qt_build 
	roscpp 
	rviz
	std_msgs
        message_generation
)

include_directories(${catkin_INCLUDE_DIRS})

find_package(Qt4 REQUIRED COMPONENTS QtCore QtGui)
include(${QT_USE_FILE})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

## Generate messages in the 'msg' folder
add_message_files(
    FILES
    RX_data.msg
)

generate_messages(
    DEPENDENCIES
    std_msgs
)


link_directories(/usr/lib/ /usr/lib/atlas-base/atlas/ /usr/local/share/OpenCV)

# Use this to define what the package will export (e.g. libs, headers).
# Since the default here is to produce only a binary, we don't worry about
# exporting anything. 

catkin_package(
	INCLUDE_DIRS include
	DEPENDS sdpa
        DEPENDS OpenCV
)

##############################################################################
# Qt Environment
##############################################################################

# this comes from qt_build's qt-ros.cmake which is automatically 
# included via the dependency call in package.xml
###rosbuild_prepare_qt4(QtCore QtGui) # Add the appropriate components to the component list here

##############################################################################
# Sections
##############################################################################

file(GLOB QT_FORMS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ui/*.ui)
file(GLOB QT_RESOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} resources/*.qrc)
file(GLOB_RECURSE QT_MOC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} FOLLOW_SYMLINKS include/ros_gui/*.hpp)

QT4_ADD_RESOURCES(QT_RESOURCES_CPP ${QT_RESOURCES})
QT4_WRAP_UI(QT_FORMS_HPP ${QT_FORMS})
QT4_WRAP_CPP(QT_MOC_HPP ${QT_MOC})

##############################################################################
# Sources
##############################################################################

file(GLOB_RECURSE QT_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} FOLLOW_SYMLINKS src/*.cpp)

##############################################################################
# Binaries
##############################################################################

add_executable(ros_gui ${QT_SOURCES} ${QT_RESOURCES_CPP} ${QT_FORMS_HPP} ${QT_MOC_HPP})
add_dependencies(ros_gui rover_gencpp)
target_link_libraries(ros_gui ${QT_LIBRARIES} ${catkin_LIBRARIES} ${OpenCV_LIBS}
			#libsdpa.a
			#libdmumps_seq.a libmumps_common_seq.a libmpiseq_seq.a libpord_seq.a
			#libsdpa.a libdmumps_seq.a libmumps_common_seq.a libmpiseq_seq.a 
			#libpord_seq.a liblapack.a libblas.a 
			#gfortran

			-L/usr/lib/gcc/x86_64-linux-gnu/4.8 -L/usr/lib/gcc/x86_64-linux-gnu/4.8/../../../x86_64-linux-gnu 
			-L/usr/lib/gcc/x86_64-linux-gnu/4.8/../../../../lib -L/lib/x86_64-linux-gnu -L/lib/../lib 
			-L/usr/lib/x86_64-linux-gnu -L/usr/lib/../lib -L/usr/lib/gcc/x86_64-linux-gnu/4.8/../../..)
install(TARGETS ros_gui RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

