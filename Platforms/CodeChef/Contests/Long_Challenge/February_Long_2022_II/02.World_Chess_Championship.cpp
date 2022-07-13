#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int x;
	cin>>x;
	char str[14];
	cin>>str;

    int countC = 0;
    int countN = 0;
    int countD = 0;

    for(int i = 0; i<14; i++) {
    	if(str[i] == 'C')
    		countC++;
    	else if(str[i] == 'N')
    		countN++;
    	else 
    		countD++;
    }
    countC = 2 * countC + countD;
    countN = 2 * countN + countD;
    
    if(countC > countN) {
    	cout<< 60 * x<<endl;
    }
    else if(countN > countC)
    {
    	cout<< 40 * x<<endl;
    }
    else {
    	cout<< 55 * x<<endl;
    }
  }
}
