#include <string>
#include <algorithm>

class Solution {
public:
    int countBinarySubstrings(std::string s) {
        int ans = 0;
        int prev_len = 0;
        int curr_len = 1;

        for (int i = 1; i < s.length(); ++i) {
            if (s[i] == s[i - 1]) {
                curr_len++;
            } else {
                ans += std::min(prev_len, curr_len);
                prev_len = curr_len;
                curr_len = 1;
            }
        }
        ans += std::min(prev_len, curr_len);

        return ans;
    }
};