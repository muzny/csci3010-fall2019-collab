#include "UtilityFunctions.h"
#include <iostream>
void test_func(std::vector<double> foo, double td){
	std::cout <<"Foo contains : ";
	for(double d: foo){
    	std::cout <<d <<' ';
    }
	std::cout << '\n';
	std::cout << "Getting rid of elements which are divisible by " << td << '\n';
	std::vector<double> bar;
    bar = MultiplesFilter(foo, td);
    std::cout<< "Result contains : ";
    for(double d: bar){
    	std::cout <<d <<' ';
    }
    std::cout << '\n';
}
int main() {
    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!
    std::vector<double> foo = {5.0,10.0,15.0,3.0,6.0,9.0,20.0};

    test_func(foo, 5.0);
    test_func(foo, 3.0);
    test_func(foo, 30);
}
