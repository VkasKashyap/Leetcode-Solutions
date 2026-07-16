class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int m = word1.length();
        int n = word2.length();
        s.reserve(m+n);
        for(int i=0;i<max(m,n);i++){
            if(i<m)    s += word1[i];
            if(i<n)    s += word2[i];
        }

        return s;
    }
};