#include "UtilityFunctions.h"
#include <vector>
#include <fstream>
#include <string>
#include <iostream>

int main() {
    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!
    std::string whole = "Hello Friend";
    std::string separator = "blah";
    std::vector<std::string> result = Split(whole, separator); //check case where delimiter is not in string

    for (int i = 0; i<result.size(); i++){
    	std::cout<<result[i]<<std::endl;
    }
    
    std::string separator2 = "Fr";
    std::vector<std::string> result2 = Split(whole, separator2);//case where delimiter is in string

    for (int i = 0; i<result2.size(); i++){
    	std::cout<<result2[i]<<std::endl;
    }
}
