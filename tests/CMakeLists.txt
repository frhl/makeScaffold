#add_executable(tests 
#  main.cc
#  mendel.cc)

add_executable(mendel mendel.cc)
include_directories(".")
include_directories("../lib")
#
#
add_test(mendel ${EXECUTABLE_OUTPUT_PATH}/mendel)
#target_include_directories(mendel ${CMAKE_SOURCE_DIR}/src)
#
target_link_libraries(mendel scaffold_)
#
include_directories(${Boost_INCLUDE_DIRS})
include_directories(${CMAKE_SOURCE_DIR}/tests ${CMAKE_SOURCE_DIR}/src)
include_directories(catch)
include_directories("../lib/OTools")
#
#target_link_libraries(tests ${Boost_LIBRARIES})
#
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/catch)
#include(CTest)
#include(Catch)

## register Catch2 tests as individual CTest tests
#catch_discover_tests(tests)
