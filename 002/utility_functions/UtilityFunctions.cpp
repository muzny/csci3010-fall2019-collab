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

using namespace std;

// Function that returns a vector with number n subtracted from each value in the vector
vector<double> SubtractN(vector<double> input, double n)
{
  vector<double> retVect; //this is the vector ultimately being returned from the function
  for (unsigned int i=0; i<input.size(); i++)
  {
    double val = input[i]-n;
    retVect.push_back(val);
  }
  return retVect;
}
