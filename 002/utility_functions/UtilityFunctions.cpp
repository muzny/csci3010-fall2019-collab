#include <iostream>
#include <vector>
#include "UtilityFunctions.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

// Implement your functions here. Don't forget function comments!

vector<bool> GreaterMask(vector<int> nums, int greater_than)
{
    // creating a new vector to return true or false
    vector<bool> true_or_false;
    // iterating through the vector of ints
    for (int i = 0; i < nums.size(); i++)
    {
        // if the number in the vector is greater than the given int, add true to the bool vector
        if (nums[i] > greater_than)
        {
            true_or_false.push_back(true);
        }
        // if it is less than or equal to add false
        else
        {
            true_or_false.push_back(false);
        }
    }
    // returning bool vector
    return true_or_false;
}

// Implement your functions here. Don't forget function comments!
double Product(std::vector<double> num)
{
    double total = 1; // keep a total of the vector product, begin with one for its math properties
    for (auto &&x : num)
    {
        // loop through every element of the double array and mutiplies it to total and stores the new value in total
        total *= x;
    }
    
    return total;
}
string Join(vector<string> pieces, string glue) {
  string s;
  for (int unsigned i = 0; i < pieces.size(); i++){
    if(i < pieces.size() - 1)
      s = s + pieces[i] + glue;
    else
      s = s + pieces[i];
  };
  return s;
}
