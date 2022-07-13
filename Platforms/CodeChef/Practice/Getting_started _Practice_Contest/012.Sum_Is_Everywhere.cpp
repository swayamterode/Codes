#include <iostream>
using namespace std;

int main() {
    long n;
    cin>>n;
    long odd = 0 , even = 0;
    for(int i = 1 ; i <= n*2 ; i++){
        if( i % 2 == 0){
            even = even + i;
        }
        else odd = odd + i;
    }
    cout<<odd <<" "<<even <<endl;
	return 0;
}
