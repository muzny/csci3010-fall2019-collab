#ifndef _UTILITYFUNCTIONS_H_
#define _UTILITYFUNCTIONS_H_
using namespace std;
#include <vector>
#include <iostream>

class UtilityFunctions{
public:

  int Product(vector<int> nums);

};

#endif

#ifndef _UTILITY_FUNCTIONS_H_
#define _UTILITY_FUNCTIONS_H_



// put the declarations of your utility functions here.
// they should not be in a class.


vector<bool> GreaterMask(vector<int> nums, int greater_than);
// adds n to each element of the vector
vector<double> AddN(std::vector<double>, double n);


//Returns the factorial of n. 
int Factorial(int n);
int Sign (int num);
int fibonacci(int n);

#endif // UTILITY_FUNCTIONS
