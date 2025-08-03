cmake_minimum_required(VERSION 4.0)

project(Calculator)

add_library(sum lib/sum.cpp)
target_include_directories(sum PUBLIC include)

add_executable(calculator src/calculator.cpp)
target_include_directories(calculator PUBLIC include)
target_compile_features(calculator PRIVATE cxx_std_20)
target_compile_options(calculator PRIVATE -Wall -Wextra -Wpedantic -O3 -Werror)

target_link_libraries(calculator PUBLIC sum)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1) # for clangd

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.17.0
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
	sum_test
	test/sum_test.cpp
)

target_link_libraries(
	sum_test
	GTest::gtest_main
	sum
)

include(GoogleTest)
gtest_discover_tests(sum_test)