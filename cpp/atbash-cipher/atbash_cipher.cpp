#include "atbash_cipher.h"
#include <iostream>

namespace atbash_cipher {

    std::string encode(std::string str){
        std::string alphabet="abcdefghijklmnopqrstuvwxyz";
        std::string msg = "";

        for (size_t i = 0; i < str.size(); i++){
            int pos = alphabet.find(str[i]);
            char ferro =  alphabet[(alphabet.size()-1) - pos];
            std::cout << ferro << "\n";
            msg += ferro;
        }

        return msg;
    }
        
   // std::string decode(std::string);
   //
}  // namespace atbash_cipher
