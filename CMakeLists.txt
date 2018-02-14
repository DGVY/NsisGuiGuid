cmake_minimum_required(VERSION 3.9)
project(NsisGuiGuid)

set(CMAKE_CXX_STANDARD 11)

#设置工程包含当前目录，非必须
set(CMAKE_INCLUDE_CURRENT_DIR ON)

aux_source_directory(. SRC_LIST)

#打开Qt的MOC功能,UI文件处理功能,Rc
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

set(CMAKE_PREFIX_PATH /home/dgvy/Qt5.10.0/5.10.0/gcc_64)
find_package(Qt5Widgets)
find_package(Qt5Core)
find_package(Qt5Gui)

include_directories(${Qt5_INCLUDE_DIRECTORIES})
include_directories(/usr/include)

#查找当前文件夹中的所有源代码文件，也可以通过Set命令将所有文件设置为一个变量
FILE(GLOB SRC_FILES "./NsisGuiGuid/Code/*.cpp" "./NsisGuiGuid/Code/Widget/*.cpp")
#同理，查找当前文件夹中所有的头文件
FILE(GLOB HEAD_FILES "./NsisGuiGuid/Code/*.h" "./NsisGuiGuid/Code/Widget/*.h")
#同理，查找当前文件夹中所有的ui文件
FILE(GLOB UI_FILES "./NsisGuiGuid/Code/*.ui" "./NsisGuiGuid/Code/Widget/*.ui" "./NsisGuiGuid/FormFiles/*.ui")

QT5_WRAP_UI(WRAP_FILES ${UI_FILES})

#将ui文件和生成文件整理在一个文件夹中，非必须
source_group("Ui" FILES ${UI_FILES} ${WRAP_FILES} )

message("\n============================================================================")

message(" Qt5Widgets_INCLUDE_DIRS =${Qt5Widgets_INCLUDE_DIRS}")
message(" Qt5Widgets_LIBRARIES =${Qt5Widgets_LIBRARIES}")

message(" Qt5Core_INCLUDE_DIRS =${Qt5Core_INCLUDE_DIRS}")
message(" Qt5Core_LIBRARIES =${Qt5Core_LIBRARIES}")

message(" @ Temp_Opt =${FILES}")
message("============================================================================\n")

#创建工程文件
add_executable(${PROJECT_NAME} ${SRC_FILES} ${HEAD_FILES} ${RCC_FILES} ${WRAP_FILES})

#添加Qt5依赖项
target_link_libraries(${PROJECT_NAME} Qt5::Widgets Qt5::Core Qt5::Gui)