#include "bob.h"

using namespace std;

namespace bob {
    string hey(string str) {
        bool question, upperCase, lowerCase;
        question = upperCase = lowerCase = false;
        bool empty = true;
        
        for (char& c : str) {
            if (islower(c)) lowerCase = true;
            if (isupper(c)) upperCase = true;

            if (!isspace(c)) {
                question = false;
                empty = false;
            }

            if (c == '?') question = true;
        }
        
        bool shouting = upperCase && !lowerCase;
        if (shouting && question) return "Calm down, I know what I'm doing!";
        if (shouting) return "Whoa, chill out!";
        if (question) return "Sure.";
        if (empty) return "Fine. Be that way!";

        return "Whatever.";
    }
}  // namespace bob
