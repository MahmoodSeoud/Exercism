#include "reverse_string.h"
using namespace std;
namespace reverse_string {
    string reverse_string(string str){
        string output = "";
        for (auto i = str.rbegin(); i < str.rend();++i){
            output += *i;
        }
        return output;
    }
}  // namespace reverse_string
