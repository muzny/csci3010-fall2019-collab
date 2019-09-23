#include "UtilityFunctions.h"

// Implement your functions here. Don't forget function comments!

int Sum(vector<int> nums){
     
    int sum = 0;
    
    for(unsigned int i =0; i<nums.size(); i++)
    {
        sum+=nums[i];
    }
    return sum;

    
}
