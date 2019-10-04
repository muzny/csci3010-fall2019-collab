#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include <vector>
#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function

TEST_CASE("Boolen vector is returned ","[vector]"){
	std::vector<bool> trueVect{ true };
	REQUIRE( OddMask({1}) == trueVect );
	
	std::vector<bool> falseVect{ false };
	REQUIRE( OddMask({2}) == falseVect );
	
	std::vector<bool> testVect{ true, false, false };
	REQUIRE( OddMask({15, 0, 222}) == testVect );
}
