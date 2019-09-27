#include "UtilityFunctions.h"

// Implement your functions here. Don't forget function comments!


//Recursively calls the fibonachi function if the number isnt 0 or 1. 
int fibonacci(int n){
    if (n <= 1) 
        return n; 
    return fibonacci(n-1) + fibonacci(n-2); 
}