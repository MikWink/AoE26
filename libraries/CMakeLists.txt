cmake_minimum_required(VERSION 3.28.3)

add_library(utils)

target_sources(utils
    PRIVATE
        utils.cpp

    PUBLIC
        FILE_SET HEADERS
        FILES
            utils.h
)