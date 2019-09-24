#include "UtilityFunctions.h"
#include <vector>
#include <iostream>
#include <math.h>
// Implement your functions here. Don't forget function comments!
std::vector<double> MultiplesFilter(std::vector<double> og_vec, double divides_by){
	//https://stackoverflow.com/questions/3902399/error-invalid-operands-to-binary-have-double-and-double

  	std::vector<double> bar; // resulting vector

  	// for each element in og_vec, if it is not divisible by divides_by,then put in result vec
  	for(double & d: og_vec){
  		if(fmod(d,divides_by) != 0) bar.push_back(d); 
  	}

  	return bar;
}