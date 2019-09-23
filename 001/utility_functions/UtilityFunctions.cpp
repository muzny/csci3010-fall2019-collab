#include "UtilityFunctions.h"
#include <vector> 
#include <iostream>

// Implement your functions here. Don't forget function comments!

int Sum(std::vector<int> nums){
     
    int sum = 0;
    
    for(int i =0; i<nums.size(); i++)
    {
        sum+=nums[i];
    }
    return sum;

    
}
