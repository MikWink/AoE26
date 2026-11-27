cmake_minimum_required(VERSION 3.28.3)

add_library(days)

target_sources(days
    PRIVATE
        day1.cpp

    PUBLIC
        FILE_SET HEADERS
        FILES
            day1.h
)

target_link_libraries(days
    PRIVATE
        utils
)