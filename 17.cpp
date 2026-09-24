//Count how many even numbers there are between 1 and 20, printing just the count at the end (hint: you'll need a second accumulator variable, similar to sum from the earlier exercise — but this time you're counting, not summing)

#include <iostream>
using namespace std;
int main() {
    int count = 0; // accumulator variable to count even numbers
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            count++; // increment count for each even number found
        }
    }
    cout << "Count of even numbers between 1 and 20: " << count << endl; // print the final count
    return 0;  
} 