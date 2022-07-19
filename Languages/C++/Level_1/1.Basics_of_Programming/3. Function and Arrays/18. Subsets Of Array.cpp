#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinary(int n) {
  int ans = 0;
  int power = 1;
  while (n != 0) {
    int rem = n % 2;
    n /= 2;
    ans += (rem * power);
    power *= 10;
  }
  return ans;
};

int main(){
  int n;
  cin >> n;
  int* arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int subset = pow(2, n);
  
  for (int i = 0; i < subset; i++) {
  
    int bn = decimalToBinary(i);
    int div = pow(10, n - 1);
  
    for (int j = 0; j < n; j++)
    {
      int q = bn / div;
      int r = bn % div;

      if (q == 0)
      {
        cout << "-	";
      }
      else
      {
        cout << arr[j] << "	";
      }
      bn = r;
      div /= 10;
    }
    cout << endl;
  }
  return 0;
}