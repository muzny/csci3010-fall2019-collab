#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include "UtilityFunctions.h"


using namespace std;




/**
    returns a vector that is the input vector times any given n.

    @param vector, number to multiply elements by.
    @return new vector with values.
*/
vector<int> VectorTimesN(vector<int> v, int n){
	vector<int> tmp;
	for (int i=0;i<v.size();i++){
		tmp.push_back(v[i]*n);
	}
	return tmp;


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
