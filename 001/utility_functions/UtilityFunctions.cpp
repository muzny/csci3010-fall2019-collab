#include "UtilityFunctions.h"

// Implement your functions here. Don't forget function comments!
// takes two vectors of integers, a and b. The function then removes elements from a if they are also in b.
// If the integer is in b, but not in a, nothing happens.
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b){
	for (int i; i < b.size(); i++){
		for (int j; j < a.size(); j++){
			if (b[i] == a[j])
				a.erase(vec.begin() + j);
		}		
	}
	return a;
};
