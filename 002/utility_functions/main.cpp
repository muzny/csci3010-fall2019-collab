#include "UtilityFunctions.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> test_vector = {1, 2, 3, 4};
    vector<bool> output_vector;
    output_vector = GreaterMask(test_vector, 3);
    for(int i=0; i < output_vector.size(); i++)
    {
        cout << output_vector[i] << endl;
    }
    vector<double> someVector={2,4,7,-3,0};
    vector<double> result = SubtractN(someVector,2);
    for (unsigned int i=0; i<result.size(); i++)
    {
      cout<<result[i]<<endl;
    }
}
