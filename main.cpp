#include <iostream>
#include <gtest/gtest.h>

using namespace std;

string fizzBuzz(int n)
{
	if(n % 3 == 0)
		return "Fizz";
	if(n % 5 == 0)
		return "Buzz";

	return to_string(n);
}


TEST(fizzBuzzProj, TestCase_2)
{
	string result = fizzBuzz(2);
	ASSERT_STREQ(result.c_str(), to_string(2).c_str());

}

TEST(fizzBuzzProj, TestCase_3)
{
	string result = fizzBuzz(3);
	ASSERT_STREQ(result.c_str(), "Fizz");
}
TEST(fizzBuzzProj, TestCase_5)
{
	string result = fizzBuzz(5);
	ASSERT_STREQ(result.c_str(), "Buzz");
}
