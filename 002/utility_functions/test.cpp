#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"

TEST_CASE( "Removes the first instance of a substring from a string", "RemoveFirstSubstring" ) {
    
    std::string s1 = "Like a good neighbor, State Farm is there.";
    std::string s2 = "good neighbor";
    std::string s3 = "WOW";
    std::string s4 = "Like";
    std::string s5 = ".";
    
    SECTION( "Normal Case" ) {
        std::string res = "Like a , State Farm is there.";
        REQUIRE(RemoveFirstSubstring(s1,s2) == res);
    }
    SECTION( "No instance" ) {
        std::string res = "Like a good neighbor, State Farm is there.";
        REQUIRE(RemoveFirstSubstring(s1,s3) == res);
    }
    SECTION( "Beginning" ) {
        std::string res = " a good neighbor, State Farm is there.";
        REQUIRE(RemoveFirstSubstring(s1,s4) == res);
    }
    SECTION( "End" ) {
        std::string res = "Like a good neighbor, State Farm is there";
        REQUIRE(RemoveFirstSubstring(s1,s5) == res);
    }
}
