class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.size() > s2.size()) return false;

        unordered_map<string, int> res;
        vector<int> count1(26, 0), count2(26, 0);
        int k = s1.length();
        int l = 0;
        
        for (int i = l; i < k; i++) {
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }

        int matches = 0;
        for (int i = 0; i < 26; i++) {
            if (count1[i] == count2[i]) {
                matches++;
            }
            
        }

        for (int r = k; r < s2.size(); r++) {

            if (matches == 26) return true;

            int index = s2[r] - 'a';
            count2[index]++;

            if (count2[index] == count1[index]) {
                matches++;
            } else if (count2[index] == count1[index] + 1) {
                matches--;
            }

            index = s2[l] - 'a';
            count2[index]--;

            if (count2[index] == count1[index]) {
                matches++;
            } else if (count2[index] == count1[index] - 1) {
                matches--;
            }

            l++;
        }
        return matches == 26;
    }
};
