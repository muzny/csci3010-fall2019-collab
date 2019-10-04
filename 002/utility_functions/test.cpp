#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>
#include <vector>
#include "UtilityFunctions.h"
using namespace std;

TEST_CASE ("Testing Product Function", "[product]"){
  UtilityFunctions u1;
  SECTION("Smaller"){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    REQUIRE (u1.Product(v1) == 6);
  }
  SECTION("Bigger"){
    vector<int> v2;
    for (int i = 1; i <= 5; i++)
    {
      v2.push_back(i);
    }
    REQUIRE (u1.Product(v2) == 120);
  }
}

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function

TEST_CASE( "combines vector to string with glue in between", "[vector]" ) {
  std::vector<string> a{"wow"};
  string glue = "-";
  SECTION("vector of single entity", "[vector]"){
    REQUIRE( Join(a, glue) == "wow");
  }
  vector<string> b{"wow", "this", "is", "COOOOOL"};
  SECTION("vector of multiple entities", "[vector]"){
    REQUIRE( Join(b, glue) == "wow-this-is-COOOOOL");
    glue =  " ";
    REQUIRE( Join(b, glue) == "wow this is COOOOOL");
  }
}

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function
TEST_CASE("addN(Double)is working."){
    vector<double> test_vector3 = {1.0, 2.0, 3.0, 4.0};
    vector<double> correct_vector3={2.0, 3.0, 4.0, 5.0};
    REQUIRE(AddN(test_vector3,1.0)==correct_vector3);
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
