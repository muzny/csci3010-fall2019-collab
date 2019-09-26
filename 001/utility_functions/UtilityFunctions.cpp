#include "UtilityFunctions.h"

// Implement your functions here. Don't forget function comments!

/**
  SubtractN - Subtracts the value of the parameter int n from every element in vector v
*/
std::vector<int> SubtractN(std::vector<int> v, int n){
    for(unsigned int i = 0; i < v.size(); i++){
      v[i] = v[i] - n;
    }
    return v;
}
