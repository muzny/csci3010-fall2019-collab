#include "UtilityFunctions.h"
#include "UtilityFunctions.cpp"
#include <iostream>
using namespace std;

int main() {
    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!
	cout<< "Reading in 6, expecting positive (1): "<< Sign(6) << endl;
	cout<< "Reading in 56, expecting positive (1); "<< Sign(56) << endl;
	cout<< "Reading in -2, expecting negative (-1): "<< Sign(-2) << endl;
	cout<< "Reading in 0, expecting positive (1): "<< Sign(0) << endl;
	return 0;
}
