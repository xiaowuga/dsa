cmake_minimum_required(VERSION 3.16)
project(dsa)

set(CMAKE_CXX_STANDARD 14)

include_directories(list)

add_executable(dsa
        list/list.h
        list/list_bracket.h
        list/list_clear.h
        list/list_constructor_by_copying.h
        list/listnode.h
        list/listnode_insertaspred.h
        list/listnode_insertassucc.h
        )
