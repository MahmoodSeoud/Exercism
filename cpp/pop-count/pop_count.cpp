#include "pop_count.h"

using namespace std;
namespace chicken_coop {

    int positions_to_quantity(int num){
        int sum = 0;

        while(num > 0) {
            sum += num & 1;
            num >>= 1;
        }

        return sum;
    }

}  // namespace chicken_coop
