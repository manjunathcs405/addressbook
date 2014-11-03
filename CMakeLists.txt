# CMakeLists files for the Project AddressBook

cmake_minimum_required (VERSION 2.8.7)
project (AddressBook)

#need to find better place for this function
############################################################
############################################################
function(add_test target_name)
    get_property(SOURCES TARGET ${target_name} PROPERTY "SOURCES")
    set(TST_SRC)
    foreach(SRC ${SOURCES})
        if(NOT ${SRC} MATCHES "main.cpp")
            set(TST_SRC ${TST_SRC} ${CMAKE_CURRENT_SOURCE_DIR}/${SRC})
        endif()
    endforeach()

    include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
    add_subdirectory(${target_name}_test)
endfunction()
############################################################
############################################################


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

add_test(AddressBook)
install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/bin)


