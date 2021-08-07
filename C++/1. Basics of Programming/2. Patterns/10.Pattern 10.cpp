#include<iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int space = n / 2;
  int tab = -1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= space; j++) {
      cout << "\t";
    }
    cout << "*\t";
    for (int j = 1; j <= tab; j++) {
      cout << "\t";
    }
    if (i > 1 && i < n) {
      cout << "*\t";
    }
    if (i <= n / 2) {
      space--;
      tab += 2;
    }
    else {
      space++;
      tab -= 2;
    }
    cout << endl;
  }
  return 0;
}