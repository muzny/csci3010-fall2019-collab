#include "UtilityFunctions.h"
#include <string>
#include <vector>

#include <iostream>

// Implement your functions here. Don't forget function comments!
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
	//std::cout<<delim<<std::endl;
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