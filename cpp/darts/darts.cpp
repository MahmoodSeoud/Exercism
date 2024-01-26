#include "darts.h"

namespace darts {

    int score(double x, double y){
        double outer_circle_radius = 10.0;
        double middle_circle_radius = 5.0;
        double inner_circle_radius  = 1.0;

        double dist = sqrt(x*x + y*y);
        std::cout << "som points:" << dist;

        // Dart is outside the circle
        if(dist > outer_circle_radius) return 0;  
        // Dart in outer circle
        if (middle_circle_radius < dist && dist <= outer_circle_radius) return 1;
        // Dart in middle_circle_radius
        if (inner_circle_radius < dist && dist <= middle_circle_radius) return 5;
        // Dart in inner circle
        if (dist <= inner_circle_radius) return 10;
        
        // Never going to be case, just added it for fun
        return 420;
    }
} // namespace darts
