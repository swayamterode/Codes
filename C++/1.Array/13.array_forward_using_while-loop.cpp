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
    int i=0;
    cout<<"Array is: "<<endl;
    while (i< n)
    {
        cout<<arr[i]<<endl;
        i++;
    }
return 0;    
}