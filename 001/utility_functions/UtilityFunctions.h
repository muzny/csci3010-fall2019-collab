#ifndef _UTILITYFUNCTIONS_H_
#define _NAME_H_
#include <iostream>
#include "catch.hpp"
#include <vector>
#include <string>

// put the declarations of your utility functions here.
// they should not be in a class.
std::vector<int> Multiples(int n, int m);

// put the declarations of your utility functions here.
// they should not be in a class.
std::vector<double> SubtractN(std::vector<double> vec, double n);

// put the declarations of your utility functions here.
// they should not be in a class.
std::vector<int> SubtractN(std::vector<int> v, int n);

/**
    Returns the factorial of @param n


*/
int Factorial(int n);
std::vector<int> SubtractN(std::vector<int> v, int n);

std::vector<bool> EvenMask(std::vector<int>V);
std::vector<int> VectorTimesN(std::vector<int> v, int n);
std::vector<int> SubtractN(std::vector<int> v, int n);

int RemoveTwos(int original);

std::vector<std::string> Split(std::string whole, std::string separator);


// returns -1 if the number is negative and 1 if positive or zero
int Sign(int num);


//Sam Koulermos
// takes two vectors of integers, a and b. The function then removes elements from a if they are also in b.
// If the integer is in b, but not in a, nothing happens.
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b);



// Multiplies all numbers in a vector together and returns the resulting value
int Product(std::vector<int> nums);


//Daniel Camarena 
//Takes a postive int, returns empty vec if negative or 0, else returns a vector from 1 to n of it's squares
std::vector<int> SquaresUntil(int n);


std::vector<double> VectorPlusN(std::vector<double> v, double n);
int Sum(std::vector<int> input);

// returns a vector with true for odd numbers and false for even numbers
std::vector<bool> OddMask(std::vector<int> numbers);

#endif

