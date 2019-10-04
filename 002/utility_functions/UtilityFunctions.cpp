#include <vector>
#include "UtilityFunctions.h"
#include <string>
#include <iostream>
using namespace std;

string Join(vector<string> pieces, string glue) {
  string s;
  for (int unsigned i = 0; i < pieces.size(); i++){
    if(i < pieces.size() - 1)
      s = s + pieces[i] + glue;
    else
      s = s + pieces[i];
  };
  return s;
}

// checks the sign of num. returns -1 if negative, 1 if positive.
double Sign(double num){
    if (num > 0){
        return 1;
    } else if (num == 0){
        return 0;
    } else {
        return -1;
    }
}
