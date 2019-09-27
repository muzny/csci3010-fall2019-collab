#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"
#include <vector>
#include <iostream>

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function
UtilityFunctions u1;
TEST_CASE ( "Vector Plus N", "[VectorPlusN]") {
std::vector<double> v1 = {1.0, 1.5, 2.0};

v1 = u1.VectorPlusN(v1, 1.0);
  REQUIRE( v1[0] == 2.0 );
  REQUIRE( v1[1] == 2.5 );
  REQUIRE( v1[2] == 3.0 );
}
