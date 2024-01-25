#include "raindrops.h"
#include <string>

namespace raindrops
{
    std::string convert(int number_to_convert)
    {
        bool pling = number_to_convert % 3 == 0;
        bool plang = number_to_convert % 5 == 0;
        bool plong = number_to_convert % 7 == 0;

        std::string str = "";

        if (pling)
        {   
            str += "Pling";
        }

        if (plang)
        {
            str += "Plang";
        }

        if (plong)
        {
            str += "Plong";
        }

        if (!pling && !plang && !plong)
        {
            return std::to_string(number_to_convert);
        }

        return str;
    }
} // namespace raindrops
