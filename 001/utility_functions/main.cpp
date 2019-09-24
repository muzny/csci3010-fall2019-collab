#include "UtilityFunctions.h"
#include <iostream>

int main() 
{
    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!

	int factorial_this = 4;
    std::cout<<"This is our factorial function!"<<std::endl;
    std::cout<<"It takes an int such as ("<<factorial_this<<") and factorializes them"<<std::endl;
    std::cout<<"("<<factorial_this<<")! is "<<Factorial(factorial_this)<<std::endl;
    std::cout<<"Lets see what happens if we enter a negative number into Factorial: "<<Factorial(-10)<<std::endl;
    std::cout<<"It returns -1 as the definition of a negative Factorial is not defined"<<std::endl;
}
