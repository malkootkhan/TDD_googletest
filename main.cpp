#include <iostream>
#include <gtest/gtest.h>

using namespace std;

string fizzBuzz(int n)
{
	if(n % 3 == 0)
		return "Fizz";
	else 
		return to_string(n);

}


TEST(fizzBuzzProj, TestCase_1)
{
	ASSERT_TRUE(fizzBuzz(1) == "1");
}

TEST(fizzBuzzProj, TestCase_2)
{
	string result = fizzBuzz(2);
	ASSERT_STREQ(result.c_str(), "2");

}

TEST(fizzBuzzProj, TestCase_3)
{
	string result = fizzBuzz(3);
	ASSERT_STREQ(result.c_str(), "Fizz");
}
