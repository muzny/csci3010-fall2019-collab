#include <iostream>
#include <vector>
#include "UtilityFunctions.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;


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
