#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function

TEST_CASE( "RemoveTwos returns the original int divided by 2 until it can no longer be divided", "[removetwos]" ) {

    SECTION( "an odd input is immediately returned" ) {
        REQUIRE( RemoveTwos(5) == 5 );
        REQUIRE( RemoveTwos(7) == 7 );
    }

    SECTION( "even inputs are properly divided" ) {
        REQUIRE( RemoveTwos(16) == 1 );
        REQUIRE( RemoveTwos(6) == 3 );
    }
}