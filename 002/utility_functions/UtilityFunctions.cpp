#include "UtilityFunctions.h"
#include <iostream>
#include <vector>
using namespace std;

// Implement your functions here. Don't forget function comments!

vector<bool> GreaterMask(vector<int> nums, int greater_than){
    vector<bool> true_or_false;
    for(int i=0; i < nums.size(); i++){
        if(nums[i] > greater_than){
            true_or_false.push_back(true);
        }
        else{
            true_or_false.push_back(false);
        }
    }
    return true_or_false;
}