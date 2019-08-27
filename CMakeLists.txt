cmake_minimum_required(VERSION 3.12)
project(scatdataloader VERSION 1.0.0 LANGUAGES CXX)

option(SDL_TESTS_AUTOEXEC "Execute tests automatically at the end of the build" ON)
option(SDL_TESTS_AUTODISCOVERY "Auto discover tests and add to ctest" ON)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules)

include(CTest)
include(configuration)

# add_subdirectory(core)
add_subdirectory(GUI)
add_subdirectory(main)
add_subdirectory(thirdparty/gtest)
add_subdirectory(thirdparty/qcustomplot)



 
