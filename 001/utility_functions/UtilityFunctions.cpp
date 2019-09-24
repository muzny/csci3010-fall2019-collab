#include <vector>
#include "UtilityFunctions.h"

// Implement your functions here. Don't forget function comments!

std::vector<int> Multiples(int n, int m){
    std::vector<int> answer;
    for(int i = 0; i < m; i++){
	answer.push_back(n*(i+1));
    }
    return answer;
}
