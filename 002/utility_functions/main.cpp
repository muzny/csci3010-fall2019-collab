#include "UtilityFunctions.h"
#include <iostream>


int main() {
    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!


#include <vector>

using namespace std;

int main() {

    vector<int> test_vector = {1, 2, 3, 4};
    vector<bool> output_vector;
    output_vector = GreaterMask(test_vector, 3);
    for(int i=0; i < output_vector.size(); i++){
        cout << output_vector[i] << endl;
    }
  
    // these two cout statements show the sign function is working. prints 1 for positive numbers, and -1 for negative numbers.
    std::cout << Sign(5.4) << std::endl;
    std::cout << Sign(-2.2) << std::endl;

    std::vector<string> my_fav = {"I", "Like", "PB&J"};
    string glue = " ";
    cout << Join(my_fav, glue) << endl;
    //Prints string "I Like PB&J"
}
