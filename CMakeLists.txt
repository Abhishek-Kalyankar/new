cmake_minimum_required(VERSION 3.10)
project(MyPlot)

find_package(PythonLibs 3.12 REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS} ${PYTHON_LIBRARIES} "path/to/matplotlibcpp" "C:/Users/Admin/AppData/Local/Programs/Python/Python312/Lib/site-packages/numpy/core/include")

add_executable(my_plot main.cpp)
target_link_libraries(my_plot ${PYTHON_LIBRARIES})
