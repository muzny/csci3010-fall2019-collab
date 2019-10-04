
#include "UtilityFunctions.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> test_vector = {1, 2, 3, 4};
    vector<bool> output_vector;
    output_vector = GreaterMask(test_vector, 3);
    for (int i = 0; i < output_vector.size(); i++)
    {
        cout << output_vector[i] << endl;
    }
    vector<double> test_vector_D = {1.0, 2.0, 3.0, 4.0};
    double Product_total;
    Product_total = Product(test_vector_D);
    cout << "The result of 1.0, 2.0, 3.0, 4.0 multiplied is : " << Product_total << endl;

    std::vector<string> my_fav = {"I", "Like", "PB&J"};
    string glue = " ";
    cout << Join(my_fav, glue) << endl;
    //Prints string "I Like PB&J"
}
