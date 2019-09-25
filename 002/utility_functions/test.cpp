#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function

TEST_CASE("vector values can be modified", "[vector]") {
  std::vector<int> v{ 0 };
  std::vector<int> des1{ 1 };
  std::vector<int> des2{ -1 };

  SECTION("adding 1 changes values") {
    std::vector<int> res = AddN( v, 1 );
    REQUIRE( res == des1 );
  }

  SECTION("adding -1 changes values") {
    std::vector<int> res = AddN( v, -1 );
    REQUIRE( res == des2 );
  }
}