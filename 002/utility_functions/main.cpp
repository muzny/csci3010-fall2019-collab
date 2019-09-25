#include "UtilityFunctions.h"
#include <iostream>
#include <vector>


//https://www.techiedelight.com/print-vector-cpp/
void print(std::vector<bool> const &input)
{
    std::cout <<"A 1 means odd number, a 0 means an even number."<< std::endl;
	for (int i = 0; i < input.size(); i++) {
		std::cout << input.at(i) << ' ';
	}
    std::cout << std::endl;
}

int main() {
    std::vector<int>vect{ 10, 3, 4, 5, 7, 20, 30 };
    print(OddMask(vect));
    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!
}
