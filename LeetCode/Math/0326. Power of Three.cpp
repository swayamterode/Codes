class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 0) return false;
        
        return (n>0) && (1162261467%n ==0);
    }
    
};
