#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function
TEST_CASE( "product of a vector can be correctly calculated", "[product]" ) {

    std::vector<int> v;
    int product;

    SECTION( "empty vector returns 0" ) {
    	product = Product(v);
        REQUIRE( product == 0 );
    }

    SECTION( "populated vector returns correct product" ) {
        v = {5,5,5};
        product = Product(v);
        REQUIRE( product == 125 );
    }
}