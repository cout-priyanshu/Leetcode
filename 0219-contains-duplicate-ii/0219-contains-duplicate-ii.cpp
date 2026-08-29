class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> last_seen;

        for (int i = 0; i < nums.size(); ++i) {
            int val = nums[i];
            if (last_seen.count(val) && (i - last_seen[val] <= k)) {
                return true;
            }
            last_seen[val] = i;
        }

        return false;
    }
};