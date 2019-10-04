
#include "UtilityFunctions.h"
#include <iostream>
#include <vector>

using namespace std;


int main() 
{

    vector<double> someVector={2,4,7,-3,0};
    vector<double> result = SubtractN(someVector,2);
    for (unsigned int i=0; i<result.size(); i++)
    {
      cout<<result[i]<<endl;
    }

    string str = "Hi this is Colin. Colin says Hi";
    cout << RemoveFirstSubstring(str, "Colin") << endl;


    int a=2;
    int Sign(a);
   // int Sign (-3);


}
