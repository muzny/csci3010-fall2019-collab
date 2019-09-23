#include "UtilityFunctions.h"
#include "catch.hpp"
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> nums = {0,1,2,3,4,10};
    vector<int> nums2 = {2,3,4,10};
    vector<int> nums3 = {200,10};
 
    nums3.push_back(10);
    nums2.push_back(-10);
    cout<<Sum(nums);
    cout<<Sum(nums2);
    cout<<Sum(nums3);
    
    return 0;
}
