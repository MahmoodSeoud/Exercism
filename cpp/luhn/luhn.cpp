#include "luhn.h"
using namespace std;

namespace luhn {
    bool valid(string num){
        string output = num;
        output = regex_replace(output, regex(R"([\s]+)"), "");
        
        if(output.size() <= 1) return false;

        for (string::reverse_iterator rit = output.rbegin() + 1; rit < output.rend(); rit += 2 ){
            // Getting the actual number 
            int actual_number_to_double = 2*(*rit - '0');
            if(actual_number_to_double > 9) actual_number_to_double -= 9;
            *rit = '0' + actual_number_to_double;
        }

        int sum = 0;
        for (auto it = output.begin(); it < output.end(); it++){
            if (!isdigit(*it)) return false;
            sum += *it - '0';
        }

        return sum % 10 == 0;
    }
}  // namespace luhn
