cmake_minimum_required(VERSION 3.20)

project(LimitOrderBook)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(orderbook
    src/main.cpp
    src/Order.cpp
    src/OrderBook.cpp
)

target_include_directories(orderbook PRIVATE include)