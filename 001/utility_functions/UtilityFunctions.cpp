#include "UtilityFunctions.h"

// adds n to each element of the vector
// Kamiar Coffey
std::vector<double> AddN(std::vector<double> input_vector, double n) {
  std::vector<double> return_vector;
  for (double number : input_vector) {
    return_vector.push_back(number + n);
  }
  return return_vector;
}
