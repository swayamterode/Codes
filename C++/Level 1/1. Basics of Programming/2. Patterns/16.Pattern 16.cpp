#include<iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int nod = (n * 2) - 1;    //nod= Number of Digits in Column.
  for (int i = 1; i <= n; i++) {
    int val = i;
    int space = nod - (2 * val);
    int number = 1;
    for (int j = 1; j <= val; j++) {
      cout << number << "\t";
      number++;
    }
    for (int j = 1; j <= space; j++) {
      cout << "\t";
    }
    if (i == n) {
      number--;
      val--;
    }
    for (int j = 1;  j <= val; j++) {
      number--;
      cout << number << "\t";
    }

    cout << endl;
  }
  return 0;
}
