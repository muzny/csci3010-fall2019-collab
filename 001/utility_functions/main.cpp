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
	for (int i = 1; i < 5; i++ ){
		num.push_back(i);
	}
	
	
	std::vector<bool> bool_result;
	bool_result = OddMask(num);

	// used boolalpha to print the bollen value as true or false and not as 0 or 1
	std::cout << std::boolalpha;

	for(bool x : bool_result){
		std::cout << x << ", " ;
	}

	std::cout << std::endl;
	return 0;     
}
