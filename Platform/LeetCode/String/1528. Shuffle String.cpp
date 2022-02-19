class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = s;
        for(int i = 0; i<indices.size() ; i++) {
            s[indices[i]] = ans[i];
        }
        return s;
    }
};
