cmake_minimum_required(VERSION 4.3)
project(grammar)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(grammar
        HelloLangBaseListener.cpp
        HelloLangBaseListener.h
        HelloLangLexer.cpp
        HelloLangLexer.h
        HelloLangListener.cpp
        HelloLangListener.h
        HelloLangParser.cpp
        HelloLangParser.h
        test.cpp)
