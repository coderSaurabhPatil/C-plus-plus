#include <iostream>
using namespace std;

int main() {
    //Array
    int number [5] = {1,2,3,4,5};
    cout << "array index at index 2 :" << number[2] << endl;

    //pointer
    int x = 10;
    int* ptr =  &x;
    cout << "pointer points to value :" << *ptr <<endl;

    //Refernce 
    int y = 20;
    int& ref = y ;
    ref = 30; //change the value of y through ref
    cout << " value of y after modifing through reference :" << y << endl;

    return 0;
}