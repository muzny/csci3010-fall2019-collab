#include <iostream>
#include <vector>
#include "UtilityFunctions.h"

std::vector<bool> EvenMask(std::vector<int> vec){
  std::vector<bool> mask;
  for(int i = 0; i < vec.size(); ++i){
    if(vec[i]%2==0){
      mask.push_back(true);
    }
    else{
      mask.push_back(false);
    }
  }
  return mask;
}
