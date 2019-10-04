// put the declarations of your utility functions here.
// they should not be in a class.
#include <iostream> //input and output stream
#include <vector> //ability to use vectors

//Takes a vector of integers and returns the sum of the integers within the vectors
int Sum(std::vector<int> nums);

std::vector<bool> GreaterMask(std::vector<int> nums, int greater_than);
double Product(std::vector<double> nums);

std::string Join(std::vector<std::string> pieces, std::string glue);