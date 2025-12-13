cmake_minimum_required(VERSION 3.15)

project(qcodetexteditwidget_test VERSION 0.5.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../bin")

find_package(QT NAMES Qt6 REQUIRED COMPONENTS Core Widgets)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

add_executable(qcodetexteditwidget_test
    main.cpp
    qappmaindialog.cpp
    qappmaindialog.h
    qappmaindialog.ui
)

target_link_libraries(qcodetexteditwidget_test PRIVATE
    Qt6::Core
    Qt6::Widgets
    qcodeeditwidget
)
