include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.17.0
)

FetchContent_MakeAvailable(googletest)

add_executable(
	sum_test
	sum_test.cpp
)

target_link_libraries(
	sum_test
	GTest::gtest_main
	sum
)

include(GoogleTest)
gtest_discover_tests(sum_test)