#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function
TEST_CASE( "Check Factorial Function" ) 
{
    SECTION( "Check values from [0,4]" )
    {
        REQUIRE( Factorial(0) == 1 );
        REQUIRE( Factorial(1) == 1 );
        REQUIRE( Factorial(2) == 2 );
        REQUIRE( Factorial(3) == 6 );
        REQUIRE( Factorial(4) == 24 );
    }
    SECTION( "Check values from [-5,-3]" ) 
    {
        REQUIRE( Factorial(-5) == -1 );
        REQUIRE( Factorial(-4) == -1 );
        REQUIRE( Factorial(-3) == -1 );
    }
}