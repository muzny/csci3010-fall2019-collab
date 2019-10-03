#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"

using namespace std;

vector<int> test_vector = {1, 2, 3, 4};
int greater_than = 3;
vector<bool> correct_vector = {false, false, false, true};

vector<int> test_vector2 = {10, 20, 30};
int greater_than2 = 15;
vector <bool> correct_vector2 = {false, true, true};

TEST_CASE ( "Vector is working.") {

    REQUIRE( GreaterMask(test_vector, greater_than) ==  correct_vector);
    REQUIRE( GreaterMask(test_vector2, greater_than2) == correct_vector2 );
}
// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function
TEST_CASE("testing the SubtractN function", "[classic]")
{
  vector<double> posVect={1,2,3,4,5};
  vector<double> negVect={-1,-2,-3,-4,-5};
    SECTION("subtract from positive"){
      double n=1;
      vector<double>WhatIWant={0,1,2,3,4};
      REQUIRE(SubtractN(posVect,n)==WhatIWant);
    }
    SECTION("subtract from negative"){
      double n=1;
      vector<double>WhatIWant={-2,-3,-4,-5,-6};
      REQUIRE(SubtractN(negVect,n)==WhatIWant);
    }

}
