

#ifndef _UTILITYFUNCTIONS_H_
#define _UTILITYFUNCTIONS_H_
#include <iostream>
#include <vector>
using namespace std;

// put the declarations of your utility functions here.
// they should not be in a class.

//Returns the factorial of n. 
int Factorial(int n);





std::vector<int> VectorTimesN(std::vector<int> v, int n);

vector<bool> GreaterMask(vector<int> nums, int greater_than);
double Product(std::vector<double> nums);

string Join(std::vector<string> pieces, string glue);
int Sign (int num);


//Returns the factorial of n. 
int Factorial(int n);
int Sign (int num);
int fibonacci(int n);

#endif  // _UTILITYFUNCTIONS_H_
