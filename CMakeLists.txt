cmake_minimum_required(VERSION 3.20)

project(snek
    VERSION 1.0
        DESCRIPTION "Classic arcade snake game."
        HOMEPAGE_URL "https://github.com/advnpzn/snek"
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES

        src/main.cpp
        src/food.h
        src/game.cpp
        src/game.h
)

find_package(raylib CONFIG REQUIRED)

add_executable(snek
    ${SOURCES}
)

target_link_libraries(snek PRIVATE raylib)