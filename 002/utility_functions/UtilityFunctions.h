#ifndef UTILITYFUNCTIONS_H
#define UTILITYFUNCTIONS_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;


// returns a vector with true for odd numbers and false for even numbers
std::vector<bool> OddMask(std::vector<int> );
// put the declarations of your utility functions here.
// they should not be in a class.

string RemoveFirstSubstring(string s1, string s2);

vector<bool> GreaterMask(vector<int> nums, int greater_than);

#endif