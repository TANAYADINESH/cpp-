#include <iostream>
using namespace std;
int main()
{
  int x = 7;
  cout << (x > 5 && x < 10)<<endl;
  cout << (x > 5 || x > 100)<<endl;
  cout << !(x == 7)<<endl;
  return 0;
}