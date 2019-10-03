#include <iostream>
#include "UtilityFunctions.h"

int main(){
  //declare example vector
  std::vector<int> nums = {1,2,3,4,5,6};
  std::vector<bool> answer = EvenMask(nums);
  //print resulting vector
  for(int i = 0; i < answer.size(); ++i){
    std::cout << answer[i] << std::endl;
  }

}
