file(GLOB src_files "*.cpp")
file(GLOB header_files "*.h")
include_directories(".")
include_directories("../lib/OTools")

add_executable(scaffold  ${src_files})
target_link_libraries(scaffold ${Boost_LIBRARIES}) #${BGEN_LIBRARIES})
target_link_libraries(scaffold ${HTSLIB_LIBRARY}) #${BGEN_LIBRARIES})


add_library(scaffold_ SHARED ${src_files})
target_link_libraries(scaffold_ ${Boost_LIBRARIES}) #${BGEN_LIBRARIES})
target_link_libraries(scaffold_ ${HTSLIB_LIBRARY}) #${BGEN_LIBRARIES})
