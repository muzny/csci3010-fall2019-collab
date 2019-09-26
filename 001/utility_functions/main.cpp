#include <vector>
#include <iostream>
#include "UtilityFunctions.h"

int main() {
    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!

	std::vector<int> num;
	num.push_back(1);
	num.push_back(2);
	num.push_back(3);
	num.push_back(4);
	
	std::vector<bool> bool_result;
	bool_result = OddMask(num);

	std::cout << std::boolalpha;

	for(bool x : bool_result){
		std::cout << x << ", " ;
	}

	std::cout << std::endl;
	return 0;     
}
