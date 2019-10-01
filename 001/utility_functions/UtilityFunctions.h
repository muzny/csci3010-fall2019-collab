// put the declarations of your utility functions here.
// they should not be in a class.
// takes a vector of doubles and removes all elements evenly divisible by the passed in double
#include <vector>
#include <string>
#include <iostream>
std::vector<std::string> Split(std::string whole, std::string separator);

//Sam Koulermos
// takes two vectors of integers, a and b. The function then removes elements from a if they are also in b.
// If the integer is in b, but not in a, nothing happens.
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b);

// Multiplies all numbers in a vector together and returns the resulting value
int Product(std::vector<int> nums);

std::vector<double> MultiplesFilter(std::vector<double>, double divides_by);

