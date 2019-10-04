#define CATCH_CONFIG_MAIN
#include "UtilityFunctions.h"

#include "catch.hpp"
#include <iostream>

using namespace std;

// tests the sign function with two sections (checks both positive and negative cases)
TEST_CASE() {
    REQUIRE( Sign(4.5) == 1 );
    REQUIRE( Sign(-2.764) == -1 );
}
