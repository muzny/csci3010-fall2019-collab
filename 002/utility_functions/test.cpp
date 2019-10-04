#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <vector>
#include <iostream>
#include "UtilityFunctions.h"
using namespace std;


// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function

//Abby Nay testing my Sum function with these test cases
TEST_CASE("Adding all the elements in a vector", "[vector]"){
    SECTION("Make sure with different vectors the sum still works"){
        std::vector<int> nums_1 = {5,7,9};
        std::vector<int> nums_2 = {5,5,5};
        std::vector<int> nums_3 = {2,1,1};
        REQUIRE(Sum(nums_1) == 21);
        REQUIRE(Sum(nums_2) == 15);
        REQUIRE(Sum(nums_3) == 4);
    }
    
    SECTION("See if it works when we add a number to the vector"){
        std::vector<int> nums_3 = {2,1,1};
        nums_3.push_back(6);
        REQUIRE(Sum(nums_3) == 10);
    }
    
    SECTION("See if it works when we add a negative number to the vector"){
        std::vector<int> nums_1 = {5,7,9};
        nums_1.push_back(-1);
        REQUIRE(Sum(nums_1) == 20);
    }
}

TEST_CASE("Product is working")
{
    vector<double> t_1 = {1.0, 2.0, 3.0, 5.0};
    double a_1 = 30.0;
    vector<double> t_2 = {-1.0, -2.0, -4.0};
    double a_2 = -8.0;
    vector<double> t_3 = {-2.0, -4.0};
    double a_3 = 8.0;
    vector<double> t_4 = {1.0, 2.0, 3.0, 0.0};
    double a_4 = 0.0;
    vector<double> t_5 = {5.0};
    double a_5 = 5.0;

    SECTION("All Positive Numbers") // testing a regular vector
    {
        REQUIRE(Product(t_1) == a_1);
    }
    SECTION("Odd Negatives") // testing to make sure that when multiplying an odd amount of negative numbers it returns a negative product
                             
    {
        REQUIRE(Product(t_2) == a_2);
    }
    SECTION("Even Negatives")// testing to make sure that when multiplying an even amount of negative numbers it returns a postive product
    {
        REQUIRE(Product(t_3) == a_3);
    }
    SECTION("Anything times zero")// testing to make sure that when mult by 0 result is 0
    {
        REQUIRE(Product(t_4) == a_4);
    }
    SECTION("One number")// checking to see if the vector works on one element.
    {
        REQUIRE(Product(t_5) == a_5);
    }
// tests the sign function with two sections (checks both positive and negative cases)
TEST_CASE() {
    REQUIRE( Sign(4.5) == 1 );
    REQUIRE( Sign(-2.764) == -1 );
}


/*
This test cases tests the Factorial function in UtilityFunctions.cpp.
The two sections are 5! and 4!. 
*/
TEST_CASE("Factorial"){
	SECTION("Factorial of 5."){
		int n = 5;

		REQUIRE(Factorial(n) == 120);
	}
	SECTION("Factorial of 4."){
		int n = 4;

		REQUIRE(Factorial(n) == 24);
	}
}



TEST_CASE("testing multiplying vector elements by a constant n","[vector]"){
	vector<int> v1{1,2,3,4};
	SECTION("vector <1,2,3,4> "){
		vector<int> v1{1,2,3,4};
		vector<int> v2{2,4,6,8};
		REQUIRE (VectorTimesN(v1,2) == v2);
	}

	SECTION("empty vector"){
		vector<int> empty;
		vector<int> emptyCheck;
		REQUIRE(VectorTimesN(empty,100) ==emptyCheck);
	}
}



//Test for fibonacci
TEST_CASE ( "Fibonacci", "[Fibonacci]") {
  REQUIRE( fibonacci(15) == 610 );
  REQUIRE( fibonacci(0) == 0 );
  REQUIRE( fibonacci(1) == 1 );

}
//Test for sign function
TEST_CASE("return 1 if positive and -1 if negative","[Sign]") {
    REQUIRE(Sign(0)==0);
    SECTION("Test with positive values") {
        REQUIRE(Sign(2)==1);
        REQUIRE(Sign(5)==1);
        REQUIRE(Sign(1)==1);

    }
    SECTION("Test with negative values ") {
        REQUIRE(Sign(-3)==-1);
        REQUIRE(Sign(-20)==-1);
        REQUIRE(Sign(-1)==-1);
    }
}
