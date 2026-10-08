class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if (seen.count(need) > 0) {
                return {seen[need], i};
            }

            seen.insert({nums[i], i});
        }
        return {};
    }
};
