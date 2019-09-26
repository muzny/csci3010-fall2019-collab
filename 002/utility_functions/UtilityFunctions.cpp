#include "UtilityFunctions.h"

using namespace std;

// Implement your functions here. Don't forget function comments!
vector<double> SubtractN(vector<double> input, double n)
{
  vector<double> retVect; //this is the vector ultimately being returned from the function
  for (unsigned int i=0; i<input.size(); i++)
  {
    double val = input[i]-n;
    retVect.push_back(val);
  }
  return retVect;
}
