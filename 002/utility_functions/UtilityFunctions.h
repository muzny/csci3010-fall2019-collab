#ifndef UTILITYFUNCTIONS_H
#define UTILITYFUNCTIONS_H

// put the declarations of your utility functions here.
// they should not be in a class.
#include <iostream>
#include <vector>
using namespace std;

vector<bool> GreaterMask(vector<int> nums, int greater_than);

// subtracts n to each element of the vector
vector<double> SubtractN(vector<double> input, double n);

#endif
