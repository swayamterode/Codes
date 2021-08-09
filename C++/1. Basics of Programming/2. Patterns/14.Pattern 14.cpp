#include<iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int tableLimit = 10;
  for (int i = 1; i <= tableLimit; i++) {
    cout << n << " * " << i << " = " << n* i << endl;
  }
  cout << endl;
  return 0;
}