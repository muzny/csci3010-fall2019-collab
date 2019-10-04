#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <vector>
#include <iostream>
#include "UtilityFunctions.h"
using namespace std;


// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function


TEST_CASE( "Doubles are summed", "[summation]" ) {
    std::vector<double> v{2.4, 5.0, 6.9, 13.4, 15.9};

    SECTION( "test for correct summation of double" ) {
        REQUIRE( v.size() > 0 );
        REQUIRE( Sum(v) == 43.6 );
    }
    SECTION( "test for correct output if vector is empty" ) {
        v.resize( 0 );

        REQUIRE( v.size() == 0 );
        REQUIRE( Sum(v) == 0.0 );
    }

TEST_CASE("addN(Double)is working."){
    vector<double> test_vector3 = {1.0, 2.0, 3.0, 4.0};
    vector<double> correct_vector3={2.0, 3.0, 4.0, 5.0};
    REQUIRE(AddN(test_vector3,1.0)==correct_vector3);

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

