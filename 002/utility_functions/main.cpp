
#include "UtilityFunctions.h"

using namespace std;

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
	vector<int> v{ 0 };
    vector<int> des{ 1 };

    vector<int> res = VectorPlusN( v, 1 );

    bool matches = res == des;
    cout << matches << endl;

    std::cout << fibonacci(15) << '\n';

    int a=2;
    int Sign(a);
   // int Sign (-3);


}
