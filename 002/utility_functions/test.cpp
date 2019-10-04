#define CATCH_CONFIG_MAIN
#include "UtilityFunctions.h"

#include "catch.hpp"
#include <iostream>
#include <vector>

using namespace std;

TEST_CASE ( "Vector is working.") {
    
    REQUIRE( GreaterMask(test_vector, greater_than) ==  correct_vector);
    REQUIRE( GreaterMask(test_vector2, greater_than2) == correct_vector2 );
}
// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function


// tests the sign function with two sections (checks both positive and negative cases)
TEST_CASE() {
    REQUIRE( Sign(4.5) == 1 );
    REQUIRE( Sign(-2.764) == -1 );
}
  TEST_CASE( "combines vector to string with glue in between", "[vector]" ) {
  std::vector<string> a{"wow"};
  string glue = "-";
  SECTION("vector of single entity", "[vector]"){
    REQUIRE( Join(a, glue) == "wow");
  };
  vector<string> b{"wow", "this", "is", "COOOOOL"};
  SECTION("vector of multiple entities", "[vector]"){
    REQUIRE( Join(b, glue) == "wow-this-is-COOOOOL");
    glue =  " ";
    REQUIRE( Join(b, glue) == "wow this is COOOOOL");
  }
}