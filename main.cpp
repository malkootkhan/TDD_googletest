#include <iostream>
#include <gtest/gtest.h>

using namespace std;

string fizzBuzz(int n)
{
	if(n % 3 == 0 && n % 5 == 0)
		return "FizzBuzz";
	if(n % 3 == 0)
		return "Fizz";
	if(n % 5 == 0)
		return "Buzz";

	return to_string(n);
}


TEST(fizzBuzzProj, TestCase_2)
{
	int n = 2;
	string result = fizzBuzz(n);
	ASSERT_STREQ(result.c_str(), to_string(n).c_str());

}

TEST(fizzBuzzProj, TestCase_3)
{
	string result = fizzBuzz(3);
	ASSERT_STREQ(result.c_str(), "Fizz");
}
TEST(fizzBuzzProj, TestCase_5)
{
	int n = 5;
	string result = fizzBuzz(n);
	ASSERT_STREQ(result.c_str(), "Buzz");
}
TEST(fizzBuzzProj, TestCase_15)
{
	int n = 15;
	string result = fizzBuzz(n);
	ASSERT_STREQ(result.c_str(), "FizzBuzz");
}
