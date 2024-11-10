#include <iostream>

int main() {
    bool a = true, b = false;
    std::cout << (a && b) <<std::endl; // 0 false 
    std::cout << (a|| b) << std::endl; // 1 true
    std::cout << !a <<std::endl;
    return 0;
}