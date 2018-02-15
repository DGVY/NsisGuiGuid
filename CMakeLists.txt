cmake_minimum_required(VERSION 3.9)
project(NsisGuiGuid)

set(CMAKE_CXX_STANDARD 11)

#设置工程包含当前目录，非必须
set(CMAKE_INCLUDE_CURRENT_DIR ON)

aux_source_directory(. SRC_LIST)

# Add CMake Module
set (CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake")
include(cotire)

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
include_directories(./NsisGuiGuid/Source)

##查找当前文件夹中的所有源代码文件，也可以通过Set命令将所有文件设置为一个变量
#FILE(GLOB SRC_FILES "./NsisGuiGuid/Code/*.cpp" "./NsisGuiGuid/Code/Widget/*.cpp")
##同理，查找当前文件夹中所有的头文件
#FILE(GLOB HEAD_FILES "./NsisGuiGuid/Code/*.h" "./NsisGuiGuid/Code/Widget/*.h")
##同理，查找当前文件夹中所有的ui文件
#FILE(GLOB UI_FILES "./NsisGuiGuid/Code/*.ui" "./NsisGuiGuid/Code/Widget/*.ui" "./NsisGuiGuid/FormFiles/*.ui")

# Add Cpp File
set(SRC_FILES
        ./NsisGuiGuid/Source/main.cpp
        ./NsisGuiGuid/Source/stdafx.cpp
#        ./NsisGuiGuid/Source/FileSetup.cpp
        ./NsisGuiGuid/Source/FormFiles/NsisGuiGuidDlg.cpp
        ./NsisGuiGuid/Source/FormFiles/WgtSettingsS.cpp
        ./NsisGuiGuid/Source/FormFiles/WgtAdvancedCfg.cpp
        ./NsisGuiGuid/Source/FormFiles/WgtBrowse.cpp
        ./NsisGuiGuid/Source/FormFiles/WgtRegister.cpp
        )

set(HEAD_FILES
        ./NsisGuiGuid/Source/stdafx.h
#        ./NsisGuiGuid/Source/FileSetup.h
        ./NsisGuiGuid/Source/FormFiles/NsisGuiGuidDlg.h
        ./NsisGuiGuid/Source/FormFiles/WgtSettingsS.h
        ./NsisGuiGuid/Source/FormFiles/WgtAdvancedCfg.h
        ./NsisGuiGuid/Source/FormFiles/WgtBrowse.h
        ./NsisGuiGuid/Source/FormFiles/WgtRegister.h
        )

set(UI_FILES
        ./NsisGuiGuid/Source/FormFiles/NsisGuiGuidDlg.ui
        ./NsisGuiGuid/Source/FormFiles/WgtSettingsS.ui
        )

set(QRC_FILES
        ./NsisGuiGuid/Source/Resources/NsisGuiGuidDlg.qrc
        )

QT5_WRAP_UI(WRAP_FILES ${UI_FILES})
qt5_add_resources(RC_FILES ${QRC_FILES})

#将ui文件和生成文件整理在一个文件夹中，非必须
source_group("Ui" FILES ${UI_FILES} ${WRAP_FILES} )

message("\n============================================================================")
message(" @ Temp_Opt =${RC_FILES}")
message("============================================================================\n")

#创建工程文件
add_executable(${PROJECT_NAME}
        ${SRC_FILES}
        ${HEAD_FILES}
        ${RCC_FILES}
        ${WRAP_FILES}
        ${RC_FILES}
        )

#添加Qt5依赖项
target_link_libraries(${PROJECT_NAME} Qt5::Widgets Qt5::Core Qt5::Gui)

# set stdafx.h
set_target_properties(${PROJECT_NAME}
        PROPERTIES COTIRE_CXX_PREFIX_HEADER_INIT
        "./NsisGuiGuid/Source/stdafx.h")
cotire(${PROJECT_NAME})
