class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> list;

        for (auto words : strs) {
            vector<int> count(26,0);

            for (char c : words) {count[c - 'a']++;}

            string key;
            for (int i = 0; i < 26; i++) {
                key += '#' + to_string(count[i]);
            }

            list[key].push_back(words);
        }
        
        vector<vector<string>> result;
        for (auto& p : list) {
            result.push_back(p.second);
        }
        
        return result;
    }
};
