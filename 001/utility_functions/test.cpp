#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <vector>

#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function
TEST_CASE("VectorPlusN", "[vectorplusn]")
{
  std::vector<double> v = {1, 2, 3};

  SECTION("should add 3 to each value of the vector") {
  	  std::vector<double> expected = {4, 5, 6};
      REQUIRE(VectorPlusN(v, 3) == expected); 
   }

   SECTION("should not change vector if 0 value is passed") {
      REQUIRE(VectorPlusN(v, 0) == v);

   }

   SECTION("should subtract 4 from each value of the vector") {
   	  std::vector<double> expected = {-3, -2, -1};
      REQUIRE(VectorPlusN(v, -4) == expected);

   }
}
