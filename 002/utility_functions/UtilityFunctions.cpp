#include "UtilityFunctions.h"

#include <iostream>
#include <cstdlib>

// Function to multiply every element in a vector
int UtilityFunctions::Product(vector<int> nums)
{
  int product = 1;
  for(int i = 0; i < nums.size(); i++)
  {
    product = product * nums[i];
  }
  return product;
}
// Implement your functions here. Don't forget function comments!
