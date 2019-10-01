#include "UtilityFunctions.h"

// Implement your functions here. Don't forget function comments!

// subtracts n to each element of the vector
vector<int> SubtractN(vector<int> vec, int n)
{
    //Loops through the vector
    for (int x = 0; x < vec.size(); x++)
    {
        //subtracts n from each index in the vector
        vec[x] = vec[x] - n;
    }

    //returns the altered vector
    return vec;
}
