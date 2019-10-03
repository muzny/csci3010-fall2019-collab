#include "UtilityFunctions.h"
#include <iostream>
#include <vector>

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