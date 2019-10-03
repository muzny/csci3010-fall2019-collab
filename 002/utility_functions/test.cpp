#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
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
SCENARIO("vectors are checked for odd numbers", "[vector]")
{
    GIVEN("A vector with some items")
    {
        std::vector<int> test_vect1{10, 3, 4, 5, 7, 20, 30, 31};
        std::vector<int> test_vect2{10};
        std::vector<bool> test_vect1_output{false, true, false, true, true, false, false, true};
        std::vector<bool> test_vect2_output{false};

        WHEN("check that odd numbers return true and even numbers return false")
        {
            THEN("A vector of bools are returned that indicated a odd number when true")
            {
                REQUIRE(OddMask(test_vect1) == test_vect1_output);
            }
        }
        WHEN("check a vector with a single element")
        {

            THEN("A vector of only one bool returns if the element is odd")
            {
                REQUIRE(OddMask(test_vect2) == test_vect2_output);
            }
        }
    }
}
// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function
