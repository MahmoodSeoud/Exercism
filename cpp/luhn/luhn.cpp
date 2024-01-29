#include "luhn.h"
using namespace std;

namespace luhn {
    bool valid(string num){
        string output = num;
        output = regex_replace(output, regex(R"([\s]+)"), "");

        if (regex_match(output, regex(R"([\D])")) || num.size() <= 1) return false;
            
        cout << "firsttimerunning" << "\n";
        for (string::reverse_iterator rit = output.rbegin() + 1; rit < output.rend(); rit += 2 ){
            // Getting the actual number 
            int actual_number_to_double = *rit - '0';
            *rit = *rit + actual_number_to_double;
            cout << "bitch as motherfuckign: " << *rit << "\n";
        }
        cout << "output: " << output;

        return false;
    }
}  // namespace luhn
