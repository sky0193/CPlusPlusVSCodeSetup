cmake_minimum_required(VERSION 3.0)
project(sharedLibsDemo)                 # create a project with the given name
add_library(shared SHARED shared.cpp)   # compile "shared.cpp" and create a SHARED library called "shared"
add_executable(main main.cpp)           # compile "main.cpp" the the executable called "main"
include (GenerateExportHeader)          
GENERATE_EXPORT_HEADER(shared           # generates the export header shared_EXPORTS.h automatically
    BASE_NAME shared
    EXPORT_MACRO_NAME shared_EXPORTS
    EXPORT_FILE_NAME shared_EXPORTS.h
    STATIC_DEFINE SHARED_EXPORTS_BUILT_AS_STATIC)
target_link_libraries(main shared)      # link our previously created shared library "shared" to the exectable "main"