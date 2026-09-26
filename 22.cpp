//Write a function void printTable(int n) that prints the multiplication table of n from 1 to 10 (this one returns nothing — just prints)
#include <iostream>
using namespace std;
void printTable(int n){
    for(int i = 1; i <= 10; i++){
        cout << n << " x " << i << " = " << n * i << endl;
    }
}
int main(){
    int number;
    cout << "Enter number: ";
    cin >> number;
    printTable(number);
    return 0;
}