#include <bits\stdc++.h>
using namespace std;
int main(){
    
    int num;
    cout<<"Enter numbers:";
    cin>>num;
    while(num > 0){
        int remainder = num % 10 ;
        num /=10;
        cout<<remainder<<endl;
    }
return 0;
}