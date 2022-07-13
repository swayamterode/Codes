#include <iostream>
using namespace std;

int main() {
    long N,ans = 0;
    cin>>N;
    for(int i = 1; i <= N; i++ ){
    ans = ans + i;
    }
    cout<<ans<<endl;
	return 0;
}
