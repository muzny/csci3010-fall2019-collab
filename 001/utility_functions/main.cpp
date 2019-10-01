#include "UtilityFunctions.h"
#include "catch.hpp"
#include <vector>
#include <iostream>
/**
Oceane Andreis & Mikayla Pickett

This is our main file. We declared a few vectors of different size to see how our function would work.
We made sure to also try it by adding a number to our vector and then getting the sum of the vector with that new number.

*/

using namespace std;

int main() {
    
    vector<int> nums = {0,1,2,3,4,10};
    vector<int> nums2 = {2,3,4,10};
    vector<int> nums3 = {200,10};
 
    nums3.push_back(10);
    nums2.push_back(-10);
    
    cout<<"Print the sum of our vectors: "<<endl;
    cout<<"1st Vector: ";
    cout<<Sum(nums)<<endl;
    cout<<"2nd Vector: ";
    cout<<Sum(nums2)<<endl;
    cout<<"3rd Vector: ";
    cout<<Sum(nums3)<<endl;
    
    return 0;
}
