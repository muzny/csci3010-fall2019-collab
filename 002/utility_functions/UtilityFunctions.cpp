#include "UtilityFunctions.h"

// Implement your functions here. Don't forget function comments!

/**
  Adds n to each element of the vector

  @param v - Vector of ints
  @param n - Int to be added
  @return Vector with n added to each element
*/

std::vector<int> AddN(std::vector<int> v, int n) {
  std::vector<int> newV;
  
  for (int i : v) {
    newV.push_back(i + n);
  }

  return newV;
}