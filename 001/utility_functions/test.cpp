#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function


TEST_CASE("Subtraction is completed", "[subtractn]"){
	
	SECTION("Returning a vector of positive doubles"){
		REQUIRE( SubtractN(std::vector<double>{1, 2, 3, 4, 5}, 1) == std::vector<double>{0, 1, 2, 3, 4});
	}
	
	SECTION("Returning a vector with negative doubles"){
		REQUIRE ( SubtractN(std::vector<double>{5,6,7,8,9}, 9) == std::vector<double>{-4, -3, -2, -1, 0});

	}
}

