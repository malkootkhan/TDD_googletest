#include <iostream>
#include <gtest/gtest.h>

using namespace std;

string fizzBuzz(int n)
{
	string str = "";
	if(n % 3 == 0)
		 str += "Fizz";
	if(n % 5 == 0)
		str += "Buzz";
	if(n % 3 != 0 && n % 5 != 0)
		str += to_string(n);

	return str.c_str();
}


TEST(fizzBuzzProj, TestCase_2)
{
	int n = 2;
	string result = fizzBuzz(n);
	ASSERT_STREQ(result.c_str(), to_string(n).c_str());

}

TEST(fizzBuzzProj, TestCase_3)
{
	int n = 3;
	string result = fizzBuzz(n);
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
