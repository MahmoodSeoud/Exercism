#include "trinary.h"
#include <iostream>
#include <cmath>
#include <regex>

using namespace std;

namespace trinary {
    int to_decimal(string str){
        int sum =0;
        int i = 0;
        if(!regex_match(str, regex("^[012]+$"))) return sum;
        for (string::reverse_iterator rit = str.rbegin(); rit < str.rend(); ++rit ){
                string ferr = string (1, *rit);
                sum += stoi(ferr) * pow(3,i);
                i++;
        }
        return sum;
    }
}  // namespace trinary
