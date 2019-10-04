#include "UtilityFunctions.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Function to multiply every element in a vector
int Product(vector<int> nums)
{
  int product = 1;
  for(int i = 0; i < nums.size(); i++)
  {
    product = product * nums[i];
  }
  return product;
}
