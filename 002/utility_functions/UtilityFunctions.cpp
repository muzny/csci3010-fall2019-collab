#include "UtilityFunctions.h"
#include <iostream>
#include <vector>

// Implement your functions here. Don't forget function comments!

std::vector<bool> OddMask(std::vector<int>numbers)
{

std::vector<bool>odd_or_even;

    for(auto&& x: numbers)
    {
        if((x%2)==1)
        {
            odd_or_even.push_back(true);
        }
        else
        {
            odd_or_even.push_back(false);
        }
        
    }


return odd_or_even;
}