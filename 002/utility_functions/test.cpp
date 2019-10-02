#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "UtilityFunctions.h"
TEST_CASE( "works with all evens and all odds", "[vector]" ) {

    std::vector<int> v( 5 );
    std::vector<bool> bools;
    SECTION( "all evens" ) {
        v= {2,4,6,8,10};
        bools = EvenMask(v);
        for(int i = 0; i < 5; i++){
          REQUIRE( bools[i] == 1 );
        }
    }
    SECTION( "all odds" ) {
        v= {1,3,5,7,9};
        bools = EvenMask(v);
        for(int i = 0; i < 5; i++){
          REQUIRE( bools[i] == 0 );
        }
    }
}
