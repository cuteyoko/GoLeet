cmake_minimum_required(VERSION 3.1.0)
project(unittest)

# Now simply link against gtest or gtest_main as needed.
add_executable(utest test.cpp)
target_link_libraries(utest gtest_main)
enable_testing()