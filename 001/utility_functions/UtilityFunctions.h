
// put the declarations of your utility functions here.
// they should not be in a class.

#include <vector>
std::vector<int> Multiples(int n, int m);

#include <vector> 

std::vector<bool> EvenMask(std::vector<int>V);
std::vector<int> VectorTimesN(std::vector<int> v, int n);
std::vector<int> SubtractN(std::vector<int> v, int n);

#include <string>
#include <iostream>

std::vector<int> SubtractN(std::vector<int> v, int n);

int RemoveTwos(int original);

std::vector<std::string> Split(std::string whole, std::string separator);


// returns -1 if the number is negative and 1 if positive or zero
int Sign(int num);


// Multiplies all numbers in a vector together and returns the resulting value
int Product(std::vector<int> nums);


//Sam Koulermos
// takes two vectors of integers, a and b. The function then removes elements from a if they are also in b.
// If the integer is in b, but not in a, nothing happens.
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b);

// Multiplies all numbers in a vector together and returns the resulting value
int Product(std::vector<int> nums);


std::vector<double> VectorPlusN(std::vector<double> v, double n);
int Sum(std::vector<int> input);


