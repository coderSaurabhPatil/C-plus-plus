#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;


};

int main() {
    Person person1 = {"saurabh",30};
    cout << "Person Name:" << person1.name << ",Age :" << person1.age << endl;
    return 0;
}