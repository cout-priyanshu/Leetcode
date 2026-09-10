class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counts;
        int threshold = nums.size() / 2;

        for (int num : nums) {
            if (++counts[num] > threshold) {
                return num;
            }
        }

        return -1;
    }
};