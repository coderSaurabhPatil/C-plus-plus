#include <iostream>

void modifyValue(int& x) {
    x += 10;
}

int main() {
    const int val = 20;
    int& nonConstRef = const_cast<int&>(val); // Remove constness
    nonConstRef += 10; // Modify the value (undefined behavior)
    
    std::cout << "Modified value: " << val << std::endl; // Output: undefined behavior
    return 0;
}
