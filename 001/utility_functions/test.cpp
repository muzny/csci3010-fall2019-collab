#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>
using namespace std; 
#include <vector>

#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function

TEST_CASE("Testing odd or even", "[EvenMask]"){
	SECTION ("Testing a combination"){
		vector<int> check1 = {1,2,3,4,5,6,7,8,9};
		vector<bool> temp = {0,1,0,1,0,1,0,1,0};
		REQUIRE(EvenMask(check1)== temp);
	}
	
	SECTION ("Testing all even"){
		vector<int> check2 = {4,6,8,10};
		vector<bool> temp = {1,1,1,1};
		REQUIRE(EvenMask(check2)==temp);
	}
	
}
