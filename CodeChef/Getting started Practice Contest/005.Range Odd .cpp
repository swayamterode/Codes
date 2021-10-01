#include <bits/stdc++.h>
using namespace std;

int rangeOdd(){
    int l,r;
    cin>>l>>r;
    while(l<=r){
        if(l % 2!=0){
            cout<<l<<"\t";
        }
        l++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    rangeOdd();
	return 0;
}
