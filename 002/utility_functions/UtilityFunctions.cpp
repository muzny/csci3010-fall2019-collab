//Alden Maben
#include "UtilityFunctions.h"
#include <string>
#include <iostream>
using namespace std;

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
//Recursively calls the fibonachi function if the number isnt 0 or 1. 
int fibonacci(int n){
    if (n <= 1) 
        return n; 
    return fibonacci(n-1) + fibonacci(n-2); 
}



// Implement your functions here. Don't forget function comments!


std::vector<int> VectorPlusN(std::vector<int> v, int n){
	std::vector<int> newV;
	for(int i = 0; i < v.size(); i++){
		newV .push_back(v[i] + n);
	}
	return newV;
}

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

