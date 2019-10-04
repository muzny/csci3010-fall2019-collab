#include <iostream>
#include "UtilityFunctions.h"
#include <vector> //include the ability to use vectors
#include <string>

//Takes a vector of integers and returns the sum of all integers within the vector  
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

std::vector<bool> GreaterMask(std::vector<int> nums, int greater_than)
{
    // creating a new vector to return true or false
    std::vector<bool> true_or_false;
    // iterating through the vector of ints
    for (int i = 0; i < nums.size(); i++)
    {
        // if the number in the vector is greater than the given int, add true to the bool vector
        if (nums[i] > greater_than)
        {
            true_or_false.push_back(true);
        }
        // if it is less than or equal to add false
        else
        {
            true_or_false.push_back(false);
        }
    }
    // returning bool vector
    return true_or_false;
}

// Implement your functions here. Don't forget function comments!
double Product(std::vector<double> num)
{
    double total = 1; // keep a total of the vector product, begin with one for its math properties
    for (auto &&x : num)
    {
        // loop through every element of the double array and mutiplies it to total and stores the new value in total
        total *= x;
    }
    
    return total;
}
std::string Join(std::vector<std::string> pieces, std::string glue) {
  std::string s;
  for (int unsigned i = 0; i < pieces.size(); i++){
    if(i < pieces.size() - 1)
      s = s + pieces[i] + glue;
    else
      s = s + pieces[i];
  };
  return s;
}
