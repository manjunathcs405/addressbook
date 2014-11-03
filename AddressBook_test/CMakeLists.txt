# G-test CMakeLists.txt
#

cmake_minimum_required(VERSION 2.8.7)
project(AddessBookTest)

################################
# GTest
################################
#ADD_SUBDIRECTORY (gtest-1.6.0)
#enable_testing()
#include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})


AUX_SOURCE_DIRECTORY(src TST_SRC_LOCAL)
add_executable(AddessBookTest ${TST_SRC_LOCAL} ${TST_SRC})
target_link_libraries(AddessBookTest -lpthread gtest gtest_main)
install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/bin)


