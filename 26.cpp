//Take 5 numbers as input from the user into an array, then print their sum and average

#include <iostream>
using namespace std;
int main() {
    int numbers[5];
    int sum =0;

    for(int i=0;i<5;i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>numbers[i];
        sum+=numbers[i];
    }
    double average = sum / 5.0;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<average<<endl;

    return 0;
}