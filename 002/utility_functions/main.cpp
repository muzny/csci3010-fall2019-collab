#include "UtilityFunctions.cpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::vector<string> my_fav = {"I", "Like", "PB&J"};
    string glue = " ";
    cout << Join(my_fav, glue) << '\n';
    //Prints string "I Like PB&J"
}