#include <iostream>
using namespace std;
//factorial function
int factorial(int n){
    if(n==0)    return 1;
    int partialResult = factorial(n-1);
    return n*partialResult;
}
int main() {
    int n;
    cin>>n;//input number
    if(n<0) cout<<"Error";//if num is negative then error
        else cout<<factorial(n);
    return 0;
}
