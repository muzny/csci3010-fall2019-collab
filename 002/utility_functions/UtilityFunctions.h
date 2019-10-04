#ifndef UTILITYFUNCTIONS_H
#define UTILITYFUNCTIONS_H

// put the declarations of your utility functions here.
// they should not be in a class.

#include <vector>
#include <iostream>
using namespace std;

// checks the sign of num. returns -1 if negative, 1 if positive.
double Sign(double num);
vector<bool> GreaterMask(vector<int> nums, int greater_than);
string Join(std::vector<string> pieces, string glue);

#endif