#include <bits/stdc++.h>
using namespace std;

// Linearly search x in arr[].
// If x is present then return the index,
// otherwise return -1
int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] == x)
			return i;
	}
	return -1;
}

int main()
{
	int arr[] = { 1,5,4,3,8,7,10, 30, 15 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << x << " is present at index "
		<< search(arr, n, x);

	getchar();
	return 0;
}