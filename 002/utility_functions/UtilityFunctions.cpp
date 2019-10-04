#include "UtilityFunctions.h"
#include <iostream>
#include <string>
using namespace std;



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

// checks the sign of num. returns -1 if negative, 1 if positive.
double Sign(double num){
    if (num > 0){
        return 1;
    } else if (num == 0){
        return 0;
    } else {
        return -1;
    }
}
  //Alden Maben


//  This function will take any integer and will return 1 if the value is positive, -1 if the value is negative, and 0 if the value is 0
int Sign (int num){
    if (num > 0)
    {
        return 1;
    }
    else if (num < 0)
    {
        return -1;
    }
    else{
        return 0;
    }
}

// Implement your functions here. Don't forget function comments!
vector<double> AddN(vector<double> v, double n){
    for (int i = 0; i < v.size(); ++i) {   //for each element in vector v
        v[i] += n;   //add n to it.
    }
    return v; //then return.
}

//Recursively calls the fibonachi function if the number isnt 0 or 1. 
int fibonacci(int n){
    if (n <= 1) 
        return n; 
    return fibonacci(n-1) + fibonacci(n-2); 
}


// Implement your functions here. Don't forget function comments!
/*
Returns the factorial of n. 

@param n; The number in which we are factorializing.
*/
int Factorial(int n){
	if(n > 1){
		return n * Factorial(n - 1);
	}
	else{
		return 1;
	}
}