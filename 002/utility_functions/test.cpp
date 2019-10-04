#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function
TEST_CASE( "Doubles are summed", "[summation]" ) {
    std::vector<double> v{2.4, 5.0, 6.9, 13.4, 15.9};

    SECTION( "test for correct summation of double" ) {
        REQUIRE( v.size() > 0 );
        REQUIRE( Sum(v) == 43.6 );
    }
    SECTION( "test for correct output if vector is empty" ) {
        v.resize( 0 );

        REQUIRE( v.size() == 0 );
        REQUIRE( Sum(v) == 0.0 );
    }
}
