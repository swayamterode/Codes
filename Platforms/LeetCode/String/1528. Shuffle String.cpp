//Brute force
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

//Optimal
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector <char> orignal(s.size());
        for(int i = 0; i<indices.size() ; i++) {
            orignal[indices[i]] = s[i];
        }
        return string (orignal.begin(),orignal.end());
    }
};
