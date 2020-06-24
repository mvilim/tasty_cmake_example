add_subdirectory(detail)

add_library(tasty_int INTERFACE)

target_link_libraries(
    tasty_int
    INTERFACE
    tasty_int-detail1
    tasty_int-detail2
)

add_executable(tasty_int_ex main.cpp)
target_link_libraries(tasty_int_ex tasty_int)
