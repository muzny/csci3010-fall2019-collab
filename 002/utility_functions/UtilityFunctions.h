
#ifndef _UTILITYFUNCTIONS_H_
#define _UTILITYFUNCTIONS_H_

#include <iostream>
#include <vector>
using namespace std;

std::vector<int> VectorTimesN(std::vector<int> v, int n);




vector<bool> GreaterMask(vector<int> nums, int greater_than);
double Product(std::vector<double> nums);

string Join(std::vector<string> pieces, string glue);
#endif  // _UTILITYFUNCTIONS_H_
