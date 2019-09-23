#include "UtilityFunctions.h"
#include <vector>

int main() {
    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!
    
    //Abby Nay testing my function in Main
    std::vector<int> nums_1 = {5,7,9};
    std::vector<int> nums_2 = {5,5,5};
    std::vector<int> nums_3 = {2,1,1};
    std::cout<<Sum(nums_1)<<std::endl;
    std::cout<<Sum(nums_2)<<std::endl;
    std::cout<<Sum(nums_3)<<std::endl;
    nums_3.push_back(6);
    std::cout<<Sum(nums_3)<<std::endl;
    nums_1.push_back(-1);
    std::cout<<Sum(nums_1)<<std::endl;
}
