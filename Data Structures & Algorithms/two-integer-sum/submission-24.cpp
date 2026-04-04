class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for (int i = 0; i < nums.size(); i++) {
            int r = nums.size() - 1;
            while (i < r) {
                if (target - nums[i] == nums[r]) {
                    return {i, r}; 
                } r--;
            }
        }
        return {};   
    }
};
