#include "UtilityFunctions.h"
#include <iostream>
#include <vector>
#include <string>

/**
    Returns the given vector formatted as an equation multiplying each element.

    @param v A vector of integers to be multiplied.
    @return A readable equation.
*/
std::string VectorAsEquation(std::vector<int> v) {
	std::string print_message;
	
	if (v.size() == 0) {
		return	print_message + "empty vector = ";
	}
	for (int i = 0; i < v.size(); i++) {
		if (i != 0) {
    		print_message += " * ";
    	}
    	print_message += std::to_string(v[i]);
    }
    return print_message + " = ";
}

int main() {
    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!

    std::vector<int> numbers;
    std::cout << VectorAsEquation(numbers) << Product(numbers) << std::endl;

    numbers = {1};
    std::cout << VectorAsEquation(numbers) << Product(numbers) << std::endl;

	numbers = {3, 4, 5};
	std::cout << VectorAsEquation(numbers) << Product(numbers) << std::endl;


	numbers = {};
	for (int i = 5; i < 11; i++) {
		numbers.push_back(i);
	}
	std::cout << VectorAsEquation(numbers) << Product(numbers) << std::endl;
}
