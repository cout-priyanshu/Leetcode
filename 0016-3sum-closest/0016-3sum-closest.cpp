class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int closest_sum = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < n; i++){
            int j = i + 1;
            int k = n - 1;
            while(j<k){
                int curr_sum = nums[i] + nums[j] + nums[k] ;
                if(curr_sum == target){
                    return target;
                }
                if (abs(target - curr_sum) < abs(target - closest_sum)) {
                    closest_sum = curr_sum;
                }
                if(curr_sum < target){
                    j++;
                }
                else {
                    k--;
                }
            }
        }
        return closest_sum;
    }
};