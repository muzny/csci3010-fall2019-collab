#include "UtilityFunctions.h"


// Implement your functions here. Don't forget function comments!

std::vector<int> VectorPlusN(std::vector<int> v, int n){
	std::vector<int> newV;
	for(int i = 0; i < v.size(); i++){
		newV .push_back(v[i] + n);
	}
	return newV;
}
