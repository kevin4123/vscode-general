set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
cmake_minimum_required(VERSION 3.16)

project(helloworld VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH "D:\\Qt\\6.9.2\\msvc2022_64\\lib\\cmake\\Qt6")  # Adjust this path to your Qt installation
find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()   # This sets up the project with standard Qt settings

# Specify MSVC UTF-8 encoding   
add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

qt_add_executable(helloworld
	#mainwindow.ui 
   	#mainwindow.cpp
    main.cpp
)

target_link_libraries(helloworld PRIVATE Qt6::Widgets)

set_target_properties(helloworld PROPERTIES
    WIN32_EXECUTABLE ON  # This is necessary for creating a Windows executable
    MACOSX_BUNDLE ON  # This is necessary for creating a macOS application bundle
)


