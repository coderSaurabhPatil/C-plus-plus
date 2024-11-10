#include <iostream>

class Base {
public:
    virtual ~Base() = default; // Virtual destructor to enable RTTI
};

class Derived : public Base {
public:
    void show() { std::cout << "Derived class\n"; }
};

int main() {
    Base* basePtr = new Derived(); // Base pointer to Derived object
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);

    if (derivedPtr) { // Check if cast is successful
        derivedPtr->show();
    } else {
        std::cout << "Invalid cast\n";
    }

    delete basePtr;
    return 0;
}
