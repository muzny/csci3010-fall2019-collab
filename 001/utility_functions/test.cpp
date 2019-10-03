#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <vector>
#include "UtilityFunctions.h"
#include <string>
#include <vector>
#include <iostream>
// Your tests go here
// Each TEST_CASE should test one function

// Each SECTION should test one aspect of that function
TEST_CASE( "For subTractN", "[vector]" ) {
  //Jake Henson 
    std::vector<int> v = {5, 6, 7, 8, 9};
    std::vector<int> output = {0,1,2,3,4};
    int n = 5;

    SECTION( "Make sure subtractN works properly" ) {
        REQUIRE( SubtractN(v, n) == output );
    }
    SECTION( "Make sure subtractN works with negative numbers" ) {
        int n = -2;
        output = {7, 8, 9, 10, 11};
        REQUIRE( SubtractN(v, n) == output);
    }
    SECTION( "Make sure subtractN works with an empty vector" ) {
        int n = 3;
        std::vector<int> v2 = {};
        output = {};
        REQUIRE( SubtractN(v2, n) == output);
    }
} //updated this 	

TEST_CASE( "RemoveTwos returns the original int divided by 2 until it can no longer be divided", "[removetwos]" ) {

    SECTION( "an odd input is immediately returned" ) {
        REQUIRE( RemoveTwos(5) == 5 );
        REQUIRE( RemoveTwos(7) == 7 );
    }

    SECTION( "even inputs are properly divided" ) {
        REQUIRE( RemoveTwos(16) == 1 );
        REQUIRE( RemoveTwos(6) == 3 );
    }
}

TEST_CASE( "integer sign is reported back", "[int]" ) {

    SECTION( "testing positive values" ) {
       REQUIRE( Sign(15) == 1 ); //return positive or bust
		   REQUIRE( Sign(55) == 1 );
		   REQUIRE( Sign(635) == 1 );
    }
    SECTION( "testing negative values" ) {
      REQUIRE( Sign(-15) == -1 ); //return negative
		  REQUIRE( Sign(-55) == -1 );
		  REQUIRE( Sign(-635) == -1 );
    }
    SECTION( "testing zero" ) {
      REQUIRE( Sign(0) == 1 ); //return 1
     }
}

//Sam Koulermos
TEST_CASE( "vectors can have elements removed based on another vector", "[vector]" ) {

    std::vector<int> v1;
	for (int i = 0; i < 5; i++) //create an int vector {0,1,2,3,4}
        v1.push_back(i);
	
	std::vector<int> v2;
	v2.push_back(5);
	v2.push_back(4); //create a second int vector {5,4}
	
	std::vector<int> v3;
	v3.push_back(1);
	v3.push_back(3); //create a third int vector {1,3}
        
    REQUIRE( v1.size() == 5 );
	REQUIRE( v2.size() == 2 );//some basic tests 
	REQUIRE( v3.size() == 2 );
	for (int i = 0; i < 5; i++)
		REQUIRE( v1[i] == i);

    SECTION( "remove {4,5} from v1" ) {
        std::vector<int> v_test;
		v_test = MatchVectors(v1,v2); //should be {0,1,2,3}

        REQUIRE( v_test.size() == 4 );
        REQUIRE( v_test[0] == 0 );
		REQUIRE( v_test[1] == 1 );
		REQUIRE( v_test[2] == 2 );
		REQUIRE( v_test[3] == 3 );
    }
    SECTION( "remove {1,3} from v1" ) {
        std::vector<int> v_test;
		v_test = MatchVectors(v1,v3); //should be {0,2,4}

        REQUIRE( v_test.size() == 3 );
        REQUIRE( v_test[0] == 0 );
		REQUIRE( v_test[1] == 2 );
		REQUIRE( v_test[2] == 4 );

    }
}

TEST_CASE( "product of a vector can be correctly calculated", "[product]" ) {

    std::vector<int> v;
    int product;

    SECTION( "empty vector returns 0" ) {
    	product = Product(v);
        REQUIRE( product == 0 );
    }

    SECTION( "populated vector returns correct product" ) {
        v = {5,5,5};
        product = Product(v);
        REQUIRE( product == 125 );
    }
}

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

