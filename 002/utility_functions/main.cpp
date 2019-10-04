
#include "UtilityFunctions.h"

#include <vector>

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
    std::cout << fibonacci(15) << '\n';

    int a=2;
    int Sign(a);
   // int Sign (-3);





//Kevin Ruby -- A program to multiple all elements in vector by n.

int main() {
	vector<int> input{3,4,5};
    vector<int> output = VectorTimesN(input,5);

    for (int i=0;i<output.size();i++){
    	cout << output[i] <<"  ";
    }
    cout<<endl;
    return 0;

    std::vector<string> my_fav = {"I", "Like", "PB&J"};
    string glue = " ";
    cout << Join(my_fav, glue) << endl;
    //Prints string "I Like PB&J"

}
