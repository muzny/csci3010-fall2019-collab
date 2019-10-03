#include "UtilityFunctions.h"
#include <iostream>
#include <vector>
using namespace std;

// Implement your functions here. Don't forget function comments!

std::vector<bool> OddMask(std::vector<int>numbers)
{

//store the result of the check for even or odd, true means odd
std::vector<bool>odd_or_even;
//iterate through the provided vector of integers
    for(auto&& x: numbers)
    {
        //add true if a number is odd, false otherwise
        if((x%2)==1)
        {
            odd_or_even.push_back(true);
        }
        else
        {
            odd_or_even.push_back(false);
        }
        
    }

//return the vector after checking all numbers
return odd_or_even;
}
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

// Implement your functions here. Don't forget function comments!
