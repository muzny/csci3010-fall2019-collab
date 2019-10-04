#include "UtilityFunctions.h"

#include <vector>

#include <iostream>


using namespace std;


int main()
{
    // the main function should have demonstrations
    // of running your functions.
    // make sure that the output is easily interpretable.
    // If you'd like to define helper functions in this file,
    // you are welcome to do so!
    std::cout << fibonacci(15) << '\n';



    std::vector<double> v1{18.1, 1.3, 0.7};
    std::vector<double> v2{0.1, 0.4, 0.9, 0.5};
    std::vector<double> v3{17.8, 31.4, 56.7, 87.6, 90.1};

    std::cout << "The sum of v1 is " << Sum(v1) << std::endl;
    std::cout << "The sum of v2 is " << Sum(v2) << std::endl;
    std::cout << "The sum of v3 is " << Sum(v3) << std::endl;

    return 1;
  

  
    // these two cout statements show the sign function is working. prints 1 for positive numbers, and -1 for negative numbers.
    cout << Sign(5.4) << endl;
    cout << Sign(-2.2) << endl;


    int a=2;
    int Sign(a);
   // int Sign (-3);



    //Kevin Ruby -- A program to multiple all elements in vector by n.

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
