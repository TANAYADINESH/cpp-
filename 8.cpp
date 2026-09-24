#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<13){
        cout<<"You are child."<<endl;
    }else if (age>=13 && age<=19){
        cout<<"You are teenager."<<endl;
    }
     else {
        cout<<"You are adult."<<endl;
     }
     return 0;

}