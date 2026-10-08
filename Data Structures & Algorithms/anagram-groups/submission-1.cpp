class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map; //key: sorted string, value: all correlated words

        for (string s : strs) {
            string sSorted = s;
            sort(sSorted.begin(), sSorted.end());
            map[sSorted].push_back(s);
        }

        vector<vector<string>> result;
        for (auto x : map) {
            result.push_back(x.second);
        }

        return result;
    }
};
