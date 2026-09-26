//Write a function int cube(int x) that returns x*x*x, call it from main() with a few different numbers
#include <iostream>
using namespace std;
 int cube(int x){
    return x*x*x;
 }
 int main() {
    cout << "Cube of 2: " << cube(2) << endl;
    cout << "Cube of 3: " << cube(3) << endl; 
    cout << "Cube of 4: " << cube(4) << endl; 
    return 0;
 }