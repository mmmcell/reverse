//
//

#include <iostream>
#include "reverse.hpp"

int main(int argc, const char * argv[]) {
    
    std::string mystr = "hello world";
    int myint = 245;
    
    std::cout << reverse::reverse(mystr) << std::endl;
    std::cout << reverse::reverse(myint) << std::endl;
    
    return 0;
}
