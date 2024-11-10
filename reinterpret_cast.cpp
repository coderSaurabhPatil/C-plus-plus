#include <iostream>

int main() {
    int number = 65;
    char* charPtr = reinterpret_cast<char*>(&number); //Treat integer as char

    std::cout << "Interpreted as char:" << *charPtr <<std::endl; // print A 

    return 0;
}