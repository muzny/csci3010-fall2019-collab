#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>
#include "UtilityFunctions.h"
using namespace std;

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function

// tests the sign function with two sections (checks both positive and negative cases)
TEST_CASE() {
    REQUIRE( Sign(4.5) == 1 );
    REQUIRE( Sign(-2.764) == -1 );

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
