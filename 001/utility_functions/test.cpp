#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"
#include <vector>

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function

TEST_CASE( "Testing that Entire Vector is Multiplied Correctly with VectorTimesN Function", "[VectorTimesN]" ) {
  std::vector<int> n;
  //Fill a large vector to check that every element is hit
  for(int i = 0; i < 100; i++) {
    n.push_back(i);
  }
  n = VectorTimesN(n, 0);
  for(int i = 0; i < 100; i++) {
    REQUIRE(n[i] == 0);
  }
  n.clear();

  SECTION("Testing that Original Vector is Not Modified") {
    for(int i = 0; i < 7; i++) {
      n.push_back(i);
    }
    std::vector<int> m = VectorTimesN(n, 3);
    for(int i = 0; i < 7; i++) {
      REQUIRE(m[i] == i * 3);
      REQUIRE(n[i] == i);
    }
    n.clear();
    m.clear();
  }

  SECTION("Sending in an Empty Vector should Return an Empty Vector") {
    std::vector<int> m = VectorTimesN(m, 2);
    REQUIRE(m.empty());
  }

  SECTION("Finally a Standard Multiplication Test") {
    for(int i = 0; i < 10; i++) {
      n.push_back(i);
    }
    std::vector<int> m = VectorTimesN(n, 10);
    for(int i = 0; i < 10; i++) {
      REQUIRE(m[i] == n[i] * 10);
    }
    n.clear();
    m.clear();
  }
}
