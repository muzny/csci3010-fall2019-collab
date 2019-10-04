#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"

TEST_CASE("Vector is working.")
{
    vector<int> test_vector = {1, 2, 3, 4};
    int greater_than = 3;
    vector<bool> correct_vector = {false, false, false, true};

    vector<int> test_vector2 = {10, 20, 30};
    int greater_than2 = 15;
    vector<bool> correct_vector2 = {false, true, true};

    REQUIRE(GreaterMask(test_vector, greater_than) == correct_vector);
    REQUIRE(GreaterMask(test_vector2, greater_than2) == correct_vector2);
}
// Your tests go here
// Each TEST_CASE should test one function
// Each SECTION should test one aspect of that function

TEST_CASE("Product is working")
{
    vector<double> t_1 = {1.0, 2.0, 3.0, 5.0};
    double a_1 = 30.0;
    vector<double> t_2 = {-1.0, -2.0, -4.0};
    double a_2 = -8.0;
    vector<double> t_3 = {-2.0, -4.0};
    double a_3 = 8.0;
    vector<double> t_4 = {1.0, 2.0, 3.0, 0.0};
    double a_4 = 0.0;
    vector<double> t_5 = {5.0};
    double a_5 = 5.0;

    SECTION("All Positive Numbers") // testing a regular vector
    {
        REQUIRE(Product(t_1) == a_1);
    }
    SECTION("Odd Negatives") // testing to make sure that when multiplying an odd amount of negative numbers it returns a negative product
                             
    {
        REQUIRE(Product(t_2) == a_2);
    }
    SECTION("Even Negatives")// testing to make sure that when multiplying an even amount of negative numbers it returns a postive product
    {
        REQUIRE(Product(t_3) == a_3);
    }
    SECTION("Anything times zero")// testing to make sure that when mult by 0 result is 0
    {
        REQUIRE(Product(t_4) == a_4);
    }
    SECTION("One number")// checking to see if the vector works on one element.
    {
        REQUIRE(Product(t_5) == a_5);
    }
}
