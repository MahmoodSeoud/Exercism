#include "rotational_cipher.h"
using namespace std;

namespace rotational_cipher {
    string alphabet="abcdefghijklmnopqrstuvwxyz";

    char encode(char ch, int key, char base){
        if (!isalpha(ch)) return ch;
        return (ch - base + key ) % 26 + base;
    }

    string rotate(string str, int key){
        for (char& ch: str){
            char base =  isupper(ch) ? 'A': 'a';
            ch = encode(ch, key, base);
        }

        return str;
    }

}  // namespace rotational_cipher
