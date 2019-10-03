#include "UtilityFunctions.h"


#include <math.h>

// Implement your functions here. Don't forget function comments!



#include <iostream>

#include <vector>
#include <iostream>
#include <string>


//=======================================================================================================
/*
Matthias Bruski
Sigma/sum function that adds together all entries of double type vector and returns their sum
*/
double Sum(std::vector<double> nums){
  double sum = 0;
  std::vector<double>::iterator i; // vector iterator
  for (i = nums.begin(); i != nums.end(); i++){ //loops through vector and adds each entry to the sum
    sum += *i;
  }
  return sum; // returns sum
}
//=======================================================================================================

/*
This function says whether or not a vector of its is even or odd

@param: a vector if type ints
@returns: a vector of bools

*/
std::vector<bool>  EvenMask(std::vector<int>V){
	std::vector <bool> temp;
for (int i=0; i<V.size(); i++){
	if (V[i]%2==0){
		temp.push_back(true);
	}
	else {
		temp.push_back(false);
	}
}
return temp;

}


// This function takes in an integer, and divides it by two as many times as possible
// The resulting value is returned
int RemoveTwos(int original){
    while(original % 2 == 0){
        original = original / 2;
    }
    return original;
}


/**
    Returns the product the elements in a vector.
    @param nums The vector for which to calculate a product.
    @return The product.
*/
int Product(std::vector<int> nums) {
	int product = 1;
	if (nums.size() == 0) {
		return 0;
	}
	for (int i = 0; i < nums.size(); i++) {
		product *= nums[i];
	}

	return product;
}


// samKoulermos
// takes two vectors of integers, a and b. The function then removes elements from a if they are also in b.
// If the integer is in b, but not in a, nothing happens.
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b){
	for (auto j = b.begin(); j != b.end(); ++j){
		for (auto i = a.begin(); i != a.end(); ++i) {
			if (*i == *j) {
				a.erase(i);
				i--;
			}
		}
	}
	return a;
}


// Implement your functions here. Don't forget function comments!

/*
Function that returns n! or n factoral.

@param n is the number you want to be factoraled
@returns an int of your input number factoraled lol
	returns -1 if @param n < 0

*/
int Factorial(int n)
{
	int returnThis;
	if (n < 0)
	{
		return -1;
	}
	else
	{
		if (n == 0)
		{
			return 1;
		}
		else if (n == 1)
		{
			return 1;
		}
		returnThis = 1;
		for (int i = 1; i <= n; i++)
		{
			returnThis*=i;
		}
		return returnThis;
	}
}

/*
    Multiplies each entry within a given vector by a given integer and saves
    the new values to a new vector to return

    @param a vector of integers and the integer to multiply each entry in the vector by
    @return a vector with the resulting values
*/
std::vector<int> VectorTimesN(std::vector<int> v, int n) {
  std::vector<int> return_vec;
  for(int i = 0; i < v.size(); i++) {
    return_vec.push_back(v[i] * n);
  }
  return return_vec;
}

/*
  SubtractN - Subtracts the value of the parameter int n from every element in vector v
  @vector v - a vector that is being passed-in, @int n is the value to subtract from each element
  @returns a modified vector v
*/
std::vector<int> SubtractN(std::vector<int> v, int n){
    for(unsigned int i = 0; i < v.size(); i++){
      v[i] = v[i] - n;
    }
    return v;
}

// returns -1 if the number is negative and 1 if positive
// 0 returns positive because it takes up positive mem space- the abs of min int in c++ is one more than the max
int Sign(int num){
	if(num>=0){ //if num is 0 or pos
		return 1;
	}else{
		return -1;
	}
}

// Splits a single string on separator into a vector of strings
std::vector<std::string> Split(std::string whole, std::string separator){
	std::vector<std::string> return_string;
	int delim = 100;
	for (int i = 0; i<whole.size(); i++){
		if (whole[i]==separator[0]){
			bool found = true;
			for (int j = 0; j<separator.length(); j++){
				if (whole[i+j]!=separator[j]){
					found = false;
				}
			}
			if (found){
				delim = i;
				break;
			}

		}
	}
	if (delim==100){
		std::string error= "Error, could not find separator";
		return_string.push_back(error);
		return return_string;
	}
	else{
		return_string.push_back(whole.substr(0, delim));
		return_string.push_back(whole.substr(delim, whole.size()));
		return return_string;
	}



}



/* Function: VectorPlusN
   Parameters: A vector (v) to add a double (n) to each element
   Returns: A new vector updated with each of the numbers
*/

std::vector<double> VectorPlusN(std::vector<double> v, double n) {
	std::vector<double> plus_n;
	for (size_t i = 0; i < v.size(); i ++) {
		double val = v[i] + n;
		plus_n.push_back(val);
	}
	return plus_n;
}

/**
Oceane Andreis & Mikayla Pickett

This is our utility function file. I have a function that take in a vector of ints and the function goes through
all the elements in the vector and adds them all up and it returns the sum of the vector.
*/

/**
    Return an int which is the sum of our vector.

    @param  an int vector.
    @return an int.
*/
int Sum(std::vector<int> nums){

    int sum = 0;

    for(unsigned int i = 0; i < nums.size(); i++)
    {
        sum+=nums[i];
    }
    return sum;


}
