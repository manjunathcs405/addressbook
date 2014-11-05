# G-test CMakeLists.txt
#

cmake_minimum_required(VERSION 2.8.7)
project(AddessBookTest)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})


AUX_SOURCE_DIRECTORY(src TST_SRC_LOCAL)
add_executable(AddessBookTest ${TST_SRC_LOCAL} ${TST_SRC})
target_link_libraries(AddessBookTest -lpthread gtest gtest_main)


