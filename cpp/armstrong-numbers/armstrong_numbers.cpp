#include "armstrong_numbers.h"
using namespace std;

namespace armstrong_numbers {
    bool is_armstrong_number(int number){
        string number_to_string = to_string(number);
        int sum = 0;
        for (char& c : number_to_string){
            int num = pow(int(c) - 48, number_to_string.size()); 
            sum += num;
        }
        return sum == number;
    }
}  // namespace armstrong_numbers
