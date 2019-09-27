#define CATCH_CONFIG_MAIN
#include "UtilityFunctions.h"

#include "catch.hpp"
#include <iostream>
#include <vector>

using namespace std;

string Join(vector<string> pieces, string glue) {
  string s;
  for (int i = 0; i < pieces.size(); i++){
    if(i < pieces.size() - 1)
      s = s + pieces[i] + glue;
    else
      s = s + pieces[i];
  };
  return s;
}

TEST_CASE( "combines vector to string with glue in between", "[vector]" ) {
  std::vector<string> a{"wow"};
  string glue = "-";
  SECTION("vector of single entity", "[vector]"){
    REQUIRE( Join(a, glue) == "wow");
  };
  vector<string> b{"wow", "this", "is", "COOOOOL"};
  SECTION("vector of multiple entities", "[vector]"){
    REQUIRE( Join(b, glue) == "wow-this-is-COOOOOL");
    glue =  " ";
    REQUIRE( Join(b, glue) == "wow this is COOOOOL");
  }
}



