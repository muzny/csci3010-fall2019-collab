#include "UtilityFunctions.h"
#include <iostream>

// Compile instructions
// run $ make all
// run $ ./test
// unit tests are NOT in main -- they are in test.cpp
// unit tests will be run automatically when compling via Makefile

int main() {
  std::vector<double> original = {0,1,2};
  for (double d : original) {
    std::cout << d << " ";
  }
  std::cout << std::endl << "AddN vector \n";

  std::vector<double> updated = AddN(original, 2);
  for (double d : updated) {
    std::cout << d << " ";
  }
  std::cout << std::endl;
}
