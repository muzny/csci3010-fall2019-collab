#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"
#include "UtilityFunctions.cpp"

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function

TEST_CASE( "integer sign is reported back", "[int]" ) {

    SECTION( "testing positive values" ) {
        REQUIRE( Sign(15) == 1 ); //return positive or bust
		REQUIRE( Sign(55) == 1 );
		REQUIRE( Sign(635) == 1 );
    }
    SECTION( "testing negative values" ) {
        REQUIRE( Sign(-15) == -1 ); //return negative
		REQUIRE( Sign(-55) == -1 );
		REQUIRE( Sign(-635) == -1 );
    }
    SECTION( "testing zero" ) {
        REQUIRE( Sign(0) == 1 ); //return 1
    }

}