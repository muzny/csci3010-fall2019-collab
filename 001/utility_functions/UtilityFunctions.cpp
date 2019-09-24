#include "UtilityFunctions.h"
#include <iostream>
#include <vector>
#include "catch.hpp"
// Implement your functions here. Don't forget function comments!

// This function will take in a vector of doubles and a number n. It will then subtract all values in the vector by n.
std::vector<double> SubtractN(std::vector<double> vec, double n){
	for(int i = 0; i < vec.size(); i++){
		vec[i] = vec[i] - n;
	}
	return vec;
}
