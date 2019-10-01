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

// subtracts n to each element of the vector
vector<int> SubtractN(vector<int> vec, int n)
{
    //Loops through the vector
    for (int x = 0; x < vec.size(); x++)
    {
        //subtracts n from each index in the vector
        vec[x] = vec[x] - n;
    }

    //returns the altered vector
    return vec;
}
