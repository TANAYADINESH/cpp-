#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    int category = age / 10;

    switch (category) {
        case 0:
        case 1:
            if (age < 13)
                cout << "Child";
            else
                cout << "Teenager";
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            cout << "Adult";
            break;
        default:
            cout << "Invalid age";
    }
    return 0;
}