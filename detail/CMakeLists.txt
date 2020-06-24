add_library(tasty_int-detail1 STATIC)
target_sources(
    tasty_int-detail1
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/detail1.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/detail1.hpp
)

add_library(tasty_int-detail2 STATIC)
target_sources(
    tasty_int-detail2
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/detail2.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/detail2.hpp
)
