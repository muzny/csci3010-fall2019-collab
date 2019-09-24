#include "UtilityFunctions.h"
#include <iostream>


int main() {
    vector<int> add5 = {0, 5, -5};//Starting vector to add 5 to
    vector<int> addmin5 = {0, 5, -5};//Starting vector to add -5 to
    vector<int> add99 = {0, 5, -5};//Starting vector to add 99 to

    add5 = VectorPlusN(add5, 5);//Add 5
    addmin5 = VectorPlusN(addmin5, -5);//Add -5
    add99 = VectorPlusN(add99, 99);//Add 99

    for (unsigned int i = 0; i < add5.size(); i++){
        cout<<add5[i]<<", ";//Print each element in the vector
    }
    cout<<endl;
    for (unsigned int i = 0; i < addmin5.size(); i++){
        cout<<addmin5[i]<<", ";//Print each element in the vector
    }
    cout<<endl;
    for (unsigned int i = 0; i < add99.size(); i++){
        cout<<add99[i]<<", ";//Print each element in the vector
    }
    cout<<endl;
}
