#include "UtilityFunctions.h"



#include <iostream>
#include <vector>
#include <string>
#include <fstream>


/**
    Returns the given vector formatted as an equation multiplying each element.

    @param v A vector of integers to be multiplied.
    @return A readable equation.
*/
std::string VectorAsEquation(std::vector<int> v) {
	std::string print_message;

	if (v.size() == 0) {
		return	print_message + "empty vector = ";
	}
	for (int i = 0; i < v.size(); i++) {
		if (i != 0) {
    		print_message += " * ";
    	}
    	print_message += std::to_string(v[i]);
    }
    return print_message + " = ";
}



/**
Oceane Andreis & Mikayla Pickett
This is our main file. We declared a few vectors of different size to see how our function would work.
We made sure to also try it by adding a number to our vector and then getting the sum of the vector with that new number.

*/

using namespace std;

int main() {


    vector<int> nums = {0,1,2,3,4,10};
    vector<int> nums2 = {2,3,4,10};
    vector<int> nums3 = {200,10};

    nums3.push_back(10);
    nums2.push_back(-10);

    cout<<"Print the sum of our vectors: "<<endl;
    cout<<"1st Vector: ";
    cout<<Sum(nums)<<endl;
    cout<<"2nd Vector: ";
    cout<<Sum(nums2)<<endl;
    cout<<"3rd Vector: ";
    cout<<Sum(nums3)<<endl;



    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!
    std::cout<<"RemoveTwos(16): "<<RemoveTwos(16)<<std::endl;
    std::cout<<"RemoveTwos(26): "<<RemoveTwos(26)<<std::endl;
    std::cout<<"RemoveTwos(52): "<<RemoveTwos(52)<<std::endl;

    std::cout<< "Reading in 6, expecting positive (1): "<< Sign(6) << std::endl;
    std::cout<< "Reading in 56, expecting positive (1); "<< Sign(56) << std::endl;
    std::cout<< "Reading in -2, expecting negative (-1): "<< Sign(-2) << std::endl;
    std::cout<< "Reading in 0, expecting positive (1): "<< Sign(0) << std::endl;


    std::vector<int> numbers;
    std::cout << VectorAsEquation(numbers) << Product(numbers) << std::endl;

    numbers = {1};
    std::cout << VectorAsEquation(numbers) << Product(numbers) << std::endl;

	  numbers = {3, 4, 5};
	  std::cout << VectorAsEquation(numbers) << Product(numbers) << std::endl;


	  numbers = {};
	  for (int i = 5; i < 11; i++) {
		  numbers.push_back(i);
	   }
	  std::cout << VectorAsEquation(numbers) << Product(numbers) << std::endl;
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

  return 0;
}
