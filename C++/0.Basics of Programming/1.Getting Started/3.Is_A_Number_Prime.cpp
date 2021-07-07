#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int i, flag = 0;

        for (i = 2; i <= n / 2; ++i) {
        // condition for non-prime
        if (n % i == 0) 
        {
            flag = 1;
            break;
        }
        }

        if (n == 1 || n==0) 
        {
            cout<<n<<" is neither prime nor composite.\n";
        } 

        else 
        {
        if (flag == 0)
        cout<<"prime number.\n\n";
        
        else
        cout<<"Not a prime number.\n\n";
        }
    }
}
