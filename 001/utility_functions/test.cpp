#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "UtilityFunctions.h"
#include <iostream>

vector<int> add5 = {0, 5, -5};//Starting vector to add 5 to
vector<int> addmin5 = {0, 5, -5};//Starting vector to add -5 to
vector<int> add99 = {0, 5, -5};//Starting vector to add 99 to

vector<int> ans5 = {5, 10, 0};//Intended result for add5
vector<int> ansmin5 = {-5, 0, -10};//Intended result for addmin5
vector<int> ans99 = {99, 104, 94};//Intended result for add99

TEST_CASE("Adding a number to all elements in an <int> vector", "[vector]"){
    SECTION("Test with 5 on {0, 5, -5}"){
        REQUIRE(VectorPlusN(add5, 5) == ans5);
    }
 
    SECTION("Test with -5 on {0, 5, -5}"){
        REQUIRE(VectorPlusN(addmin5, -5) == ansmin5);
    }
    
    SECTION("Test with 99 on {0, 5, -5}"){
        REQUIRE(VectorPlusN(add99, 99) == ans99);
    }
}