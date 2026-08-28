class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int p1 = m - 1;          
        int p2 = n - 1;  
        int curr = m + n - 1;  
        
        // Jab tak nums2 ke elements bache hain
        while (p2 >= 0) {
            // Agar p1 valid hai aur nums1 ka element bada hai
            if (p1 >= 0 && nums1[p1] > nums2[p2]) {
                nums1[curr] = nums1[p1];
                p1--;
            } else {
                // Nahi toh nums2 ka element bada ya barabar hai
                nums1[curr] = nums2[p2];
                p2--;
            }
            curr--;
        }
    }
};