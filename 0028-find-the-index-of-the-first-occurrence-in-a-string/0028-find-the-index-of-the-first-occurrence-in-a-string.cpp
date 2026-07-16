class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int pos = haystack.find(needle);

        if(pos < haystack.length()) return pos;

        return -1;
    }
};