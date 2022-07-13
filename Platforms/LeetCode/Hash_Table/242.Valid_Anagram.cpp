class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s==t) return true;
        
        if(s.size()!=t.size()) return false;
        
        int umap[26] = {};
        for(int i=0; i<s.size();i++){
            umap[s[i]- 'a']++;
            umap[t[i]- 'a']--;
        }
            for(int i =0; i<26; i++){
                if(umap[i]) return false;
            }
        return true;
    }
};

//Hash Map

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s==t) return true;
        
        if(s.size()!=t.size()) return false;
        
        unordered_map<char,int> umap;
        for(char c:s) umap[c]++;
        for(char c:t){
            umap[c]--;
            if(umap[c]<0) return false;
        }
        return true;
    }
};
