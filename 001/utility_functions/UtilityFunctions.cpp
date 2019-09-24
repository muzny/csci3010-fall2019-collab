#include "UtilityFunctions.h"

/**
	Joins a vector of strings with a delimeter.

    @param pieces Vector of strings
    @param glue Delimeter
    @return Generated joined string
*/
std::string Join(std::vector<std::string> pieces, std::string glue) {
    std::string res = "";
    for (int i = 0; i < pieces.size(); i++) {
        if (i == pieces.size() - 1) {
            res += pieces[i];
        }
        else {
            res += pieces[i] + glue;
        }
    }
    return res;
}
