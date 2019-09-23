#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <vector>
#include <iostream>

#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function

//Abby Nay testing my Sum function with these test cases
TEST_CASE("Adding all the elements in a vector", "[vector]"){
    SECTION("Make sure with different vectors the sum still works"){
        std::vector<int> nums_1 = {5,7,9};
        std::vector<int> nums_2 = {5,5,5};
        std::vector<int> nums_3 = {2,1,1};
        REQUIRE(Sum(nums_1) == 21);
        REQUIRE(Sum(nums_2) == 15);
        REQUIRE(Sum(nums_3) == 4);
    }
    
    SECTION("See if it works when we add a number to the vector"){
        std::vector<int> nums_3 = {2,1,1};
        nums_3.push_back(6);
        REQUIRE(Sum(nums_3) == 10);
    }
    
    SECTION("See if it works when we add a negative number to the vector"){
        std::vector<int> nums_1 = {5,7,9};
        nums_1.push_back(-1);
        REQUIRE(Sum(nums_1) == 20);
    }
}