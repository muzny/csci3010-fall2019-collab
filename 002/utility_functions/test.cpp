#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "UtilityFunctions.h"
using namespace std;

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function


TEST_CASE ("Removes all elements evenly divisible by the passed in int", "[vector]"){

    SECTION("vector {2,4,6,8,7,3}"){
        vector<int> num1{2,4,6,8,7,3};
        vector<int> num2{2,4,6,8};
        REQUIRE(MultiplesFilter(num1,2) == num2);
    }

    SECTION("vector {2,4,6,8,12,18,30}"){
        vector<int> num1{2,4,6,8,12,18,30};
        vector<int> num2{6,12,18,30};
        REQUIRE(MultiplesFilter(num1,3) == num2);
    }
}
