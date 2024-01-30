#include "bob.h"
using namespace std;

namespace bob {
    bool all_is_uppercase(string str){
        regex pattern(R"([^a-zA-Z])"); 
        string temp =  regex_replace(str, pattern, "");
        if (temp.empty()) return false;
        auto is_upper = [](char c){ return isupper(c); };

        return all_of(temp.begin(), temp.end(), is_upper);

    }

    bool all_is_whitespace(string str){
    
        if (str.empty()) return true; 
        for(auto it = str.begin(); it < str.end(); ++it){
            if (!isspace(*it)) return false;
        }
        return true;
    }

    bool ending_with_question_mark(string str){
        regex pattern(R"([\s])");
        str = regex_replace(str, pattern, "");
        
        return str.back() == '?';
    }

    string hey(string str){
        //Kstr = regex_replace(str, regex(R"([\s])") , "");
         //long capital_count = 0, whitespace_count = 0;
        bool all_captial_letters = all_is_uppercase(str);
        bool all_empty  = all_is_whitespace(str);
        bool ending_question_mark = ending_with_question_mark(str);

        if(all_empty) return "Fine. Be that way!";
        else if(all_captial_letters && ending_question_mark) return "Calm down, I know what I'm doing!";
        else if(all_captial_letters) return "Whoa, chill out!";
        else if(ending_question_mark) return "Sure.";
        else return "Whatever.";
    }
}  // namespace bob
