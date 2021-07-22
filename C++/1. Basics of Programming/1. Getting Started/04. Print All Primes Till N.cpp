#include<iostream>
using namespace std;
int main(){
    int low;
    cin>>low;
    int high;
    cin>>high;
    int i, flag = 0;

        for (i = 2; i <= low / 2; ++i) {
         // condition for non-prime
        if (n % i == 0) 
        {
            flag = 1;
            break;
        }
        }

        if (n == 1) 
        {
            cout<<"1 is neither prime nor composite.\n";
        } 

        else 
        {
        if (flag == 0)
        cout<<"prime number.\n\n";
        
        else
        cout<<"Not a prime number.\n\n";
        }
}