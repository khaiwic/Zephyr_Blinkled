add_library(my_lib STATIC blink.c)
target_link_libraries(app PRIVATE my_lib)
target_include_directories(my_lib PRIVATE ../include)