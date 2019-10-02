
#include "UtilityFunctions.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> test_vector = {1, 2, 3, 4};
    vector<bool> output_vector;
    output_vector = GreaterMask(test_vector, 3);
    for(int i=0; i < output_vector.size(); i++){
        cout << output_vector[i] << endl;
    }
vector<double> test_vector_D = {1.0,2.0,3.0,4.0};
    double Product_total;
    Product_total = Product(test_vector_D);
    cout << Product_total << endl;

}
