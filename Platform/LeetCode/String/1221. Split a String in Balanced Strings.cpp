class Solution {
public:
    int balancedStringSplit(string s) {
        int res = 0;
        int cnt = 0;
        for(const auto& a:s)
        {
            cnt += (a == 'L') ? 1 : -1;
            if(cnt == 0) ++res;
        }
        return res;
    }
};
