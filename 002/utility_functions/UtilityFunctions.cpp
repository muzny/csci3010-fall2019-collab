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

// adds n to each element of the vector
std::vector<std::string> AddN(std::vector<std::string> invector, std::string n){
	//Iterate throught the vector and add n to each entry
	for (int i = 0; i<invector.size(); i++){
		invector[i]= invector[i]+n;
	}
	//return the modified vector. 
	return invector;
}