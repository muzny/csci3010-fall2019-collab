#include <iostream>
#include <vector>
#include "UtilityFunctions.h"



#include <iostream>

#include <vector>
#include "catch.hpp"
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

int main() {

    std::vector<int> nums = {0,1,2,3,4,10};
    std::vector<int> nums2 = {2,3,4,10};
    std::vector<int> nums3 = {200,10};

    nums3.push_back(10);
    nums2.push_back(-10);

    std::cout<<"Print the sum of our vectors: "<<std::endl;
    std::cout<<"1st Vector: ";
    std::cout<<Sum(nums)<<std::endl;
    std::cout<<"2nd Vector: ";
    std::cout<<Sum(nums2)<<std::endl;
    std::cout<<"3rd Vector: ";
    std::cout<<Sum(nums3)<<std::endl;

    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!
  
	std::vector<int> num;
	for (int i = 1; i < 5; i++ ){
		num.push_back(i);
	}
	
	
	std::vector<bool> bool_result;
	bool_result = OddMask(num);

	// used boolalpha to print the bollen value as true or false and not as 0 or 1
	std::cout << std::boolalpha;

	for(bool x : bool_result){
		std::cout << x << ", " ;
	}

	std::cout << std::endl;
	
	std::vector<double> vec = {1,2,3,4,5};
	std::vector<double> sub_vec = SubtractN(vec,1);
	std::cout << "Vector: " << std::endl;
	for (int i = 0; i < vec.size(); i++){
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Vector after subtracting 1: " << std::endl;
	for (int i = 0; i < sub_vec.size(); i++){
		std::cout << sub_vec[i] << " ";
	}
	std::cout << std::endl;

    std::vector<int> answer = Multiples(5, 5);
    int size = answer.size();
    for(int i = 0; i < size; i++){
	std::cout << answer[i] << " ";
    }

    std::vector<int> a = {1, 2, 3, 4, 5, 6};
    std::cout << "Demonstration of VectorTimesN Function:\n Vector before multiplication:\n [";
    for(int i = 0; i < a.size(); i++) {
      std::cout << a[i];
      if(i != a.size() - 1) {
        std::cout << ", ";
      }
    }
    std::cout << "]\n";
    std::vector<int> b = VectorTimesN(a, 3);
    std::cout << "New vector after multiplication by 3:\n [";
    for(int i = 0; i < b.size(); i++) {
      std::cout << b[i];
      if(i != b.size() - 1) {
        std::cout << ", ";
      }
    }
    std::cout << "]\n";
    a.clear();
    b.clear();

    std::vector<double> plus_n_example = {4, 5, 6};
    std::vector<double> new_vector = VectorPlusN(plus_n_example, 4);
    std::cout << "Vector Before Addition: " << plus_n_example[0] << " " << plus_n_example[1] << " " << plus_n_example[2] << std::endl;
    std::cout << "Vector After Addition: " << new_vector[0] << " " << new_vector[1] << " " << new_vector[2] << std::endl;

    std::cout<<"RemoveTwos(16): "<<RemoveTwos(16)<<std::endl;
    std::cout<<"RemoveTwos(26): "<<RemoveTwos(26)<<std::endl;
    std::cout<<"RemoveTwos(52): "<<RemoveTwos(52)<<std::endl;

	int factorial_this = 4;
    std::cout<<"This is our factorial function!"<<std::endl;
    std::cout<<"It takes an int such as ("<<factorial_this<<") and factorializes them"<<std::endl;
    std::cout<<"("<<factorial_this<<")! is "<<Factorial(factorial_this)<<std::endl;
    std::cout<<"Lets see what happens if we enter a negative number into Factorial: "<<Factorial(-10)<<std::endl;
    std::cout<<"It returns -1 as the definition of a negative Factorial is not defined"<<std::endl;

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
