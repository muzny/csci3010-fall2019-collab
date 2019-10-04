
#ifndef _UTILITY_FUNCTIONS_H_
#define _UTILITY_FUNCTIONS_H_
// put the declarations of your utility functions here.
// they should not be in a class.
#include <iostream> //input and output stream
#include <vector> //ability to use vectors
using namespace std;

//Takes a vector of integers and returns the sum of the integers within the vectors
int Sum(std::vector<int> nums);

std::vector<bool> GreaterMask(std::vector<int> nums, int greater_than);
double Product(std::vector<double> nums);

std::string Join(std::vector<std::string> pieces, std::string glue);

//Returns the factorial of n. 
int Factorial(int n);





std::vector<int> VectorTimesN(std::vector<int> v, int n);

vector<bool> GreaterMask(vector<int> nums, int greater_than);

string Join(std::vector<string> pieces, string glue);
int Sign (int num);

// checks the sign of num. returns -1 if negative, 1 if positive.
double Sign(double num);

vector<bool> GreaterMask(vector<int> nums, int greater_than);

// adds n to each element of the vector
vector<double> AddN(std::vector<double>, double n);


//Returns the factorial of n. 
int Factorial(int n);
int Sign (int num);
int fibonacci(int n);

#endif // UTILITY_FUNCTIONS
