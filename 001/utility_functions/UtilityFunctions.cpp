#include "UtilityFunctions.h"
#include <vector> //Added vector for easier array-type access.
#include<stdio.h> 

// Implement your functions here. Don't forget function comments!

/* Function: VectorPlusN
   Parameters: A vector (v) to add a double (n) to each element
   Returns: A new vector updated with each of the numbers
*/

std::vector<double> VectorPlusN(std::vector<double> v, double n) {
	std::vector<double> plus_n;
	for (size_t i = 0; i < v.size(); i ++) {
		double val = v[i] + n;
		plus_n.push_back(val);
	}
	return plus_n;
}