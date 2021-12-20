cmake_minimum_required(VERSION 3.0)

file(GLOB SOURCES "*.cpp")

set(LibraryName "SpellChecker")

add_library(${LibraryName} SHARED ${SOURCES})   # compile "shared.cpp" and create a SHARED library called "shared"

add_executable(main main.cpp)           # compile "main.cpp" the the executable called "main"

target_link_libraries(main ${LibraryName})      # link our previously created shared library "shared" to the exectable "main"

