class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        
        // Agar pehle se hi aakhri index par khade hain to 0 jumps lagenge
        if (n <= 1) return 0;

        int jumps = 0;
        int current_end = 0;  // Current jump ki aakhri boundary
        int farthest = 0;     // Agli jump se kitni door pahunch sakte hain

        // Loop n - 2 tak hi chalega, kyunki aakhri index (n - 1) par pahunchkar jump nahi lena
        for (int i = 0; i < n - 1; ++i) {
            
            // i index se kitni door jaa sakte hain, update karo
            farthest = max(farthest, i + nums[i]);

            // Agar hum current jump ki limit tak pahunch gaye
            if (i == current_end) {
                jumps++;                 // Ek jump complete hua
                current_end = farthest;  // Agle jump ki boundary set kar di

                // Agar nayi boundary aakhri index tak pahunch gayi, aage loop chalane ki zaroorat nahi
                if (current_end >= n - 1) {
                    break;
                }
            }
        }

        return jumps;
    }
};