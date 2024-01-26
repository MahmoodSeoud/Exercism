#include "darts.h"
#include <iostream>
#include <cmath>
#include <cstdlib>

namespace darts {

    int score(double x, double y){
        double outer_circle_radius = 10.0;
        double middle_circle_radius = 5.0;
        double inner_circle_radius  = 1.0;

        double sum_points = sqrt((pow(x,2)) + (pow(y,2)));
        std::cout << "som points:" << sum_points;

        // Dart is outside the circle
        if(sum_points > outer_circle_radius) return 0;  
        // Dart in outer circle
        if (middle_circle_radius < sum_points && sum_points <= outer_circle_radius) return 1;
        // Dart in middle_circle_radius
        if (inner_circle_radius < sum_points && sum_points <= middle_circle_radius) return 5;
        // Dart in inner circle
        if (sum_points <= inner_circle_radius) return 10;
        
        return 420;
    }
} // namespace darts
