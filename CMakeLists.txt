cmake_minimum_required(VERSION 3.28)

project(Calculator)

add_library(sum lib/sum.cpp)
target_include_directories(sum PUBLIC include)

add_executable(calculator src/calculator.cpp)
target_include_directories(calculator PUBLIC include)
target_compile_features(calculator PRIVATE cxx_std_20)
target_compile_options(calculator PRIVATE -Wall -Wextra -Wpedantic -O3 -Werror)

target_link_libraries(calculator PUBLIC sum)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1) # for clangd