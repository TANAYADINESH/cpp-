#include <iostream>
using namespace std;

int main(){
    
int marks[5] = {90, 85, 70, 60, 95};


for (int i = 0; i < 5; i++) {
    cout << marks[i] << " ";
}


int sum = 0;
for (int i = 0; i < 5; i++) {
    sum += marks[i];
}
cout << "Sum: " << sum << endl;
return 0;
}