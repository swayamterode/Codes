#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int numElements;
    cin >> numElements;
    int arr[numElements];
    for (int i = 0; i < numElements; i++)
        cin >> arr[i];
    for (int i = numElements - 1; i >= 0; i--)
        cout << arr[i] << " ";
    return 0;
}
