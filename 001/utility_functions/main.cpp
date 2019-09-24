#include <iostream>
#include <vector>
#include "UtilityFunctions.h"


int main() {
    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!
    std::vector<int> answer = Multiples(5, 5);
    int size = answer.size();
    for(int i = 0; i < size; i++){
	std::cout << answer[i] << " ";
    }
}
