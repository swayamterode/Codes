class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n = arr.size();
        int count = 0;
        
        for(int  i = 0; i < n -2 ; i++) {
            for(int j = i +1; j< n - 1; j++) {
                
                int cond1 = abs(arr[j] - arr[i]);        
                if(cond1 <=a) 
                {
                    for (int k = j+1; k<n; k++) {
                    
                    int cond2 = abs(arr[k] - arr[j]);
                    int cond3 = abs(arr[k] - arr[i]);
                    
                        if( cond2 <=b and cond3 <= c)
                        count++;
                    }
                }
            }     
        }
        return count;
    }
};
