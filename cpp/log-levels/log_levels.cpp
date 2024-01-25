#include <string>

namespace log_line
{
    // const string message = "hello";
    std::string message(std::string log_level)
    {
        int index_to_start = log_level.find(": ");
        int num_characters_we_dont_want = 2;
        return log_level.substr(index_to_start + num_characters_we_dont_want);
    }

    std::string log_level(std::string loge_level)
    {
        int start = loge_level.find('[');
        int end = loge_level.find(']');

        return loge_level.substr(start + 1, end - 1);
    }

    std::string reformat(std::string loge_level)
    {
        std::string msg = message(loge_level);
        std::string log_lvl = log_level(loge_level);

        return msg + " (" + log_lvl + ")";

    }

} // namespace log_line
