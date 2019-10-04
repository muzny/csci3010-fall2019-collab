#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"
vector<int> test_vector = {1, 2, 3, 4};
int greater_than = 3;
vector<bool> correct_vector = {false, false, false, true};

vector<int> test_vector2 = {10, 20, 30};
int greater_than2 = 15;
vector <bool> correct_vector2 = {false, true, true};

TEST_CASE ( "Vector is working.") {
    
    REQUIRE( GreaterMask(test_vector, greater_than) ==  correct_vector);
    REQUIRE( GreaterMask(test_vector2, greater_than2) == correct_vector2 );
}
// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function

TEST_CASE("addN(Double)is working."){
    vector<double> test_vector3 = {1.0, 2.0, 3.0, 4.0};
    vector<double> correct_vector3={2.0, 3.0, 4.0, 5.0};
    REQUIRE(AddN(test_vector3,1.0)==correct_vector3);
}
