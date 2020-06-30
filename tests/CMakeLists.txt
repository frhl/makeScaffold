

#add_executable(tests 
#  main.cc
#  em.cc
#  io.cc
#  model.cc)
#
#
##add_executable(testio io.cc)
##add_executable(testmodel model.cc)
##add_executable(testem em.cc)
#include_directories(".")
#include_directories("../lib")
#
#
##add_test(io ${EXECUTABLE_OUTPUT_PATH}/testio)
##add_test(model ${EXECUTABLE_OUTPUT_PATH}/testmodel)
##add_test(em ${EXECUTABLE_OUTPUT_PATH}/testem)
##target_include_directories(testio ${CMAKE_SOURCE_DIR}/src)
#
#
##target_link_libraries(testio asmc_)
##target_link_libraries(testmodel asmc_)
##target_link_libraries(testem asmc_)
#target_link_libraries(tests asmc_)
#
#
#include_directories(${Boost_INCLUDE_DIRS})
#include_directories(${CMAKE_SOURCE_DIR}/tests ${CMAKE_SOURCE_DIR}/src)
#include_directories(catch)
#
#target_link_libraries(tests ${Boost_LIBRARIES})
#
#list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/catch)
#include(CTest)
#include(Catch)
#
## register Catch2 tests as individual CTest tests
#catch_discover_tests(tests)
