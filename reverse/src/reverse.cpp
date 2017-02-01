//
//

#include "reverse.hpp"


std::string reverse::reverse(const std::string& orig){
    std::string copy = orig;
    std::reverse(copy.begin(), copy.end());
    return copy;
}

int reverse::reverse(const int& orig){
    
    int copy = orig;
    int reversed = 0;
    
    while (copy !=0){
        reversed *= 10;
        reversed += copy % 10;
        copy /= 10;
    }
    
    return reversed;
}