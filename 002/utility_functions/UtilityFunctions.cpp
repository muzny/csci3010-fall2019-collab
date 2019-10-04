#include "UtilityFunctions.h"

// Implement your functions here. Don't forget function comments!

/*
Params are a vector of ints and a num
The function divides the elements of v by the number passed in.
If it does not evenly divide then the element is taken out
Return the updated vector
*/
std::vector<int> MultiplesFilter(std::vector<int> vectorChad, int divides_by){
    for(int i = 0; i < vectorChad.size(); i++){
        if(vectorChad[i] % divides_by == 0){
            continue;
        }else{
            vectorChad.erase(vectorChad.begin()+i);
            i = i -1;
        }
    }
    return vectorChad;
}
