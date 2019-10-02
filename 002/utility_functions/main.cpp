// Max Macaluso
// LE8

// To see what Catch2 (Tests) outputs:
//     make
//     ./test 

// To output contents in main:
//     g++ -std=c++11 main.cpp UtilityFunctions.cpp 
//     ./a.out


#include "UtilityFunctions.h"
#include <iostream>
#include <string>

using namespace std;

int main() 
{
    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!
    
    int a=2;
    int Sign(a);
   // int Sign (-3);



    //Create and add elements to vector
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    //vec = {1, 2, 3, 4, 5, 6}

    //outputs original vector
    cout << "Original vector is:" << endl;
    for (int x = 0; x < vec.size(); x++)
    {
        cout << vec[x] << " ";
    }
    cout << endl;
    cout << endl;

    //outputs original vector with 16 subtracted from each element
    cout << "Original vector - 16 is:" << endl;
    vector<int> vec_16 = SubtractN(vec, 15);
    for (int x = 0; x < vec_16.size(); x++)
    {
        cout << vec_16[x] << " ";
    }
    cout << endl;
    cout << endl;

    //outputs original vector with 11 subtracted from each element
    cout << "Original vector - 11 is:" << endl;
    vector<int> vec_11 = SubtractN(vec, 11);
    for (int x = 0; x < vec_11.size(); x++)
    {
        cout << vec_11[x] << " ";
    }
    cout << endl;
    cout << endl;

}
