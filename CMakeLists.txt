cmake_minimum_required(VERSION 2.8)

#add_definitions(-DDEBUG_PRETREATMENT)


add_definitions(-DDEBUG_DETECTION)

project(SEU)

find_package(OpenCV REQUIRED)

include_directories(include)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(SEU main.cpp ArmorDetector.cpp numeric_rm.cpp opencv_extended.cpp)

target_link_libraries(SEU ${OpenCV_LIBS})
