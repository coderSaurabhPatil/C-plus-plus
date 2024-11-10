#include <iostream>
using namespace std;

class Car {
    public:
    string model;
    int year;


    void display() {
        cout << " Model:" << model << ",Year:"<< year <<endl;
    }
};

int main(){
    Car car1 = { "tesala model s:", 2023};
    car1.display();
    return 0;
}