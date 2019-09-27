#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <vector>
#include "UtilityFunctions.h"

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
