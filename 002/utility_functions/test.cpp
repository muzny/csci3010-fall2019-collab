#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function
<<<<<<< HEAD
//Test for sign function
TEST_CASE("return 1 if positive and -1 if negative","[Sign]"){
    REQUIRE(Sign(0)==0);
    SECTION("Test with positive values") {
        REQUIRE(Sign(2)==1);
        REQUIRE(Sign(-5)==1);
        REQUIRE(Sign(1)==1);
    }
    SECTION("Test with negative values ") {
        REQUIRE(Sign(-3)==-1);
        REQUIRE(Sign(-20)==-1);
        REQUIRE(Sign(-1)==-1);
    }
}

=======

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
>>>>>>> master
