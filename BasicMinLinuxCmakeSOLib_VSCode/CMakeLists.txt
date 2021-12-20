cmake_minimum_required(VERSION 3.0)

project(spellChecker)                 # create a project with the given name

add_library(shared SHARED levenstein_distance.cpp shared.cpp)   # compile "shared.cpp" and create a SHARED library called "shared"

add_executable(main main.cpp)           # compile "main.cpp" the the executable called "main"

target_link_libraries(main shared)      # link our previously created shared library "shared" to the exectable "main"