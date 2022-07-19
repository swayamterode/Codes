#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int* arr = new int[n];
  for (int i = 0 ; i < n; i++) {
    cin >> arr[i];
  }
  int data;
  cin >> data;
  int low = 0;
  int high = n - 1;
  int ceil = -1;
  int floor = -1;
  while (low <= high) {
    int mid = (low + high ) / 2;
    if (arr[mid] == data) {
      ceil = data;
      floor = data;
      break;
    }
    else if (arr[mid] < data) {
      floor = arr[mid];
      low = mid + 1;
    }
    else {
      ceil = arr[mid];
      high = mid - 1;
    }
  }
  cout << ceil << endl;
  cout << floor << endl;
  return 0;
}
