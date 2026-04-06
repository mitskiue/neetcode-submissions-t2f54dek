class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        stack<float> res;

        for (int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.begin(), cars.end(), greater<>());

        for (int i = 0; i < cars.size(); i++) {
            float time = (float)(target - cars[i].first) / (float)cars[i].second;

            if (!res.empty()) {
                if (time > res.top()) {
                    res.push(time);
                }
            } else {
                res.push(time);
            }
        }
        return res.size();
    }
};
