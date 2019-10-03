#include "UtilityFunctions.h"
#include "catch.hpp"
#include <string>
#include <iostream>
#include <vector>

// here's a comment


using namespace std;
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
    vector<int> test_vector = {1, 2, 3, 4};
    vector<bool> output_vector;
	
    output_vector = GreaterMask(test_vector, 3);
    for(int i=0; i < output_vector.size(); i++){
        cout << output_vector[i] << endl;
    }
    
    string str = "Hi this is Colin. Colin says Hi";
    cout << RemoveFirstSubstring(str, "Colin") << endl;
}

