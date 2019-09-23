#include "UtilityFunctions.h"
#include <vector> //include the ability to use vectors
// Implement your functions here. Don't forget function comments!

//Abby Nay Function
int Sum(std::vector<int> nums){
    int total = 0; //this will keep track of the sum of the elements of the vector
    int size; //this will let us know how many elements of the vector there are
    size = nums.size(); //we want to set the size here since we want to optimize our for loop, that way a function isn't called each loop
    //loop through the elements of the vector
    for(int i=0; i<size; i++){
        total+=nums.at(i); //add each value in the vector to the total
    }
    return total; //return the sum of the vector elements
}