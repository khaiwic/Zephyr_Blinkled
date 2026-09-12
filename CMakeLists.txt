cmake_minimum_required(VERSION 4.2.3)

#Khoi tao bien va moi truong zephyr
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(Zephyr_Blink_led)

#Khai bao ma nguon mo cua ung dung
target_sources(app PRIVATE src/main.c)

#Khai bao thu muc chu cac header chung cho ca ung dung
target_include_directories(app PRIVATE include)

#Them thu muc lib vao qua trinh build
add_subdirectory(lib)
