#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"

#include <vector>
#include <limits>

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function


TEST_CASE( "Multiples are computed", "[multiple]" ) {
    SECTION("Normal"){
	std::vector<int> normal, edge, corner;
        normal.push_back(5); 
        normal.push_back(10);
        normal.push_back(15);
        REQUIRE( Multiples(5, 3) == normal );
    }
    SECTION("Others"){
	std::vector<int> edge, corner;
	int inf = std::numeric_limits<int>::infinity();
        REQUIRE( Multiples(4, 0) == edge );
        edge.push_back(inf);
        edge.push_back(inf);
        edge.push_back(inf);
        edge.push_back(inf);
	REQUIRE( Multiples(inf, 4) == edge );
        REQUIRE( Multiples(12, -1) == corner );

    }
}
