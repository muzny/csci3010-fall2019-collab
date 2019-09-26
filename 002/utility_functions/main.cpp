#include "UtilityFunctions.h"
#include <vector>
using namespace std;



//Kevin Ruby -- A program to multiple all elements in vector by n.

int main() {
	vector<int> input{3,4,5};
    vector<int> output = VectorTimesN(input,5);

    for (int i=0;i<output.size();i++){
    	cout << output[i] <<"  ";
    }
    cout<<endl;
    return 0;
}
