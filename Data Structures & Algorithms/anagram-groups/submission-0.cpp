class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> result;

        for (string s : strs) {
            vector<int> charFreq(26, 0);

            for (char c : s) {
                charFreq[c - 'a']++;
            }

            string key = to_string(charFreq[0]);
            for (int i = 1; i<26; i++){
                key = key + ',' + to_string(charFreq[i]);
            }
            map[key].push_back(s);
        }
        for(auto& x : map) {
            result.push_back(x.second);
        }
        return result;
    }
};
