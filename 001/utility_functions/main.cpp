#include "UtilityFunctions.h"
#include <iostream>
#include <vector>

int main() {
    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!
    std::vector<int> a = {1, 2, 3, 4, 5, 6};
    std::cout << "Demonstration of VectorTimesN Function:\n Vector before multiplication:\n [";
    for(int i = 0; i < a.size(); i++) {
      std::cout << a[i];
      if(i != a.size() - 1) {
        std::cout << ", ";
      }
    }
    std::cout << "]\n";
    std::vector<int> b = VectorTimesN(a, 3);
    std::cout << "New vector after multiplication by 3:\n [";
    for(int i = 0; i < b.size(); i++) {
      std::cout << b[i];
      if(i != b.size() - 1) {
        std::cout << ", ";
      }
    }
    std::cout << "]\n";
    a.clear();
    b.clear();
}
