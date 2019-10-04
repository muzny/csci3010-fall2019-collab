#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"


using namespace std;


TEST_CASE("testing the SubtractN function", "[classic]")
{
  vector<double> posVect={1,2,3,4,5};
  vector<double> negVect={-1,-2,-3,-4,-5};
    SECTION("subtract from positive"){
      double n=1;
      vector<double>WhatIWant={0,1,2,3,4};
      REQUIRE(SubtractN(posVect,n)==WhatIWant);
    }
    SECTION("subtract from negative"){
      double n=1;
      vector<double>WhatIWant={-2,-3,-4,-5,-6};
      REQUIRE(SubtractN(negVect,n)==WhatIWant);
    }
}

  
TEST_CASE( "Removes the first instance of a substring from a string", "RemoveFirstSubstring" ) {
    
    string s1 = "Like a good neighbor, State Farm is there.";
    string s2 = "good neighbor";
    string s3 = "WOW";
    string s4 = "Like";
    string s5 = ".";
    
    SECTION( "Normal Case" ) {
        string res = "Like a , State Farm is there.";
        REQUIRE(RemoveFirstSubstring(s1,s2) == res);
    }
    SECTION( "No instance" ) {
        string res = "Like a good neighbor, State Farm is there.";
        REQUIRE(RemoveFirstSubstring(s1,s3) == res);
    }
    SECTION( "Beginning" ) {
        string res = " a good neighbor, State Farm is there.";
        REQUIRE(RemoveFirstSubstring(s1,s4) == res);
    }
}

//Test for sign function
TEST_CASE("return 1 if positive and -1 if negative","[Sign]") {
    REQUIRE(Sign(0)==0);
    SECTION("Test with positive values") {
        REQUIRE(Sign(2)==1);
        REQUIRE(Sign(5)==1);
        REQUIRE(Sign(1)==1);
    }
    SECTION("Test with negative values ") {
        REQUIRE(Sign(-3)==-1);
        REQUIRE(Sign(-20)==-1);
        REQUIRE(Sign(-1)==-1);
    }
}
