class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map; //key: number, value: frequemcy.
        vector<vector<int>> buckets(nums.size() + 1);
        vector<int> result;

        for(int num: nums){
            map[num]++;
        }

        for (auto x : map){
            buckets[x.second].push_back(x.first);
        }

        for (int i = buckets.size() - 1; result.size() < k; i--){
            for (int num : buckets[i]) {
                result.push_back(num); // iterate and store each number stored in bucket in result
            }
        }

        return result;
    }
};
