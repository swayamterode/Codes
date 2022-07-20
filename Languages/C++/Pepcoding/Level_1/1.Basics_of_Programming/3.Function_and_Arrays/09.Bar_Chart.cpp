#include<iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int* a = new int [n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int max = a[0];
  for (int i = 1; i < n; i++)
  {
    if (a[i]  > max)
    {
      max = a[i];
    }
  }
  for (int i = max; i >= 1; i--) {
    for (int j = 0; j < n; j++) {
      if ( a[j] >= i) {
        cout << "*\t";
      }
      else {
        cout << "\t";
      }
    }
    cout << endl;
  }

  return 0;
}
