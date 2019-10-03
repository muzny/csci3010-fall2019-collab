//Alden Maben
#include "UtilityFunctions.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

//  This function will take any integer and will return 1 if the value is positive, -1 if the value is negative, and 0 if the value is 0
int Sign (int num){
    if (num > 0)
    {
        return 1;
    }
    else if (num < 0)
    {
        return -1;
    }
    else{
        return 0;
    }
}

// takes two strings and returns a new string that is the result of removing the first occurrence of s2 from s1.
string RemoveFirstSubstring(string s1, string s2){
    int first_index = s1.find(s2); //First index of the instace of the sub string
    if(first_index < 0){ // if there isn't an instance do nothing
        return s1;
    }
    return s1.substr(0,first_index) + s1.substr(first_index+s2.size(),-1); // return the substring before and after the instance
}
