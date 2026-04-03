class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;
        vector<vector<int>> buckets(nums.size() + 1);

        for (int num : nums) {
            freq[num]++;
        }

        for (auto& p : freq) {
            int num = p.first;
            int f = p.second;

            buckets[f].push_back(num);
        }

        vector<int> result;

        for (int i = nums.size(); i >= 0 && result.size() < k; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) break;
            }
        }

        return result;
        
    }
};

