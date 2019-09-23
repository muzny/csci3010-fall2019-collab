#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>

#include "UtilityFunctions.h"

TEST_CASE( "type <double> values in vectors can be uniformly changed", "[vector]" ) {

    std::vector<double> v( 5 );
    std::vector<double> v_1 = AddN( v, 0 );
    std::vector<double> v_2 = AddN( v, 2.0 );


    // included from catch documentation - just make sure the std vector is properly included
    REQUIRE( v.size() == 5 );
    REQUIRE( v.capacity() >= 5 );

    SECTION( "testing Kamiar's function AddN with 0" ) {
        REQUIRE( v == v_1 ); // == operator is overloaded for std::vector
    }

    SECTION( "testing Kamiar's function AddN" ) {

        REQUIRE( v.size() == v_2.size() );

        for (int i=0; i<v.size(); i++) {
          REQUIRE( v[i] + 2.0 == v_2[i]) ;
        }

    }

}
