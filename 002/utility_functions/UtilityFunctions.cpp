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

// adds n to each element of the vector
std::vector<std::string> AddN(std::vector<std::string> invector, std::string n){
	//Iterate throught the vector and add n to each entry
	for (int i = 0; i<invector.size(); i++){
		invector[i]= invector[i]+n;
	}
	//return the modified vector. 
	return invector;
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
