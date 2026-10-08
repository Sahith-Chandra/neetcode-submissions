class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());

        int longest = 0;

        for (int num : nums) {
            //check if num is the start of the sequence
            if (!set.count(num - 1)) {
                int currLength = 0;
                while (set.count(num+currLength)) {
                    currLength++;
                }
                if (currLength > longest) {
                    longest = currLength;
                }
            }
        }
        return longest;
    }
};
