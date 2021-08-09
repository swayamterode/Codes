#include<iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int num1 = 0;
  int num2 = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << num1 << "\t";
      int sum = num1 + num2;
      num1 = num2;
      num2 = sum;
    }
    cout << endl;
  }
  return 0;
}