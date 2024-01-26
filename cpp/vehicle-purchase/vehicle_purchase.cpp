#include "vehicle_purchase.h"

namespace vehicle_purchase {

    // needs_license determines whether a license is needed to drive a type of vehicle. Only "car" and "truck" require a license.
    bool needs_license(std::string kind){
        return kind == "car" || kind == "truck";
    }

    // choose_vehicle recommends a vehicle for selection. It always recommends the vehicle that comes first in lexicographical order.
    std::string choose_vehicle(std::string option1, std::string option2) {
        const std::string best_option_str = " is clearly the better choice.";

        return (option1 < option2 ? option1 : option2) + best_option_str;
    }

    // calculate_resell_price calculates how much a vehicle can resell for at a certain age.
    double calculate_resell_price(double original_price, double age) {

        if(age < 3) return original_price * 0.8;
        if (10 <= age) return original_price * 0.5;

        return  original_price * 0.7;
    }

}  // namespace vehicle_purchase
