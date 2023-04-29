



cmake_minimum_required(VERSION 3.24)
PROJECT(MyOpenCV)
find_package(OpenCV REQUIRED)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "") # works



add_executable(main main.cpp)
target_link_libraries(main PRIVATE ${OpenCV_LIBS})
target_include_directories(main PUBLIC ${OpenCV_INCLUDE_DIRS})
