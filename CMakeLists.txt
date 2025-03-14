cmake_minimum_required(VERSION 3.11)

project(SimpleGtkApplication)

set(CMAKE_CXX_STANDARD 14)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

include_directories(${GTK3_INCLUDE_DIRS} include)
link_directories(${GTK3_LIBRARY_DIRS})

set(SOURCES
    src/main.cpp
    src/application.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} ${GTK3_LIBRARIES})

target_include_directories(${PROJECT_NAME}
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)
