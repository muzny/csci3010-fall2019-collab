#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "UtilityFunctions.h"

TEST_CASE("Vector string join on delimeter", "[Join]") {
    REQUIRE(Join({"Cats", "Dogs", "Fish"}, ",") == "Cats,Dogs,Fish");
    REQUIRE(Join({"Cats", "Dogs", "Fish"}, "|") == "Cats|Dogs|Fish");
    REQUIRE(Join({"John", "Ralph", "Smith"}, " ") == "John Ralph Smith");
}