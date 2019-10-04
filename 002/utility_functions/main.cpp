
#include "UtilityFunctions.h"
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


    std::vector<double> v1{18.1, 1.3, 0.7};
    std::vector<double> v2{0.1, 0.4, 0.9, 0.5};
    std::vector<double> v3{17.8, 31.4, 56.7, 87.6, 90.1};

    std::cout << "The sum of v1 is " << Sum(v1) << std::endl;
    std::cout << "The sum of v2 is " << Sum(v2) << std::endl;
    std::cout << "The sum of v3 is " << Sum(v3) << std::endl;

    return 1;
  
    int a=2;
    int Sign(a);
   // int Sign (-3);



}
