//Alden Maben
#include "UtilityFunctions.h"

<<<<<<< HEAD
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
=======
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
>>>>>>> master
}
