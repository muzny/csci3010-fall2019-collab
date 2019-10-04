
#ifndef _UTILITY_FUNCTIONS_H_
#define _UTILITY_FUNCTIONS_H_


// put the declarations of your utility functions here.
// they should not be in a class.

#include <vector>

double Sum(std::vector<double> nums);

//Returns the factorial of n. 
int Factorial(int n);

#ifndef _UTILITYFUNCTIONS_H_
#define _UTILITYFUNCTIONS_H_

#include <vector>
#include <iostream>


// put the declarations of your utility functions here.
// they should not be in a class.

//Returns the factorial of n. 
int Factorial(int n);





std::vector<int> VectorTimesN(std::vector<int> v, int n);

vector<bool> GreaterMask(vector<int> nums, int greater_than);

string Join(std::vector<string> pieces, string glue);
int Sign (int num);


// checks the sign of num. returns -1 if negative, 1 if positive.
double Sign(double num);


// multiplies all the vector stuff
int Product(vector<int> nums);


int fibonacci(int n);



#endif // UTILITY_FUNCTIONS