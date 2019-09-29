#include "UtilityFunctions.h"
#include "catch.hpp"
#include <string>
#include <iostream>

int main(){
    std::string str = "Hi this is Colin. Colin says Hi";
    std::cout << RemoveFirstSubstring(str, "Colin") << std::endl;
    return 0;
}