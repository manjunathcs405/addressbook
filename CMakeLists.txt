# CMakeLists files for the Project AddressBook

cmake_minimum_required (VERSION 2.8.7)
project (AddressBook)

set(CMAKE_CXX_FLAGS "-g -Wall")

include(FindPkgConfig)

pkg_check_modules(GLIB2 REQUIRED glib-2.0)
include_directories(${GLIB2_INCLUDE_DIRS})


add_executable (AddressBook
    src/main.cpp
    src/AddressBook.cpp
    src/Person.cpp)

include_directories(src)


target_link_libraries(AddressBook ${GLIB2_LDFLAGS})


