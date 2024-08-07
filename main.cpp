#include <iostream>
#include <gtest/gtest.h>

using namespace std;

string fizzBuzz(int n)
{
	return to_string(n);
}


TEST(fizzBuzzProj, TestCase_1)
{
	ASSERT_TRUE(fizzBuzz(1) == "1");
}

TEST(fizzBuzzProj, TestCase_2)
{
	EQUAL_EXP();
}
