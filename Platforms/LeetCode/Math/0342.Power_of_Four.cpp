class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 0) return false;
        
        int ans =1;
        for(int i = 1; i<=30; i++)
        {
            if(ans == n) return true;
            
            if(ans < INT_MAX/4)
                ans = ans * 4;
        }
        return false;
    }
};
