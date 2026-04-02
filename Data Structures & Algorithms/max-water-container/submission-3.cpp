class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        vector<int> area;

        while (l < r) {
            if (heights[l] < heights[r]) {
                area.push_back((r-l) * heights[l]);
                l++;
            } else if (heights[l] > heights[r]) {
                area.push_back((r-l) * heights[r]);
                r--;
            } else {
                area.push_back((r-l) * heights[l]);
                l++;
            }
        }

        int maxVal = area[0]; 
        for (int i = 1; i < area.size(); i++) {
            if (area[i] > maxVal) {
                maxVal = area[i]; 
            }
        }

        return maxVal;
        
    }
};
