#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <math.h>
#include "UtilityFunctions.h"
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
}

// Implement your functions here. Don't forget function comments!

vector<bool> GreaterMask(vector<int> nums, int greater_than)
{
    // creating a new vector to return true or false
    vector<bool> true_or_false;
    // iterating through the vector of ints
    for (int i = 0; i < nums.size(); i++) {
        true_or_false.push_back(nums[i] > greater_than);
    }
    return true_or_false;
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