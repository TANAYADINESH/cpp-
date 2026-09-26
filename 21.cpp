//Write a function int factorial(int n) using a loop inside it (reuse your Day 5 factorial logic, but now as a reusable function)
#include <iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int number;
    cout<<"Enter number:";   
    cin>>number;
    cout<<"Factorial of "<<number<<" is "<<factorial(number)<<endl;
    return 0;
}