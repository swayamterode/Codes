#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements is array: "<<endl;
    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The reverse order of array is:"<<endl;
    for (int i = n-1; i >= 0 ; --i){
        cout<<arr[i]<<endl;
    }

    cout<<"\n"<<endl;

    for (int i = n-1; i >= 0 ; i--){
        cout<<arr[i]<<endl;
    }
    return 0;
}