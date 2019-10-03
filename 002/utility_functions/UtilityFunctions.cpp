#include <iostream>
#include <vector>
#include "UtilityFunctions.h"
#include <vector>
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
