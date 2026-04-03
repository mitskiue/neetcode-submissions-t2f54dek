class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        vector<int> start;
        int target;
        int n = nums.size();
        unordered_set<int> s(nums.begin(), nums.end());

        for (int num : nums) {
            target = num - 1;
            if (s.find(target) == s.end()) {
                start.push_back(num);
            }
        } 

        vector<int> result;

        for (int validStart : start) {
            int next = validStart + 1;
            int count = 1;

            while (s.find(next) != s.end()) {
                count++;
                next++;
            }

            result.push_back(count);
        }

        if (nums.empty()) return 0;
        int maxVal = result[0];
        for (int i = 1; i < result.size(); i++) {
            if (result[i] > maxVal) {
                maxVal = result[i];
            }
        }

        return maxVal;
 
    }
};
