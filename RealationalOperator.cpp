#include <iostream>

int main() {

    int a = 5, b = 10;

    std::cout << (a == b) << std::endl; // 0 (false)
    std::cout << (a != b) << std::endl; // 1 (true)
    std::cout << (a>b) << std::endl;
    std::cout << (a<b) << std::endl;

    return 0;
}