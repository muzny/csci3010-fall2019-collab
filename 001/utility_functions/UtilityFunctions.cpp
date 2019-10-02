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


// Implement your functions here. Don't forget function comments!

<<<<<<< HEAD
int Factorial(int n)
{
	int returnThis = 1;
	for (int i = 1; i <= n; i++)
	{
		returnThis*=i;
	}
	return returnThis;
}
=======
// returns -1 if the number is negative and 1 if positive
// 0 returns positive because it takes up positive mem space- the abs of min int in c++ is one more than the max
int Sign(int num){
	if(num>=0){ //if num is 0 or pos
		return 1;
	}else{
		return -1;
	}
}

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
>>>>>>> 66178334820a9bd48fcd8950bdf7742ab7892aca
