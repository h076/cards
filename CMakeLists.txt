cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS OFF)

project(cards)

set(TEST_SOURCE
    testCards.cpp
    Deck.cpp
    Card.cpp
    Deck.h
    Card.h)

add_executable(testCards ${TEST_SOURCE})
