class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> prevNums{}; // [value, index]

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (prevNums.count(diff)) {
                return {prevNums[diff], i};
            }
            prevNums.insert({nums[i], i});
        }
        return {};
    }
};
