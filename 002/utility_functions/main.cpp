#include "UtilityFunctions.h"
#include <iostream>
using namespace std;
int main() {

    /*
    Josef May

    This function takes out elements that are not evenly divisible by the passed in int

    */



    vector <int> v{2,3,4,5,10,15,20,30}; //input vector
    vector<int> outV = MultiplesFilter(v,5); //output vector
    for(int i = 0; i < outV.size(); i++){ //print out output vector for expected result
        cout << outV[i] << " | ";
    }
    cout << endl;
    return 0;
}
