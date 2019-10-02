#include "UtilityFunctions.h"
#include <iostream>
#include <vector>
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

// Implement your functions here. Don't forget function comments!


// checks the sign of num. returns -1 if negative, 1 if positive.
double Sign(double num){
    if (num > 0){
        return 1;
    } else if (num == 0){
        return 0;
    } else {
        return -1;
    }
}