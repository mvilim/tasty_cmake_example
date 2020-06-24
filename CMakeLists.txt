add_subdirectory(detail)

add_library(tasty_int STATIC)

target_sources(
    tasty_int
    PUBLIC
)
target_link_libraries(
    tasty_int
    PUBLIC
    tasty_int-detail1
    tasty_int-detail2
)

add_executable(tasty_int_ex main.cpp)
target_link_libraries(tasty_int_ex tasty_int)
