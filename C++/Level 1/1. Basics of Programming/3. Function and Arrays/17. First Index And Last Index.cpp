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
  int first_index = -1;
  int last_index = -1;
  int low = 0, high = n - 1;

  while (low <= high) {
    int  mid = (low + high) / 2;

    if (data < arr[mid]) {
      high = mid - 1;
    }
    else if (data > arr[mid]) {
      low = mid + 1;
    }
    else {
      last_index = mid;
      low = mid + 1;
    }
  }

  low = 0;
  high = n - 1;
  while (low <= high) {
    int  mid = (low + high) / 2;
    if (data < arr[mid]) {
      high = mid - 1;
    }
    else if (data > arr[mid]) {
      low = mid + 1;
    }
    else {
      first_index = mid;
      high = mid - 1;
    }
  }
  cout << first_index << endl;
  cout << last_index << endl;
  return 0;
}
