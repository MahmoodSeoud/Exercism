#include "atbash_cipher.h"
using namespace std;

namespace atbash_cipher {

    string alphabet="abcdefghijklmnopqrstuvwxyz";

    char reverse_alpha_char(char c){
        if(!isalpha(c)) return c;
        return alphabet[(alphabet.size() - 1) - alphabet.find(c)];
    }


    string encode(string input){
        string output = input;

        // Replace all non words chars
        output = regex_replace(output, regex(R"([\W])"),"");
        
        // Invert the string as the atbash_cipher
        for (char& c: output) c = reverse_alpha_char(tolower(c));
        
        // Chop it groups of five
        for(auto i = output.begin() + 5; i < output.end(); i += 6) output.insert(i, ' ');

        return output;
    }
        
   string decode(string input){
       string output = input;
        for (char& c: output) c = reverse_alpha_char(towlower(c));
        output = regex_replace(output, regex(R"([\W])"),"");

       return output;
   }

   
}  // namespace atbash_cipher
