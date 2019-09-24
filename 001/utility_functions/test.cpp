#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <vector>
#include <math.h>

#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function
TEST_CASE("Removes all elements of vector divisible by divides_by","[vector]"){

	std::vector<double> test_vec = {100,101,200,205,300,345};
	std::vector<double> return_expected1 = {101,205,345};
	std::vector<double> return_expected2 = {100,101,200,205,300,345};

	SECTION("Removes all elements which are divisible by input number"){
		REQUIRE(MultiplesFilter(test_vec,10) == return_expected1);
		REQUIRE(fmod(100,10)==0);
		REQUIRE(fmod(200,10)==0);
		REQUIRE(fmod(300,10)==0);
		REQUIRE(fmod(101,10)!=0);
		REQUIRE(fmod(205,10)!=0);
		REQUIRE(fmod(345,10)!=0);
	}

	SECTION("Doesn't remove any elements if none are divisible by input number"){
		REQUIRE(MultiplesFilter(test_vec, 19) == test_vec);
		REQUIRE(fmod(100,19)!=0);
		REQUIRE(fmod(200,19)!=0);
		REQUIRE(fmod(300,19)!=0);
		REQUIRE(fmod(101,19)!=0);
		REQUIRE(fmod(205,19)!=0);
		REQUIRE(fmod(345,19)!=0);		
	}
}