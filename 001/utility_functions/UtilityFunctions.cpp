#include "UtilityFunctions.h"
#include <vector>
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