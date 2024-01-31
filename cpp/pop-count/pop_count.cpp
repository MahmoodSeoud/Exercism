#include "pop_count.h"

using namespace std;
namespace chicken_coop {

    int positions_to_quantity(int num){
        int decimal, binary = 0, remainder, product = 1;
        decimal = num;
        while (decimal != 0) {
            remainder = decimal % 2;
            binary += remainder * product;
            decimal  /= 2;
            product *= 10;
        }

        string binary_str = to_string(binary);
        int count = 0;
        for (auto it = binary_str.begin(); it < binary_str.end(); ++it) {
            if (*it == '1') count++;
        }


        cout << "binary:" << binary << endl;
        return count;
    }

}  // namespace chicken_coop
