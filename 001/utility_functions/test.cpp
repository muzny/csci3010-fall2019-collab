#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"
#include <vector>
#include <iostream>
// Your tests go here
// Each TEST_CASE should test one function

// Each SECTION should test one aspect of that function

TEST_CASE("Split string on separator", "[split]"){
	std::string ex = "Example string to split";
	std::string splitter = "str";
	SECTION("s1"){
		std::vector <std::string> return_strings = Split(ex, splitter);
		REQUIRE(return_strings[0]=="Example ");
		REQUIRE(return_strings[1]=="string to split");

	}
	std::string splitter2 = "by";
	SECTION("s2"){
		std::vector<std::string> return_strings2 = Split(ex, splitter2);
		REQUIRE(return_strings2[0]=="Error, could not find separator");
	}
}
