#include "UtilityFunctions.h"

using namespace std;

vector<int> VectorPlusN(vector<int> v, int n){
    for (unsigned int i = 0; i < v.size(); i++){
        v[i] += n;//For each element, add n
    }
    return v;
}