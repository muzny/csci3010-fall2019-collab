//Alden Maben
#include "UtilityFunctions.h"
#include <string>
#include <iostream>
using namespace std;

//  This function will take any integer and will return 1 if the value is positive, -1 if the value is negative, and 0 if the value is 0
int Sign (int num){
    if (num > 0)
    {
        return 1;
    }
    else if (num < 0)
    {
        return -1;
    }
    else{
        return 0;
    }
}

std::vector<double> UtilityFunctions::VectorPlusN(std::vector<double> v, double n){
for(int i = 0; i < v.size(); i++){
v[i] += n;
}
return v;
}
