cmake_minimum_required(VERSION 3.26)
project(Projet_Info)

set(CMAKE_CXX_STANDARD 20)

include_directories("C:/Users/lehir/Bureau/MinGW avec Allegro 4/MinGW/include")
link_directories("C:/Users/lehir/Bureau/MinGW avec Allegro 4/MinGW/lib")

add_executable(Projet_Info
        game.h
        main.c
        menu.c
)

target_link_libraries(Projet_Info PRIVATE alleg44.dll)
