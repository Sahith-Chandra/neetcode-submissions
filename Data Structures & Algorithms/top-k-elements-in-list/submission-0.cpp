class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map; //key: number, value: freq

        for (int num : nums) {
            map[num]++; //if that num appears, increment it's frequency
        }

        vector<vector<int>> buckets(nums.size() + 1);

        for (auto x : map) {
            buckets[x.second].push_back(x.first); //index: freq, value: list of numbers
        }
        
        vector<int> result;

        for(int i = buckets.size() - 1; result.size() < k; i--) {
            for (int num: buckets[i]) {
                result.push_back(num);
            }
        }
        return result;
    }
};
