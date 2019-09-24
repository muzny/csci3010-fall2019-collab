#include "UtilityFunctions.h"
#include <vector>
// Implement your functions here. Don't forget function comments!

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