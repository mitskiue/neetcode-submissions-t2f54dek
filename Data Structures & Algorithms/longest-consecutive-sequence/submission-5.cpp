class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.empty()) return 0;

        int target;
        int n = nums.size();
        unordered_set<int> s(nums.begin(), nums.end());
        int maxLen = 0;

        for (int num : s) {
            target = num - 1;
            if (s.find(target) == s.end()) {
                int next = num + 1;
                int count = 1;

                while (s.find(next) != s.end()) {
                    count++;
                    next++;
                }

                maxLen = max(maxLen, count);
            }
        } 

        return maxLen;
 
    }
};
