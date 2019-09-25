#include "UtilityFunctions.h"

// Implement your functions here. Don't forget function comments!

/**
    Multiplies each entry within a given vector by a given integer and saves
    the new values to a new vector to return

    @param a vector of integers and the integer to multiply each entry in the vector by
    @return a vector with the resulting values
*/
std::vector<int> VectorTimesN(std::vector<int> v, int n) {
  std::vector<int> return_vec;
  for(int i = 0; i < v.size(); i++) {
    return_vec.push_back(v[i] * n);
  }
  return return_vec;
}
