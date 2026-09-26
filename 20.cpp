//Write a function int maxOfTwo(int a, int b) that returns the larger of two numbers (no built-in max() — use an if inside)
 #include <iostream>
using namespace std;
int maxOfTwo(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int num1,num2;
    cout<<"Enter num1:";
    cin>>num1;
    cout<<"Enter num2:";
    cin>>num2;
    cout<<"Max of two numbers is:"<<maxOfTwo(num1,num2)<<endl;     

    return 0;
}