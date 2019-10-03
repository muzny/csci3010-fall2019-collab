#include "UtilityFunctions.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

// Implement your functions here. Don't forget function comments!

vector<bool> GreaterMask(vector<int> nums, int greater_than){
    // creating a new vector to return true or false
    vector<bool> true_or_false;
    // iterating through the vector of ints
    for(int i=0; i < nums.size(); i++){
        // if the number in the vector is greater than the given int, add true to the bool vector
        if(nums[i] > greater_than){
            true_or_false.push_back(true);
        }
        // if it is less than or equal to add false
        else{
            true_or_false.push_back(false);
        }
    }
    // returning bool vector
    return true_or_false;
}

// Function that returns a vector with number n subtracted from each value in the vector
vector<double> SubtractN(vector<double> input, double n)
{
  vector<double> retVect; //this is the vector ultimately being returned from the function
  for (unsigned int i=0; i<input.size(); i++)
  {
    double val = input[i]-n;
    retVect.push_back(val);
  }
  return retVect;
}

// takes two strings and returns a new string that is the result of removing the first occurrence of s2 from s1.
string RemoveFirstSubstring(string s1, string s2){
    int first_index = s1.find(s2); //First index of the instace of the sub string
    if(first_index < 0){ // if there isn't an instance do nothing
        return s1;
    }
    return s1.substr(0,first_index) + s1.substr(first_index+s2.size(),-1); // return the substring before and after the instance
}
