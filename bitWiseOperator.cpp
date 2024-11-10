#include <iostream>


int main() {
    int a = 5, b=3; ///a : 0101, b: 0011 in binary form 
    std::cout << (a& b) <<std::endl;
    std::cout << (a | b) << std::endl;
    std::cout << (a ^ b) << std::endl; //bitwise xor operator
    std::cout << (a << 1) << std::endl; //left shift
    std::cout << (a >> 1) << std::endl; //right shift 

    return 0;

}