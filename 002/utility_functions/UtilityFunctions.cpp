#include "UtilityFunctions.h"
#include <vector>
#include <string>

// takes two strings and returns a new string that is the result of removing the first occurrence of s2 from s1.
std::string RemoveFirstSubstring(std::string s1, std::string s2){
    int first_index = s1.find(s2); //First index of the instace of the sub string
    if(first_index < 0){ // if there isn't an instance do nothing
        return s1;
    }
    return s1.substr(0,first_index) + s1.substr(first_index+s2.size(),-1); // return the substring before and after the instance
}