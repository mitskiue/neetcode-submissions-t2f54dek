class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> twoSum;
        
        for (int i = 1; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (target - nums[i] == nums[j]) {
                    twoSum.push_back(j);
                    twoSum.push_back(i);
                }
            }

        }
        
        return twoSum;
    }
};
