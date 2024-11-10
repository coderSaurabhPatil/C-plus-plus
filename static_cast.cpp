#include <iostream>

int main() {

    //Basic data type COnversion
    double d = 3.14;
    int i = static_cast<int>(d); //convert double to int 
    std::cout<< "Convert int:" << i <<std::endl;

    //upcasting: Derived to Base pointer
    class Base {
        public:
        virtual void show() {std::cout << "Base class\n";}
    };

    class Derived : public Base{
        public:
        void show() override {std::cout << "Derived class\n";}
    };
    Derived derivedobj;
    Base* basePtr = static_cast<Base*>(&derivedobj); //Safe upcaste
    basePtr->show();

    return 0;
}