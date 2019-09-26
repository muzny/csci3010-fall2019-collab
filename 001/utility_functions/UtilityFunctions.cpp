#include <iostream>
#include "UtilityFunctions.h"

// Implement your functions here. Don't forget function comments!

// returns a vector with true for odd numbers and false for even numbers
std::vector<bool> OddMask(std::vector<int> numbers){
	std::vector<bool> result; 			// create a vector od a bool kind to store the result in it
	for(int i = 0; i < numbers.size(); i++){   // loop throught the vector of numbers
		if ( numbers[i] % 2 == 0){        // check if the number is even if false push true to result vector
			result.push_back(false);   
		}
		else{				// else, the number is odd so push true to the vector result
			result.push_back(true);
		}
	}
	return result; 				// return the result vector 	 
}
