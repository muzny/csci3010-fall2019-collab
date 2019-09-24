#include "UtilityFunctions.h"
#include <iostream>
#include <vector>
#include "catch.hpp"

int main() {
    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!
	
	std::vector<double> vec = {1,2,3,4,5};
	std::vector<double> sub_vec = SubtractN(vec,1);
	std::cout << "Vector: " << std::endl;
	for (int i = 0; i < vec.size(); i++){
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Vector after subtracting 1: " << std::endl;
	for (int i = 0; i < sub_vec.size(); i++){
		std::cout << sub_vec[i] << " ";
	}
	std::cout << std::endl;
}
