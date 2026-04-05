class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> warm;
        vector<int> res(temperatures.size(), 0);

        for (int i = 0; i < temperatures.size(); i++) {

            while (!warm.empty() && temperatures[i] > temperatures[warm.top()]) {
                int prevIndex = warm.top();
                warm.pop();
                res[prevIndex] = i - prevIndex;
            }

            warm.push(i); 
        }

        return res;
    }
};