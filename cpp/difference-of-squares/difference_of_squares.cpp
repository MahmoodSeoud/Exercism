#include "difference_of_squares.h"

namespace difference_of_squares {

    int square_of_sum(int num){
        int sum = 0;
        for (int i = 0; i <= num; i++){
            sum += i;
        }
        return sum*sum;
    }
    
    int sum_of_squares(int num){
        int sum = 0;
        for (int i = 0; i <= num; i++){
            sum += i*i;
        }
        return sum;
    }

    int difference(int num){
        int square_sum = square_of_sum(num);
        int sum_square = sum_of_squares(num);
        return std::abs(square_sum - sum_square);
    }

}  // namespace difference_of_squares
