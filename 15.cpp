//Find the factorial of a number (n! = 1×2×3×...×n) using a loop

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int factorial =1;

    for(int i=1;i<=n;i++){
        factorial *= i;
    }
    cout << "Factorial of " << n << " is " << factorial << endl;
    return 0;
}