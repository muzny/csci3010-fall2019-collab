#include "UtilityFunctions.h"

// Implement your functions here. Don't forget function comments!

#include "UtilityFunctions.h"
#include <vector>
#include <string>

// Splits a single string on separator into a vector of strings
std::vector<std::string> Split(std::string whole, std::string separator){
    std::vector<std::string> ret;
    int prev_sep = -1;
    int curr_sep = -1;
    for(int i=0;i<whole.size();i++){
        if(whole[i] == separator){
            curr_sep = i;
            int sub_len = curr_sep-prev_sep-1;
            if(sub_len > 0){
                ret.push_back(whole.substr(prev_sep+1,sub_len));
            }
            prev_sep = curr_sep;
        }
    }
    int rem_len = whole.size()-prev_sep-1;
    if(rem_len > 0){
        ret.push_back(whole.substr(prev_sep+1,rem_len));
    }
    return ret;
}
