#include <iostream>

int main() {
    int a = 5;
    std::cout << ++a << std::endl; //pre-increment
    std::cout << a-- <<std::endl; //post-increment

    std::cout << sizeof(a) << "bytes" << std::endl;
    return 0;
}