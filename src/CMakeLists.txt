cmake_minimum_required(VERSION 3.15)

project(qcodeeditwidget LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

find_package(QT NAMES Qt6 REQUIRED COMPONENTS Core Widgets)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

add_library(qcodeeditwidget SHARED
    qcodeeditwidget.cpp
    ../include/QCodeEditWidget/qcodeeditwidget.h
)

target_compile_definitions(qcodeeditwidget PRIVATE QCEW_SHARED_EXPORT)

target_include_directories(qcodeeditwidget PUBLIC
    ../include
)

target_link_libraries(qcodeeditwidget PRIVATE
    Qt6::Core
    Qt6::Widgets
)

set_target_properties(qcodeeditwidget PROPERTIES
    VERSION "0.5.1"
    SOVERSION "0.5"
)
