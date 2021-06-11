#include<bits\stdc++.h>
using namespace std;
int main ()
{
    cout<<"You entered float A[6] = {1.1,2.2,3.3,4.4,5.5,6.6} \nBut in for loop you have initialize int x.\nso\n";
    cout<<"This Array will not give the value of array as it is:\n";
    float A[6] = {1.1,2.2,3.3,4.4,5.5,6.6};
    for (int x:A){
    cout<<x<<endl;
    }
    cout<<"\n\n";
    cout<<"You entered float B[6] = {1.1,2.2,3.3,4.4,5.5,6.6}.\nIn the for loop We initialize float x.\nSo\n";
    cout<<"This Array will give the value of array as it is:\n";
    float B[6] = {1.1,2.2,3.3,4.4,5.5,6.6};
    for (float x:B){
    
    cout<<x<<endl;
    }
    cout<<"\n\n";
    return 0;
}
