//Alden Maben
#include "UtilityFunctions.h"
#include <vector>

// Implement your functions here. Don't forget function comments!
double Sum(std::vector<double> nums) {
    double total = 0.0;

    //check to see if the vector isn't empty, if it is return 0.0
    if(nums.size() == 0) {
        return 0.0;
    }

    //iterate through the vector and add each element to a summation variable
    for(int i=0; i<nums.size(); i++) {
        total += nums[i];
    }

    return total;
}

#include <string>
#include <iostream>


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
