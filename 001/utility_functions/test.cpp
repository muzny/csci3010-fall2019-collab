#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function
vector<int> nums = {0,1,2,3,4,10};
vector<int> nums2 = {2,3,4,10};
vector<int> nums3 = {200,10};

TEST_CASE("Test Addition", "[vector]")
{
  SECTION("Test with different numbers") {
      REQUIRE(Sum(nums) == 20); 
      REQUIRE(Sum(nums2) == 19);
      REQUIRE(Sum(nums3) == 210);
    
  }
 
  SECTION("Test add in a new number and then add") {
      nums3.push_back(10);
      REQUIRE(Sum(nums3) == 220);
      
  }
    
  SECTION("Test add a negative number and then add") {
      nums3.push_back(-10);
      REQUIRE(Sum(nums3) == 210);
      
  }
}
