#include "UtilityFunctions.h"
#include <vector>

// Implement your functions here. Don't forget function comments!
double Sum(std::vector<double> nums) {
    double total = 0.0;

    //check to see if the vector isn't empty, if it is return 0.0
    if(nums.size() == 0) {
        return 0.0;
    }

    //iterate through the vector and add each element to a summation variable
    for(int i=0; i<nums.size(); i++) {
        total += nums[i];
    }

    return total;
}