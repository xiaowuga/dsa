cmake_minimum_required(VERSION 3.16)
project(dsa)

#set(CMAKE_CXX_STANDARD 14)

add_executable(main)
target_sources(main
PUBLIC
        list
        list/main.cpp
)

add_executable(test)
target_sources(test
PUBLIC
        test.cpp
)

add_executable(main1)
target_sources(main1
PUBLIC
        fibonacci
        vector
        vector/main.cpp
)
