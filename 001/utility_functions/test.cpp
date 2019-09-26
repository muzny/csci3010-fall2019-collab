#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <vector>
#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function
TEST_CASE( "vectors can be sized and resized", "[vector]" ) {

    std::vector<int> v = {5, 6, 7, 8, 9};
    std::vector<int> output = {0,1,2,3,4};
    int n = 5;

    SECTION( "resizing bigger changes size and capacity" ) {
        REQUIRE( SubtractN(v, n) == output );
    }
    SECTION( "resizing smaller changes size but not capacity" ) {
        int n = -2;
        output = {7, 8, 9, 10, 11};
        REQUIRE( SubtractN(v, n) == output);
    }
    SECTION( "resizing smaller changes size but not capacity" ) {
        int n = 3;
        std::vector<int> v2 = {};
        output = {};
        REQUIRE( SubtractN(v2, n) == output);
    }
}
