
#include "UtilityFunctions.h"
#include <vector>
#include <iostream>
int main() {
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!
UtilityFunctions u1;

std::vector<double> v1 = {1,2,3};
std::cout << "\nOriginal Vector: \n";
for(int i = 0; i < v1.size(); i++){
std::cout << "\n" << v1[i];
}
v1 = u1.VectorPlusN(v1, 5);
std::cout << "\nAfter Function Call Vector: \n";
for(int i = 0; i < v1.size(); i++){
std::cout << "\n" << v1[i];
}
std::cout << "\n";

    int a=2;
    int Sign(a);
   // int Sign (-3);


}
