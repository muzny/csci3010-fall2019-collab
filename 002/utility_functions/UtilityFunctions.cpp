#include "UtilityFunctions.h"





std::vector<double> UtilityFunctions::VectorPlusN(std::vector<double> v, double n){
for(int i = 0; i < v.size(); i++){
v[i] += n;
}
return v;
}
