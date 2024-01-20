cmake_minimum_required(VERSION 3.10)
project(Calculator)

include_directories(includes)

set(SOURCE_FILES
    add.c
    subtract.c
    multiply.c
    divide.c
    modulus.c
)

# Creating the static library
add_library(calc STATIC ${SOURCE_FILES})
target_include_directories(calc PUBLIC Include)

# Main executable
add_executable(calc_bin main.c)

# Link the static library to the executable
target_link_libraries(calc_bin PRIVATE calc)

set_target_properties(calc_bin PROPERTIES
    INTERFACE_LINK_OPTIONS "-static-libgcc;-static-libstdc++;-static"
)




