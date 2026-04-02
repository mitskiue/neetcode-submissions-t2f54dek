class Solution {
public:
    bool isPalindrome(string s) {

        int l = 0;
        int r = s.size() - 1;

        for (char &c : s) {
            c = std::tolower((unsigned char)c);
        }

        while (l < r) {
            while (l < r && !isalnum(s[l])) l++;
            while (l < r && !isalnum(s[r])) r--;

            if (s[l] != s[r]) {
                return false;
            } else {
                l++;
                r--;
            }

        }
        
        return true;
        
    }
};
