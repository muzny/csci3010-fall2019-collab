#include "UtilityFunctions.h"
#include <vector>

// Implement your functions here. Don't forget function comments!
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
