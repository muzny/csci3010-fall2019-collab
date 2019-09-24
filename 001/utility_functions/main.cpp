#include "UtilityFunctions.h"
#include <iostream>
#include <vector>


int main() {

    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!
	std::vector<double> plus_n_example = {4, 5, 6};
	std::vector<double> new_vector = VectorPlusN(plus_n_example, 4);
	std::cout << "Vector Before Addition: " << plus_n_example[0] << " " << plus_n_example[1] << " " << plus_n_example[2] << std::endl;
	std::cout << "Vector After Addition: " << new_vector[0] << " " << new_vector[1] << " " << new_vector[2] << std::endl;
 }
