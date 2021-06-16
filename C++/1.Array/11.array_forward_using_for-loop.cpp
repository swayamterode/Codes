#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements is array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n ; i++)
    {
        cout<<arr[i]<<endl;
    }
return 0;
}