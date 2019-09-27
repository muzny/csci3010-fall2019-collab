#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function
TEST_CASE ( "Vector values should be able to be modified", "[vector]") {
	std::vector<int> v = {1,2,3,4};

	std::vector<int> t = {2,3,4,5};
	std::vector<int> d = {0,1,2,3};


	SECTION("adding 1 changes values") {
	    std::vector<int> temp = VectorPlusN( v, 1 );
	    REQUIRE( temp == t );
	}

	SECTION("adding -1 changes values") {
	    std::vector<int> res = VectorPlusN( v, -1 );
	    REQUIRE( res == d );
	}



}
