cmake_minimum_required(VERSION 3.22)
project(String_handler C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(main.c main.c createString.c reverseString.c viewStrings.c return_to_menu.c concatenateStrings.c concatenateStrings.c saveString.c line_counter.c lengthString.c menu_5.c resetFile.c)
