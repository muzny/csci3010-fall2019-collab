#include "UtilityFunctions.h"
#include "catch.hpp"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> test_vector = {1, 2, 3, 4};
    vector<bool> output_vector;
    output_vector = GreaterMask(test_vector, 3);
    for(int i=0; i < output_vector.size(); i++){
        cout << output_vector[i] << endl;
    }
    
    string str = "Hi this is Colin. Colin says Hi";
    cout << RemoveFirstSubstring(str, "Colin") << endl;
}

