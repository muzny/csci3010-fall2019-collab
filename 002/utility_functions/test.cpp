#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <vector>
#include "UtilityFunctions.h"
using namespace std;

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function
TEST_CASE("testing multiplying vector elements by a constant n","[vector]"){
	vector<int> v1{1,2,3,4};
	SECTION("vector <1,2,3,4> "){
		vector<int> v1{1,2,3,4};
		vector<int> v2{2,4,6,8};
		REQUIRE (VectorTimesN(v1,2) == v2);
	}

	SECTION("empty vector"){
		vector<int> empty{};
		vector<int> emptyCheck{};
		REQUIRE(VectorTimesN(empty,100) ==emptyCheck);
	}
}