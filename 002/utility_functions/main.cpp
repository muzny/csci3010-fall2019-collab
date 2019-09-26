#include "UtilityFunctions.h"
#include <vector>
#include <iostream>

using namespace std;

//Chris Kardaras -- A program to subtract n from a vector

int main() {
    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!
    vector<double> someVector={2,4,7,-3,0};
    vector<double> result = SubtractN(someVector,2);
    for (unsigned int i=0; i<result.size(); i++)
    {
      cout<<result[i]<<endl;
    }

    return 0;

}
