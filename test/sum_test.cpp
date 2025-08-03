#include <gtest/gtest.h>
#include <sum.hpp>

TEST(sum_test, add_2_numbers)
{
	ASSERT_EQ(sum(2,3), 5);
	ASSERT_EQ(sum(17,2), 19);
	ASSERT_EQ(sum(22,20), 42);
	ASSERT_EQ(sum(5,3), 8);
}