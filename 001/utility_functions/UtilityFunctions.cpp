#include "UtilityFunctions.h"

// Implement your functions here. Don't forget function comments!
// returns -1 if the number is negative and 1 if positive
// 0 returns positive because it takes up positive mem space- the abs of min int in c++ is one more than the max
int Sign(int num){
	if(num>=0){ //if num is 0 or pos
		return 1;
	}else{
		return -1;
	}
}