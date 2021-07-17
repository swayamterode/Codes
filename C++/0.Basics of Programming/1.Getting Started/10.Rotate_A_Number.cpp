#include <iostream>
#include<cmath>

using namespace std;
int main() {
  int n, k;
  cin >> n >> k;

  int count = 0;
  int number = n;
  while (number != 0) {
    number /= 10;
    count++;
  }
  k=k%count;
  if(k<0){
      k=k+count;
  }

  int divisor = pow(10, k);
  int multi = pow(10, count - k);
  int quotient = n / divisor;
  int rem = n % divisor ;
  int ans = (rem * multi) + quotient;
  cout << ans << endl;


  return 0;
}