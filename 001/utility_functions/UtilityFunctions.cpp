#include "UtilityFunctions.h"
#include <vector>

#include <iostream>
#include <vector>
#include <string>

/**
    Returns the product the elements in a vector.

    @param nums The vector for which to calculate a product.
    @return The product.
*/
int Product(std::vector<int> nums) {
	int product = 1;
	if (nums.size() == 0) {
		return 0;
	}
	for (int i = 0; i < nums.size(); i++) {
		product *= nums[i];
	}

	return product;
};


// samKoulermos
// takes two vectors of integers, a and b. The function then removes elements from a if they are also in b.
// If the integer is in b, but not in a, nothing happens.
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b){
	for (auto j = b.begin(); j != b.end(); ++j){
		for (auto i = a.begin(); i != a.end(); ++i) { 
			if (*i == *j) { 
				a.erase(i); 
				i--; 
			} 
		} 
	}
	return a;
};


// Splits a single string on separator into a vector of strings
std::vector<std::string> Split(std::string whole, std::string separator){
	std::vector<std::string> return_string;
	int delim = 100;
	for (int i = 0; i<whole.size(); i++){
		if (whole[i]==separator[0]){
			bool found = true;
			for (int j = 0; j<separator.length(); j++){
				if (whole[i+j]!=separator[j]){
					found = false;
				}
			}
			if (found){
				delim = i;
				break;
			}
			
		}
	}
	//std::cout<<delim<<std::endl;
	if (delim==100){
		std::string error= "Error, could not find separator";
		return_string.push_back(error);
		return return_string;
	}
	else{
		return_string.push_back(whole.substr(0, delim));
		return_string.push_back(whole.substr(delim, whole.size()));
		return return_string;
	}
};
