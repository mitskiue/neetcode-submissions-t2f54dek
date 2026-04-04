class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int l = 0;
        int maxLen = 0;
        unordered_set<char> res; 

        for (int i = 0; i < s.length(); i++) {
            while (res.find(s[i]) != res.end()) {
                res.erase(s[l]);
                l++;
            }
            res.insert(s[i]);
            maxLen = max((int)res.size(), maxLen);
        }
        return maxLen;  
    }
};
