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
// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function

//Tests the vector
TEST_CASE("Test Vector", "[classic]")
{
    //Create and add elements to testing vector
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    //vec = {1, 2, 3, 4, 5, 6}

    //Create and add for v - 1
    vector<int> vec_2;
    vec_2.push_back(0);
    vec_2.push_back(1);
    vec_2.push_back(2);
    vec_2.push_back(3);
    vec_2.push_back(4);
    vec_2.push_back(5);
    //vec_2 = {0, 1, 2, 3, 4, 5}

    //Create and add for v - 5
    vector<int> vec_3;
    vec_3.push_back(-4);
    vec_3.push_back(-3);
    vec_3.push_back(-2);
    vec_3.push_back(-1);
    vec_3.push_back(0);
    vec_3.push_back(1);
    //vec_3 = {-4, -3, -2, -1, 0, 1}
    
    //Tests subtract 1 from the vec
    SECTION("Test subtracting 1 from the vector") 
    {
        REQUIRE(SubtractN(vec, 1) == vec_2); 
    }

    //Tests subtract 5 from the vec
    SECTION("Test subtracting 5 from the vector") 
    {
        REQUIRE(SubtractN(vec, 5) == vec_3); 
    }
}
