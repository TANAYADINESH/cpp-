//Write a function bool isEven(int n) that returns true/false — then use it inside an if in main() to print "Even" or "Odd"

#include <iostream>
using namespace std;

bool isEven (int n)
{
    return n%2 == 0;
}
int main(){
    int number;
    cout<<"enter number:";
    cin>>number;

    if(isEven(number)){
        cout<<"Even"<<endl;
    }else{
        cout<<"Odd"<<endl;
    }
}
