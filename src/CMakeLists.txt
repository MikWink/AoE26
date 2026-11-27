cmake_minimum_required(VERSION 3.28.3)

add_executable(main)

target_sources(main
    PRIVATE
        main.cpp
)

target_link_libraries(main
    PRIVATE
        utils
        days
)