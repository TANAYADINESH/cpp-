//Create an array of 5 numbers (hardcoded), print all of them using a loop

#include<iostream>
using namespace std;

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};

    for(int i=0;i<5;i++){
        cout<<numbers[i]<<" ";
    }
    return 0;
}