#include "UtilityFunctions.h"

/**
Oceane Andreis & Mikayla Pickett

This is our utility function file. I have a function that take in a vector of ints and the function goes through
all the elements in the vector and adds them all up and it returns the sum of the vector.
*/

int Sum(vector<int> nums){
     
    int sum = 0;
    
    for(unsigned int i = 0; i < nums.size(); i++)
    {
        sum+=nums[i];
    }
    return sum;

    
}
