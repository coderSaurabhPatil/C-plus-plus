#include <iostream>
using namespace std;

enum Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

int main() {
    Day today = Wednesday;

    if (today == Wednesday) {
        cout << "Today is Wednesday!" << endl;
    }
    return 0;
}
