#include <iostream>
using namespace std;
int main()
{  
    int a=10,b=3;
    cout<<"The sum of a and b is: "<<a+b<<endl;
    cout<<"The difference of a and b is: "<<a-b<<endl;
    cout<<"The product of a and b is: "<<a*b<<endl;
    cout<<"The quotient of a and b is: "<<a/b<<endl;
    cout<<"The remainder of a and b is: "<<a%b<<endl;
    cout<<"a>b: "<<(a>b)<<endl;
    cout<<"a<b: "<<(a<b)<<endl;
    cout<<"a==b: "<<(a==b)<<endl;

    bool result = (a>b) && (a<b); 
    cout<<"Both true?:"<<(result)<<endl;

    a++;
    cout<<"After incrementing, a is: "<<a<<endl;
    b--;
    cout<<"After decrementing, b is: "<<b<<endl;    
    return 0;
}