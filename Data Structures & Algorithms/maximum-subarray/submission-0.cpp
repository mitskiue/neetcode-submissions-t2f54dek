class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int curSum = 0;
        int best = INT_MIN;
        

        for (int i = 0; i < nums.size(); i++) {
            curSum = max(nums[i], nums[i] + curSum);
            if (curSum > best) {
                best = curSum;
            }
        }

        return best;
    }
};
