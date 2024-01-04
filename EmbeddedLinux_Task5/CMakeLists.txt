cmake_minimum_required(VERSION 3.10)
project(Driver)

# Here i tell cmake where the avr-gcc compiler is
set(CMAKE_C_COMPILER /home/omar/x-tools/avr/bin/avr-gcc)


include_directories(Include)

set(SOURCE_FILES
    PORT.c
    DIO.c
    PORT_Config.c
)

# Creating the static library
add_library(mcal STATIC ${SOURCE_FILES})
target_include_directories(mcal PUBLIC Include)

# Main executable
add_executable(Driver_Test.elf main.c)

# Link the static library to the executable
target_link_libraries(Driver_Test.elf mcal)

# Here i specify the mmcu flag so that the output file works on my hardware
target_compile_options(Driver_Test.elf PRIVATE -mmcu=atmega32)

