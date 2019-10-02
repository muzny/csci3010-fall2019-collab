#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function
//Test for sign function
TEST_CASE("return 1 if positive and -1 if negative","[Sign]"){
    REQUIRE(Sign(0)==0);
    SECTION("Test with positive values") {
        REQUIRE(Sign(2)==1);
        REQUIRE(Sign(-5)==1);
        REQUIRE(Sign(1)==1);
    }
    SECTION("Test with negative values ") {
        REQUIRE(Sign(-3)==-1);
        REQUIRE(Sign(-20)==-1);
        REQUIRE(Sign(-1)==-1);
    }
}

